#include "Jal.h"
#include <stdexcept>
using namespace std;



Jal::Jal(int _immediate)
	:J(_immediate) {}

Jal::~Jal() {}

void Jal::fetch() { J::fetch(); registers[31] = PC + 4; }