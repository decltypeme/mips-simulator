#include "Addi.h"
using namespace std;

Addi::Addi(int _rs, int _rt, int _immediate, int _instAddress, string _instString)
	:iformat(_rs, _rt, _immediate, _instAddress, _instString)
{

}


Addi::~Addi()
{
}

void Addi::execute()
{
	writeData = rsData + immediate;
}
