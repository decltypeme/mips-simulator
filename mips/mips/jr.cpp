#include "utility.h"
#include <stdexcept>
using namespace std;



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