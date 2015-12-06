#include "Jal.h"
#include <stdexcept>
using namespace std;



Jal::Jal(int address)
	:J(address) {}

Jal::~Jal() {}

void Jal::execute() const { registers[31] = PC + 4; proposePC(address, this); }