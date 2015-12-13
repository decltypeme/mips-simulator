
#include "instructions.h"
#include <algorithm>
using namespace std;


void fetch()
{
	sort(begin(hazards), end(hazards));
	if (!(binary_search(begin(hazards), end(hazards), 51) || binary_search(begin(hazards), end(hazards), 52)
		|| binary_search(begin(hazards), end(hazards), 41) || binary_search(begin(hazards), end(hazards), 42)))
	{
		int oldPC = PC;
		PC = updatePC();
		pipeline[3] = pipeline[2];
		pipeline[2] = pipeline[1];
		pipeline[1] = pipeline[0];
		pipeline[0] = inst_memory[oldPC];
	}
	if ((binary_search(begin(hazards), end(hazards), 51)))
	{
		pipeline[3] = pipeline[2];
		pipeline[2] = pipeline[1];
		pipeline[1] = new inst();
	}
	if ((binary_search(begin(hazards), end(hazards), 52)))
	{
		pipeline[3] = pipeline[2];
		pipeline[2] = new inst();
	}
	if ((binary_search(begin(hazards), end(hazards), 41)))
	{
		PC = updatePC();
		pipeline[3] = pipeline[2];
		pipeline[2] = pipeline[1];
		pipeline[1] = pipeline[0];
		pipeline[0] = new inst();
	}

	if ((binary_search(begin(hazards), end(hazards), 42)))
	{
		PC = updatePC();
		pipeline[3] = pipeline[2];
		pipeline[2] = pipeline[1];
		pipeline[1] = new inst();

		Ble* bleptr = dynamic_cast <Ble*> (pipeline[1]);

		J* jptr = dynamic_cast <J*> (pipeline[0]);
		if (bleptr->addressTrue != jptr->instAddress)
			pipeline[0] = new inst();

		Jr* jrptr = dynamic_cast <Jr*> (pipeline[0]);
		if (bleptr->addressTrue != jrptr->instAddress)
			pipeline[0] = new inst();

		Ret* retptr = dynamic_cast <Ret*> (pipeline[0]);
		if (bleptr->addressTrue != jptr->instAddress)
			pipeline[0] = new inst();

		rformat* rptr = dynamic_cast <rformat*> (pipeline[0]);
		if (bleptr->addressTrue != rptr->instAddress)
			pipeline[0] = new inst();

		iformat* iptr = dynamic_cast <iformat*> (pipeline[0]);
		if (bleptr->addressTrue != iptr->instAddress)
			pipeline[0] = new inst();

	}
}

void decode()
{
	pipeline[0]->fetch();
	hazardDetection();
	sort(begin(hazards), end(hazards));
	for_each(begin(hazards), end(hazards), dealWithForwarding);
}

void execute()
{
	pipeline[1]->execute();
}

void memory()
{
	pipeline[2]->memory();
}

void writeBack()
{
	pipeline[3]->writeBack();
}