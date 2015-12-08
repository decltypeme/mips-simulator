#include "Addi.h"
using namespace std;

Addi::Addi(int _rt, int _rs,  int _immediate, int _instAddress, string _instString)
	:iformat(_rt, _rs, _immediate, _instAddress, _instString)
{

}


Addi::~Addi()
{
}

void Addi::execute()
{
	writeData = rsData + immediate;
}
