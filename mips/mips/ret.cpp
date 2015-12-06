#include "Ret.h"
#include <stdexcept>
using namespace std;


Ret::Ret(int _instAddress, string _instString): inst(_instString), instAddress(_instAddress){}

Ret::~Ret() {}

void Ret::fetch() { addressPopped = popfromstack(); }

bool Ret::valid()
{
	return (instAddress >= 0);
}
