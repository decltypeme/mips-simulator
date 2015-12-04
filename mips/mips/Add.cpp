#include "Add.h"

Add::~Add()
{
}

void Add::execute()
{
	writeData = read_data[0] + read_data[1];
}

Add::Add(int rs, int rt, int rd)
	:rformat(rs, rt, rd)
{
}
