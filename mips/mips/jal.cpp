#include "jal.h"
#include <stdexcept>
using namespace std;

extern int PC;
extern int registers[32];
extern void proposePC(int proposedPC);

jal::jal(int address)
	:j(address) {}

jal::~jal() {}

void jal::operate() { registers[31] = PC + 4; proposePC(address); }