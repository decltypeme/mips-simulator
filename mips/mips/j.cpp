#include "j.h"
#include <stdexcept>
using namespace std;

extern int PC;
extern void proposePC(int proposedPC, const inst* instProposing);

j::j(int address, int instAddress)
	:inst(instAddress), address(address)
{
	if (!valid()) throw logic_error("Bad construction of jump instruction.");
}

j::~j() {}

void j::operate() const { proposePC(address, this); }

bool j::valid() const
{
	return (address != -1);
}

int j::getaddress() const { return address; }
void j::setaddress(const int _address) { address = _address; }