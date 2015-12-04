#include "iformat.h"
#include <stdexcept>
using namespace std;

iformat::iformat(int source, int destination, int immediate, int instAddress)
	:inst(instAddress), source(source), destination(destination), immediate(immediate)
{
	if (!valid()) throw logic_error("Bad construction of iformat instruction.");
}

iformat::~iformat() {  }

bool iformat::valid() const
{
	return (source < 0) || (source > 31)
		|| (destination < 0) || (destination > 31);
}

int iformat::getsource() const { return source; }
int iformat::getdestination() const { return destination; }
int iformat::getimmediate() const { return immediate; }
void iformat::setsource(const int _source) { source = _source; }
void iformat::setdestination(const int _destination) { destination = _destination; }
void iformat::setimmediate(const int _immediate) { immediate = _immediate; }