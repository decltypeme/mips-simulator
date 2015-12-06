#include "Jr.h"
#include <stdexcept>
using namespace std;



Jr::Jr(int _rs)
	: rs(_rs)
{
	if (!valid()) throw logic_error("Bad construction of jr instruction.");
}

Jr::~Jr() {}

void Jr::fetch()
{
	rsData = registers[rs];
}

bool Jr::valid()
{
	return (rs < 0) || (rs > 31);
}