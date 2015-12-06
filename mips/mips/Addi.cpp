#include "Addi.h"

Addi::Addi(int _rt = -1, int _rs = -1, int _immediate = 0)
:iformat(_rt,_rs,_immediate){
}


Addi::~Addi()
{
}

void Addi::execute()
{
	writeData = rsData + immediate;
}
