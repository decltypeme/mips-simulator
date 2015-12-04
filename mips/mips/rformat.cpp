#include "rformat.h"
#include <stdexcept>
using namespace std;

rformat::rformat(int source1, int source2, int destination)
	:source1(source1), source2(source2), destination(destination)
{
	if (!valid()) throw logic_error("Bad construction of rformat instruction.");
}

rformat::~rformat() {  }

bool rformat::valid() const
{
	return (source1 < 0) || (source1>31)
		|| (source2 < 0) || (source2 > 31)
		|| (destination > 0) || (destination > 31);
}

int rformat::getsource1() const { return source1; }
int rformat::getsource2() const { return source2; }
int rformat::getdestination() const { return destination; }

void rformat::setsource1(const int _source1) { source1 = _source1; }
void rformat::setsource2(const int _source2) { source2 = _source2; }
void rformat::setdestination(const int _destination) { destination = _destination; }