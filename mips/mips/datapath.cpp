
#include "instructions.h"

extern void hazard_detection(int& current_hazards);
extern inst* pipeline[4];
extern inst inst_memory[16];
extern int PC;
int current_hazards = 0;

void fetch()
{
	hazard_detection(current_hazards);

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
		if (
			pipeline[1]->setsource1data(pipeline[2]->getwriteData());
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