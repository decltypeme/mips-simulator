
#include "Slt.h"
using namespace std;

Slt::Slt(int _rd, int _rs, int _rt,  int _instAddress, string _instString)
	:rformat(_rd, _rs, _rt, _instAddress, _instString)
{
}


Slt::~Slt()
{
}

void Slt::execute()
{
	writeData = (rsData < rtData) ? 1 : 0;
}

