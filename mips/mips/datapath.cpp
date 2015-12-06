
#include "parser.h"
#include <algorithm>
using namespace std;

void fetch()
{
	if (!(binary_search(begin(hazards), end(hazards), 51) || binary_search(begin(hazards), end(hazards), 52)
		|| binary_search(begin(hazards), end(hazards), 41) || binary_search(begin(hazards), end(hazards), 42)))
	{
		pipeline[3] = pipeline[2];
		pipeline[2] = pipeline[1];
		pipeline[1] = pipeline[0];
		pipeline[0] = &inst_memory[PC];
		PC = updatePC();
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
		pipeline[3] = pipeline[2];
		pipeline[2] = pipeline[1];
		pipeline[1] = pipeline[0];
		pipeline[0] = new inst();
		PC = updatePC();
	}
	
	if ((binary_search(begin(hazards), end(hazards), 42)))
	{
		pipeline[3] = pipeline[2];
		pipeline[2] = pipeline[1];
		pipeline[1] = new inst();
		pipeline[0] = new inst();
		PC = updatePC();
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