#include "j.h"
#include <stdexcept>
using namespace std;

extern int PC;

j::j(int address)
	:address(address)
{
	if (!valid()) throw logic_error("Bad construction of jump instruction.");
}

j::~j() {}

void j::operate() { PC = address; }

bool j::valid()
{
	return (address != -1);
}