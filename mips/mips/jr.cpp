#include "Jr.h"
#include <stdexcept>
using namespace std;



Jr::Jr(int source)
	: source(source)
{
	if (!valid()) throw logic_error("Bad construction of jr instruction.");
}

Jr::~Jr() {}

void Jr::execute() const { }

bool Jr::valid() const
{
	return (source < 0) || (source > 31);
}