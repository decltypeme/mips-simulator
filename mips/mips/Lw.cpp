#include "Lw.h"

Lw::Lw(int _rs, int _rt, int _immediate):iformat(_rs, _rt, _immediate)
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