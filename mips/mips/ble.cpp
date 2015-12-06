#include "Ble.h"


Ble::Ble(int _rs, int _rt, int _immediate, int _instAddress, string _instString)
	:iformat(_rs, _rt, _immediate, _instAddress, _instString){}

Ble::~Ble() {}

void Ble::fetch()
{
	addressIfNotTaken = PC + 4;
	addressIfTaken = immediate + PC +4 ;
}

void Ble::execute()
{
	if (registers[rs] <= registers[rt])
	{
		adressTrue = addressIfTaken;
	}
	else
	{
		adressTrue = addressIfNotTaken;
	}
}

void Ble::writeBack() {}
