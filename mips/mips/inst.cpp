
#include "inst.h"
#include <stdexcept>
using namespace std;


inst::inst(int hazard):hazard(hazard){ if (!valid) throw logic_error("Ill constructed instruction. Simulation would be stopped now."); };
inst::~inst() {};
void inst::operate() {};
bool inst::valid() { hazard != -1; }