#include "iformat.h"
#include <stdexcept>
using namespace std;

iformat::iformat(int _rs, int _rt, int _immediate)
	: rs(_rs), rt(_rt), immediate(_immediate)
{
	if (!valid()) throw logic_error("Bad construction of iformat instruction.");
}

iformat::~iformat() {  }

void iformat::fetch()
{
	rsData = readRegister(rs);
	rtData = readRegister(rt);
}

void iformat::writeBack()
{
	writeRegister(rt, writeData);
}

bool iformat::valid()
{
	return (rs < 0) || (rs>31)
		|| (rt < 0) || (rt > 31);
}
