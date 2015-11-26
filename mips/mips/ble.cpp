#include "ble.h"

extern int registers[32];
extern int PC;
extern void proposePC(int proposedPC);

ble::ble(int source1, int source2, int immediate)
	:iformat(source1, source2, immediate) {}

ble::~ble() {}

void ble::operate()
{
	if (registers[source] >= registers[destination])
		proposePC(PC + 4 + immediate);
	else
		proposePC(PC + 4);
}