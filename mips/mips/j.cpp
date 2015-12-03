#include "j.h"
#include <stdexcept>
using namespace std;

extern int PC;
extern void proposePC(int proposedPC, inst* instProposing);

j::j(int address)
	:address(address)
{
	if (!valid()) throw logic_error("Bad construction of jump instruction.");
}

j::~j() {}

void j::operate() { proposePC(address, this); }

bool j::valid()
{
	return (address != -1);
}