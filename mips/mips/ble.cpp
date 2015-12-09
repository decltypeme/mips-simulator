#include "Ble.h"
using namespace std;


Ble::Ble(int _rt, int _rs,  int _immediate, int _instAddress, string _instString)
	:iformat(_rt, _rs, _immediate, _instAddress, _instString){}

Ble::~Ble() {}

void Ble::fetch()
{
	addressIfNotTaken = PC ;
	addressIfTaken = immediate + PC  ;
}

void Ble::execute()
{
	if (readRegister(rs) <= readRegister(rt))
	{
		addressTrue = addressIfTaken;
	}
	else
	{
		addressTrue = addressIfNotTaken;
	}
}

void Ble::writeBack() {}
