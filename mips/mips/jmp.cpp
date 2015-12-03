#include "jmp.h"
#include <stdexcept>
using namespace std;

extern void pushtostack(int address);
extern int PC;
extern void proposePC(int proposedPC, inst* instProposing);

jmp::jmp(int address, int instAddress)
	:j(address, instAddress) {}

jmp::~jmp() {}

void jmp::operate() { pushtostack(PC +4); proposePC(address, this); }