#include "Add.h"
using namespace std;

Add::Add(int _rd, int _rs, int _rt,  int _instAddress, string _instString)
	:rformat(_rd, _rs, _rt, _instAddress, _instString)
{
}

Add::~Add()
{
}

void Add::execute()
{
	writeData = rsData + rtData;
}


