#include "Add.h"

Add::Add(int _rs, int _rt, int _rd)
	:rformat(_rs, _rt, _rd)
{
}

Add::~Add()
{
}

void Add::execute()
{
	writeData = rsData + rtData;
}


