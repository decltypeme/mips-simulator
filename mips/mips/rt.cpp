#include "rt.h"
#include <stdexcept>
using namespace std;

extern int popfromstack();
extern int PC;

rt::rt(int hazard)
	:hazard(hazard)
{
	if (!valid()) throw logic_error("Bad construction of rt instruction.");
}

rt::~rt() {}

void rt::operate() { PC = popfromstack(); }

bool rt::valid()
{
	return hazard != -1;
}