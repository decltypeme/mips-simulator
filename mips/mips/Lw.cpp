#include "utility.h"

Lw::Lw(int rs, int rt, int immediate):iformat(rs, rt, immediate)
{
}


Lw::~Lw()
{
}

void Lw::execute()
{
	writeData = readData[0] + immediate;
}

void Lw::memory()
{
	writeData = readDataMem(writeData);
}

void Lw::writeBack()
{
	writeRegister(destination, writeData);
}
