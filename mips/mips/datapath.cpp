
#include "inst.h"

extern void hazard_detection();
extern inst* pipeline[4];

void fetch()
{
		
}

void decode()
{
	pipeline[0]->fetch();
}

void execute()
{
	pipeline[1]->execute();
}

void memory()
{
	pipeline[2]->memory();
}

void write_back()
{
	pipeline[3]->writeBack();
}