
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
		Ble* bleptr = dynamic_cast<Ble*> (pipeline[0]);
		if (bleptr != nullptr)
		{
			prediction* bptptr = nullptr;
			for (int i = 0; i < instMemSize; ++i)
			{
				bptptr = getbptptr(bpt[i], bleptr->instAddress);
				if (bptptr)
					break;
			}

			if (bptptr)
			{
				if (bptptr->taken)
				{
					pipeline[0] = new inst();
				}
				else
				{
					pipeline[0] = inst_memory[oldPC];
				}
			}
			else
			{
				pipeline[0] = inst_memory[oldPC];
			}
		}
		else
		{
			pipeline[0] = inst_memory[oldPC];
		}
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
		pipeline[0] = new inst();
	}
}

void decode()
{
	pipeline[0]->fetch();
	hazardDetection();
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