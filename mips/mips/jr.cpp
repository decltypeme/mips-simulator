#include "Jr.h"
#include <stdexcept>
using namespace std;



Jr::Jr(int _rs, int _instAddress, string _instString)
	:inst(_instString), instAddress(_instAddress), rs(_rs)
{
	if (!valid()) throw logic_error("Bad construction of jr instruction.");
}

Jr::~Jr() {}

void Jr::fetch()
{
	rsData = readRegister(rs);
}

bool Jr::valid()
{
	return (rs >= 0) && (rs <= 31)
		&& (instAddress >= 0);
}