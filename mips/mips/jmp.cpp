#include "Jmp.h"
#include <stdexcept>
using namespace std;

extern void pushtostack(int address);
extern int PC;
extern void proposePC(int proposedPC, const inst* instProposing);

Jmp::Jmp(int address)
	:J(address) {}

Jmp::~Jmp() {}

void Jmp::execute() const {  pushtostack(PC +4); proposePC(address, this); }