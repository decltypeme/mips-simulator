#include "Ble.h"


Ble::Ble(int _rs, int _rt, int _immediate)
	:iformat(_rs, _rt, _immediate) {}

Ble::~Ble() {}

void Ble::fetch()
{
	addressIfNotTaken = PC + 4;
	addressIfTaken = immediate + PC + 4;
}

void Ble::execute()
{
	if (registers[rs] > registers[rt]);
}

void Ble::writeBack() {}

