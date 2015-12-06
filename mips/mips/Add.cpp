#include "Add.h"

Add::Add(int _rs, int _rt, int _rd, int _instAddress, string _instString)
	:rformat(_rs, _rt, _rd, _instAddress, _instString)
{
}

Add::~Add()
{
}

void Add::execute()
{
	writeData = rsData + rtData;
}


