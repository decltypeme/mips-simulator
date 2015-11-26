#include "j.h"
#include <stdexcept>
using namespace std;

extern int PC;
extern void proposePC(int proposedPC);

j::j(int address)
	:address(address)
{
	if (!valid()) throw logic_error("Bad construction of jump instruction.");
}

j::~j() {}

void j::operate() { proposePC(address); }

bool j::valid()
{
	return (address != -1);
}