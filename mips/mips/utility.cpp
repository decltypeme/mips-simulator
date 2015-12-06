
#include <cstring>
#include <stdexcept>

#include "utility.h"

using namespace std;

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

void proposePC(int proposedPC, const inst* instProposing)
{

}