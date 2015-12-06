#include "Sw.h"
Sw::Sw(int _rs, int _rt, int _immediate) :iformat(_rs, _rt, _immediate)
{
}


Sw::~Sw()
{
}

void Sw::execute()
{
	writeData = rs + immediate;
}

void Sw::memory()
{
	writeDataMem(writeData, rt);
}

void Sw::writeBack(){}
