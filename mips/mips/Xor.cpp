#include "Xor.h"
using namespace std;

Xor::Xor(int _rs, int _rt, int _rd, int _instAddress, string _instString)
	:rformat(_rs, _rt, _rd, _instAddress , _instString)
{
}


Xor::~Xor()
{
}

void Xor::execute()
{
	writeData = rsData ^ rtData;
}

