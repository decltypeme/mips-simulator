#include "Jr.h"
#include <stdexcept>
using namespace std;

extern int PC;
extern int registers[32];
extern void proposePC(int proposedPC, const inst* instProposing);

Jr::Jr(int source)
	: source(source)
{
	if (!valid()) throw logic_error("Bad construction of jr instruction.");
}

Jr::~Jr() {}

void Jr::execute() const { proposePC(registers[source], this); }

bool Jr::valid() const
{
	return (source < 0) || (source > 31);
}

int Jr::getsource() const { return source; }
void Jr::setsource(const int _source) { source = _source; }