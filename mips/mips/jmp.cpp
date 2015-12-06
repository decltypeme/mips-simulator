#include "Jmp.h"
#include <stdexcept>
using namespace std;



Jmp::Jmp(int _immediate)
	:J(_immediate) {}

Jmp::~Jmp() {}

void Jmp::fetch() { J::fetch(); pushtostack(PC +4);}