#include "jmp.h"
#include <stdexcept>
using namespace std;

extern void pushtostack(int address);
extern int PC;

jmp::jmp(int address)
	:j(address) {}

jmp::~jmp() {}

void jmp::operate() { pushtostack(PC +4); PC = address; }