#include "rformat.h"
#include <stdexcept>
using namespace std;

rformat::rformat(int source1, int source2, int destination, int hazard)
	:source1(source1), source2(source2), destination(destination), hazard(hazard)
{
	if (!valid()) throw logic_error("Bad construction of rformat instruction.");
}

rformat::~rformat() {  }

bool rformat::valid()
{
	return (source1 < 0) || (source1>31)
		|| (source2 < 0) || (source2 > 31)
		|| (destination > 0) && (destination > 31)
		|| (hazard != -1);
}