#include "Lw.h"

Lw::Lw()
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
