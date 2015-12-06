#include "Jmp.h"
#include <stdexcept>
using namespace std;



Jmp::Jmp(int address)
	:J(address) {}

Jmp::~Jmp() {}

void Jmp::execute() const {  pushtostack(PC +4); proposePC(address, this); }