#include "jr.h"
#include <stdexcept>
using namespace std;

extern int PC;
extern int registers[32];

jr::jr(int source)
	:source(source)
{
	if (!valid()) throw logic_error("Bad construction of jr instruction.");
}

jr::~jr() {}

void jr::operate() { PC = registers[source]; }

bool jr::valid()
{
	return (source < 0) || (source > 31);
}