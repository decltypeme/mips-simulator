#include "utility.h"
Xor::~Xor()
{
}

void Xor::execute()
{
	writeData = read_data[0] ^ read_data[1];
}

Xor::Xor(int rs, int rt, int rd)
	:rformat(rs, rt, rd)
{
}
