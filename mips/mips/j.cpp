#include "J.h"
#include <stdexcept>
using namespace std;



J::J(int _immediate)
	: immediate(_immediate)
{
	if (!valid()) throw logic_error("Bad construction of a jump instruction.");
}

J::~J() {}

void J::fetch()
{
	int tempPC = PC >> 28;
	tempPC = tempPC << 28;
	address = immediate * 4 ^ tempPC;
}

bool J::valid()
{
	return (immediate >=0);
}
