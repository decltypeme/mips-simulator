#include "iformat.h"
#include <stdexcept>
using namespace std;

iformat::iformat(int source1, int source2, int immediate)
	:source1(source1), source2(source2), immediate(immediate)
{
	if (!valid()) throw logic_error("Bad construction of iformat instruction.");
}

iformat::~iformat() {  }

bool iformat::valid()
{
	return (source1 < 0) || (source1>31)
		|| (source2 < 0) || (source2 > 31);
}