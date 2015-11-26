#include "jmp.h"
#include <stdexcept>
using namespace std;

extern void pushtostack(int address);
extern int PC;
extern void proposePC(int proposedPC);

jmp::jmp(int address)
	:j(address) {}

jmp::~jmp() {}

void jmp::operate() { pushtostack(PC +4); proposePC(address); }