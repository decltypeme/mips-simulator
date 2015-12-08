#include "Lw.h"
using namespace std;

Lw::Lw(int _rt, int _rs,  int _immediate, int _instAddress, string _instString)
	:iformat(_rt, _rs,  _immediate, _instAddress, _instString)
{
}


Lw::~Lw()
{
}

void Lw::execute()
{
	writeData = rs + immediate;
}

void Lw::memory()
{
	writeData = readDataMem(writeData);
}