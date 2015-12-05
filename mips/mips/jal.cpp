#include "Jal.h"
#include <stdexcept>
using namespace std;

extern int PC;
extern int registers[32];
extern void proposePC(int proposedPC, const inst* instProposing);

Jal::Jal(int address)
	:J(address) {}

Jal::~Jal() {}

void Jal::execute() const { registers[31] = PC + 4; proposePC(address, this); }