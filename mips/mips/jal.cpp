#include "jal.h"
#include <stdexcept>
using namespace std;

extern int PC;
extern int registers[32];
extern void proposePC(int proposedPC, const inst* instProposing);

jal::jal(int address)
	:j(address) {}

jal::~jal() {}

void jal::operate() const { registers[31] = PC + 4; proposePC(address, this); }