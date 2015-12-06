
#include <cstring>
#include <stdexcept>
#include <algorithm>

#include "parser.h"

using namespace std;


int PC = 0;
int registers[maxRegNumber + 1];
int stack_size = 0;
int stack[4];
int data_memory[dataMemSize];
inst* inst_memory[instMemSize];
inst* pipeline[4];
int hazards[5];

struct prediction 
{ int inst_address; bool taken;
prediction()
	:inst_address(-1), taken(0) {}
	prediction(int _inst_address, bool _taken)
	:inst_address(_inst_address), taken(_taken) {}
};
prediction bpt[instMemSize];
int prediction_count = 0;

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

void initialize()
{
	memset(registers, 0, sizeof(registers));
	memset(stack, 0, sizeof(stack));
	memset(data_memory, 0, sizeof(data_memory));
	memset(hazards, 0, sizeof(hazards));
}

void pushtostack(int address)
{
	if (stack_size < 4)
	{
		stack[++stack_size] = address;
	}
	else
		throw logic_error("Stack full.");
}

int popfromstack()
{
	if (stack_size > 0)
	{
		return stack[stack_size--];
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
			return bleptr->addressIfTaken;
		else
			return bleptr->addressIfNotTaken;
	}
	else
	{
		bpt[static_cast<unsigned int>(prediction_count)%instMemSize] = prediction(bleptr->instAddress,0);
		prediction_count++;
		return bleptr->addressIfNotTaken;
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
	Ble* bleptr = dynamic_cast<Ble*> (pipeline[2]);
	for (int i = 0; i < instMemSize; ++i)
	{
		bptptr = getbptptr(bpt[i], bleptr->instAddress);
		if (bptptr)
			break;
	}

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
		return false;
	}
	else
		return true;
}

int updatePC()
{
	J* jptr = dynamic_cast <J*> (pipeline[0]);
	Jr* jrptr = dynamic_cast <Jr*> (pipeline[0]);
	Ret* retptr = dynamic_cast <Ret*> (pipeline[0]);
	Ble* bleptr = dynamic_cast <Ble*> (pipeline[0]);

	if (!(jptr || retptr || bleptr || jrptr)) return PC + 4;
	else
	{
		if (jptr)
		{
			return jptr->address;
		}
		if (retptr)
		{
			return retptr->addressPopped;
		}
		if (bleptr)
		{
			return predict_branch();
		}
		if (jrptr)
		{
			return jrptr->rsData;
		}
	}
}