#include "utility.h"

Addi::Addi()
{
}


Addi::~Addi()
{
}

void Addi::execute()
{
	writeData = readData[0] + immediate;
}

void Addi::memory()
{
}

void Addi::writeBack()
{
	writeRegister(destination, writeData);
}
