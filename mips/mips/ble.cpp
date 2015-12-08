#include "Ble.h"
using namespace std;


Ble::Ble(int _rs, int _rt, int _immediate, int _instAddress, string _instString)
	:iformat(_rs, _rt, _immediate, _instAddress, _instString){}

Ble::~Ble() {}

void Ble::fetch()
{
	addressIfNotTaken = PC + 1;
	addressIfTaken = immediate + PC + 1 ;
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
