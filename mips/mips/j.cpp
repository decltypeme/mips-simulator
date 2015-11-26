#include "j.h"
#include <stdexcept>
using namespace std;

extern int PC;

j::j(int address, int hazard)
	:address(address), hazard(hazard)
{
	if (!valid()) throw logic_error("Bad construction of j instruction.");
}

j::~j() {}

void j::operate() { PC = address; }

bool j::valid()
{
	return (address != -1) || (hazard != -1);
}