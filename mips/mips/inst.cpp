
#include "inst.h"
#include <stdexcept>
using namespace std;

inst::inst(): inst::inst(0) {}
inst::inst(int instAddress) { if (!valid()) throw logic_error("Bad construction of instruction."); }
inst::~inst() {};
void inst::operate() const {};
bool inst::valid() const { return (instAddress >= 0); }
int inst::getinstAddress() const {return instAddress;}
void inst::setinstAddress(const int _instAddress) {instAddress = _instAddress;}