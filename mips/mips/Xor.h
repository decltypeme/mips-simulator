#pragma once
#include "rformat.h"
class Xor :
	public rformat
{
public:
	Xor(int rs, int rt, int rd);
	virtual ~Xor();
	virtual void execute();
};