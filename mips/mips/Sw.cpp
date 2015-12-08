#include "Sw.h"
using namespace std;

Sw::Sw(int _rt, int _rs, int _immediate, int _instAddress, string _instString)
	:iformat(_rt, _rs,  _immediate, _instAddress,  _instString)
{
}


Sw::~Sw()
{
}

void Sw::execute()
{
	addressResolved = readRegister(rs) + immediate;
}

void Sw::memory()
{
	writeDataMem(addressResolved, rt);
}

void Sw::writeBack(){}
