#include "Jmp.h"
#include <stdexcept>
using namespace std;



Jmp::Jmp(int _immediate, int _instAddress, string _instString)
	:J(_immediate, _instAddress, _instString) {}

Jmp::~Jmp() {}

void Jmp::fetch() { J::fetch(); pushtostack(PC +4);}