
#include "inst.h"
#include <stdexcept>
using namespace std;


inst::inst(int hazard):hazard(hazard){ if (!valid()) throw logic_error("Bad construction of nop instruction."); };
inst::~inst() {};
void inst::operate() {};
bool inst::valid() { return hazard != -1; }