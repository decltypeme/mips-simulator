
#include "Slt.h"
using namespace std;

Slt::Slt(int _rs, int _rt, int _rd, int _instAddress, string _instString)
	:rformat(_rs, _rt, _rd, _instAddress, _instString)
{
}


Slt::~Slt()
{
}

void Slt::execute()
{
	writeData = (rsData < rtData) ? 1 : 0;
}

