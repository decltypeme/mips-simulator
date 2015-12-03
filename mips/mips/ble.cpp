#include "ble.h"

extern int registers[32];
extern int PC;
extern void proposePC(int proposedPC, inst* instProposing);

ble::ble(int source1, int source2, int immediate, int instAddress)
	:iformat(source1, source2, immediate, instAddress) {}

ble::~ble() {}

void ble::operate()
{
	if (registers[source] >= registers[destination])
		proposePC(PC + 4 + immediate, this);
	else
		proposePC(PC + 4, this);
}