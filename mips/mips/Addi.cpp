#include "Addi.h"

Addi::Addi(int rt = -1, int rs = -1, int immediate = 0)
:iformat(rt,rs,immediate){
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
