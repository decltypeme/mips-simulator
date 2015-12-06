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
		|| (destination < 0) || (destination > 31);
}


void rformat::fetch()
{
	read_data[0] = readRegister(source1);
	read_data[1] = readRegister(source2);
}
void rformat::execute()
{

}
void rformat::memory()
{

}
void rformat::writeBack()
{
	writeRegister(destination, writeData);
}