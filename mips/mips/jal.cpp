#include "Jal.h"
#include <stdexcept>
using namespace std;



Jal::Jal(int _immediate, int _instAddress, string _instString)
	:J(_immediate, _instAddress, _instString) {}

Jal::~Jal() {}

void Jal::fetch() { J::fetch(); writeRegister(31, PC+1); }