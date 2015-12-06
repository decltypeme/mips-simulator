#include "utility.h"
Sw::Sw(int rs, int rt, int immediate) :iformat(rs, rt, immediate)
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
