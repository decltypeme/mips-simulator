#include "utility.h"

Slt::~Slt()
{
}

void Slt::execute()
{
	writeData = (read_data[0] < read_data[1]) ? 1 : 0;
}

Slt::Slt (int rs, int rt, int rd)
	:rformat(rs, rt, rd)
{
}
