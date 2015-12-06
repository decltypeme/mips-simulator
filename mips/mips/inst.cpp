
#include "inst.h"
#include <stdexcept>
using namespace std;

inst::inst():inst("nop")
{}

inst::inst(string _instString = "nop"): instString(_instString){}
inst::~inst() {}
void inst::fetch() {}
void inst::execute() {}
void inst::memory() {}
void inst::writeBack() {}
bool inst::valid() { return true; }