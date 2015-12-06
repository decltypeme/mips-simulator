#include "Lw.h"

Lw::Lw(int _rs, int _rt, int _immediate, int _instAddress, string _instString)
	:iformat(_rs, _rt, _immediate, _instAddress, _instString)
{
}


Lw::~Lw()
{
}

void Lw::execute()
{
	writeData = rs + immediate;
}

void Lw::memory()
{
	writeData = readDataMem(writeData);
}