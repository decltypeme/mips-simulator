#include "Xor.h"

Xor::Xor(int _rs, int _rt, int _rd)
	:rformat(_rs, _rt, _rd)
{
}


Xor::~Xor()
{
}

void Xor::execute()
{
	writeData = rsData ^ rtData;
}

