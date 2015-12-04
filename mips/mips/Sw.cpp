#include "Sw.h"

Sw::Sw()
{
}


Sw::~Sw()
{
}

void Sw::execute()
{
	writeData = readData[0] + immediate;
}

void Sw::memory()
{
	writeDataMem(writeData, readData[1]);
}

void Sw::writeBack()
{
}
