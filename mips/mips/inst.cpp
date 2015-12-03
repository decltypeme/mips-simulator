
#include "inst.h"
#include <stdexcept>
using namespace std;

inst::inst(): inst::inst(0) {}
inst::inst(int instAddress) { if (!valid()) throw logic_error("Bad construction of instruction."); }
inst::~inst() {};
void inst::operate() {};
bool inst::valid() { return (instAddress >= 0); }