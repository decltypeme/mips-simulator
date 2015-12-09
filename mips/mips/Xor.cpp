#include "Xor.h"
using namespace std;

Xor::Xor(int _rd, int _rs, int _rt, int _instAddress, string _instString)
	:rformat(_rd, _rs, _rt,  _instAddress , _instString)
{
}


Xor::~Xor()
{
}

void Xor::execute()
{
	writeData = rsData ^ rtData;
}

