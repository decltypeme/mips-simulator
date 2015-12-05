#include "J.h"
#include <stdexcept>
using namespace std;

extern int PC;
extern void proposePC(int proposedPC, const inst* instProposing);

J::J(int address)
	: address(address)
{
	if (!valid()) throw logic_error("Bad construction of jump instruction.");
}

J::~J() {}

void J::execute() const { proposePC(address, this); }

bool J::valid() const
{
	return (address != -1);
}

int J::getaddress() const { return address; }
void J::setaddress(const int _address) { address = _address; }