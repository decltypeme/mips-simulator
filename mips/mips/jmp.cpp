#include "jmp.h"
#include <stdexcept>
using namespace std;

extern void pushtostack(int address);
extern int PC;
extern void proposePC(int proposedPC, const inst* instProposing);

jmp::jmp(int address)
	:j(address) {}

jmp::~jmp() {}

void jmp::execute() const {  pushtostack(PC +4); proposePC(address, this); }