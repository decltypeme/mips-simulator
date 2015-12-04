#include "jr.h"
#include <stdexcept>
using namespace std;

extern int PC;
extern int registers[32];
extern void proposePC(int proposedPC, const inst* instProposing);

jr::jr(int source)
	: source(source)
{
	if (!valid()) throw logic_error("Bad construction of jr instruction.");
}

jr::~jr() {}

void jr::execute() const { proposePC(registers[source], this); }

bool jr::valid() const
{
	return (source < 0) || (source > 31);
}

int jr::getsource() const { return source; }
void jr::setsource(const int _source) { source = _source; }