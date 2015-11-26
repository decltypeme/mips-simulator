#include "iformat.h"
#include <stdexcept>
using namespace std;

iformat::iformat(int source, int destination, int immediate)
	:source(source), destination(destination), immediate(immediate)
{
	if (!valid()) throw logic_error("Bad construction of iformat instruction.");
}

iformat::~iformat() {  }

bool iformat::valid()
{
	return (source < 0) || (source > 31)
		|| (destination < 0) || (destination > 31);
}