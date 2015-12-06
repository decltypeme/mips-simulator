#include "Sw.h"
Sw::Sw(int _rs, int _rt, int _immediate, int _instAddress, string _instString) 
	:iformat(_rs, _rt, _immediate, _instAddress,  _instString)
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
