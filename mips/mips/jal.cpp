#include "jal.h"
#include <stdexcept>
using namespace std;

extern void pushtostack(int address);
extern int PC;
extern int registers[32];

jal::jal(int address, int hazard)
	:j(address, hazard) {}

jal::~jal() {}

void jal::operate() { registers[31] = PC + 4; PC = address; }