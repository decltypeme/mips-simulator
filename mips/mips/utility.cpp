
#include <cstring>
#include <stdexcept>
#include <string>
#include <algorithm>

#include "instructions.h"
using namespace std;


int PC = 0;
int registers[maxRegNumber + 1];
int stack_size = 0;
int stack[4];
int data_memory[dataMemSize];
inst* inst_memory[instMemSize];
inst* pipeline[4];
int hazards[5];
prediction bpt[instMemSize];
string hazard_msgs[3];

hazardMsg* gethazardMsgPtr(int value)
 {
	for (int i = 0; i < 14; i++)
		 {
		if (hazardMsgs[i].value == value)
			 {
		return &hazardMsgs[i];
			}
		}
	return nullptr;
	}


bool validateRegister(const int& reg)
{
	return !(reg < 0 || reg >maxRegNumber);
}

int readRegister(const int& reg)
{
	if (!validateRegister(reg))
		throw invalid_argument("Invalid register passed");
	if (reg)
		return registers[reg];
	else
		return 0;
}

void writeRegister(const int&reg, const int& value)
{
	if (!validateRegister(reg))
		throw invalid_argument("Invalid register passed");
	if (reg)
		registers[reg] = value;
	return;
}

int readDataMem(const int& index)
{
	return data_memory[index];
}

void writeDataMem(const int& index, const int& value)
{
	data_memory[index] = value;
}

void fillNops()
{
	for (int i = 0; i < 4; ++i)
	{
		pipeline[i] = new inst();
	}

	for (int i = 0; i < instMemSize; ++i)
	{
		inst_memory[i] = new inst();
	}
	for (int i = 0; i < instMemSize; ++i)
	{
		bpt[i] = prediction();
	}
}

void reset ()
{
	PC = 0;
	stack_size = 0;
	memset(registers, 0, sizeof(registers));
	memset(stack, 0, sizeof(stack));
	memset(data_memory, 0, sizeof(data_memory));
	memset(hazards, 0, sizeof(hazards));
	for (int i = 0; i < 4; ++i)
	{
		pipeline[i] = new inst();
	}
	for (int i = 0; i < instMemSize; ++i)
	{
		bpt[i] = prediction();
	}
}

void initialize()
{
	PC = 0;
	stack_size = 0;
	memset (registers, 0, sizeof(registers));
	memset (stack, 0, sizeof(stack));
	memset (data_memory, 0, sizeof(data_memory));
	memset (hazards, 0, sizeof(hazards));
	fillNops();
}

void pushtostack(int address)
{
	if (stack_size < 4)
	{
		stack[stack_size++] = address;
	}
	else
		throw logic_error("Stack full.");
}

int popfromstack()
{
	if (stack_size > 0)
	{
		return stack[--stack_size];
	}
	else
		throw logic_error("Stack empty.");
}

int predict_branch()
{
	prediction* bptptr = nullptr;
	Ble* bleptr = dynamic_cast<Ble*> (pipeline[0]);
	for (int i = 0; i < instMemSize; ++i)
	{
		bptptr = getbptptr(bpt[i], bleptr->instAddress);
		if (bptptr)
			break;
	}

	if (bptptr)
	{
		if (bptptr->taken)
			if (bleptr->addressIfTaken == PC)
			{
				return PC + 1;
			}
			else { return bleptr->addressIfTaken; }
		else
		{
			if (bleptr->addressIfNotTaken == PC)
			{
				return PC + 1;
			}
			else { return bleptr->addressIfNotTaken; }
		}
	}
	else
	{
		bpt[static_cast<unsigned int>(bleptr->instAddress)%instMemSize] = prediction(bleptr->instAddress,0);
		if (bleptr->addressIfNotTaken == PC)
		{
			return PC + 1;
		}
		else { return bleptr->addressIfNotTaken; }
	}
}

prediction* getbptptr (prediction& totest, int inst_address)
{
	if (totest.inst_address == inst_address) return &totest;
	else return nullptr;
}

bool right_prediction()
{
	prediction* bptptr = nullptr;
	Ble* bleptr = dynamic_cast<Ble*> (pipeline[1]);
	for (int i = 0; i < instMemSize; ++i)
	{
		bptptr = getbptptr(bpt[i], bleptr->instAddress);
		if (bptptr)
			break;
	}

	if (bptptr)
	{
		int branchedToLastTime;
		if (bptptr->taken)
		{
			branchedToLastTime = bleptr->addressIfTaken;
		}
		else
		{
			branchedToLastTime = bleptr->addressIfNotTaken;
		}

		if (branchedToLastTime != bleptr->addressTrue)
		{
			bptptr->taken = !(bptptr->taken);
			bleptr->specialFlag = 1;
			return false;
		}
		else
		{
			bleptr->specialFlag = 0;
			return true;
		}
	}
	else
		return false;
}

int updatePC()
{
	J* jptr = dynamic_cast <J*> (pipeline[0]);
	Jr* jrptr = dynamic_cast <Jr*> (pipeline[0]);
	Ret* retptr = dynamic_cast <Ret*> (pipeline[0]);
	Ble* bleptr0 = dynamic_cast <Ble*> (pipeline[0]);
	Ble* bleptr1 = dynamic_cast <Ble*> (pipeline[1]);

	if (bleptr1!= nullptr)
		if(bleptr1->specialFlag==0)
		{
			if (jptr)
			{
				if (jptr->address != PC)
					return jptr->address;
				else
					return PC + 1;
			}
			if (retptr)
			{
				if (retptr->addressPopped != PC)
					return retptr->addressPopped;
				else
					return PC + 1;
			}
			if (bleptr0)
			{
				return predict_branch();
			}
			if (jrptr)
			{
				if (jrptr->rsData != PC)
					return jrptr->rsData;
				else
					return PC + 1;
			}

			return PC + 1;
		}
		else
		{
			bleptr1->specialFlag = 0;
			return bleptr1->addressTrue;
		}
	else
	{
		if (jptr)
		{
			if (jptr)
			{
				if (jptr->address != PC)
					return jptr->address;
				else
					return PC + 1;
			}

		}
		if (retptr)
		{
			if (retptr->addressPopped != PC)
				return retptr->addressPopped;
			else
				return PC + 1;
		}
		if (bleptr0)
		{
			return predict_branch();
		}
		if (jrptr)
		{
			if (jrptr->rsData != PC)
				return jrptr->rsData;
			else
				return PC + 1;
		}

		return PC + 1;
	}
}