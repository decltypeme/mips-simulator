#include "Ble.h"


Ble::Ble(int source1, int source2, int immediate)
	:iformat(source1, source2, immediate) {}

Ble::~Ble() {}

void Ble::execute() const
{
	if (registers[source] >= registers[destination])
		proposePC(PC + 4 + immediate, this);
	else
		proposePC(PC + 4, this);
}