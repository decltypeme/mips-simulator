
#include "Slt.h"

Slt::Slt(int _rs, int _rt, int _rd)
	:rformat(_rs, _rt, _rd)
{
}


Slt::~Slt()
{
}

void Slt::execute()
{
	writeData = (rsData < rtData) ? 1 : 0;
}

