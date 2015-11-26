#include "jmp.h"
#include <stdexcept>
using namespace std;

extern void pushtostack(int address);
extern int PC;

jmp::jmp(int address, int hazard)
	:j(address, hazard) {}

jmp::~jmp() {}

void jmp::operate() { pushtostack(PC + 4); PC = address; }