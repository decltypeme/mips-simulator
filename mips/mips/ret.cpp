#include "Ret.h"
#include <stdexcept>
using namespace std;


Ret::Ret(int _instAddress, string _instString): inst(_instString), instAddress(_instAddress)
{
	if (!valid()) throw logic_error("Bad construction of ret instruction.");
}

Ret::~Ret() {}

void Ret::fetch() { addressPopped = popfromstack(); }

bool Ret::valid()
{
	return (instAddress >= 0);
}
