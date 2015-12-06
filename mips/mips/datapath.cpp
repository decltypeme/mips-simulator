
#include "utility.h"

int current_hazards;

void fetch()
{
	//hazard_detection(current_hazards);

	pipeline[0] = &inst_memory[PC];
	pipeline[1] = pipeline[0];
	pipeline[2] = pipeline[1];
	pipeline[3] = pipeline[2];
}

void decode()
{
	if (current_hazards == 0)
	{
		pipeline[0]->fetch();
	}
}

void execute()
{
	if (current_hazards == 0)
	{
		pipeline[1]->execute();
	}
	else if (current_hazards == 1)
	{
		
	}
	else if (current_hazards == 2)
	{

	}
}

void memory()
{
	if (current_hazards == 0)
	{
		pipeline[2]->memory();
	}
	
}

void write_back()
{

	if (current_hazards == 0)
	{
		pipeline[3]->writeBack();
	}
}