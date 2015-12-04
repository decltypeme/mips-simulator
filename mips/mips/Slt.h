#pragma once
#include "rformat.h"
class Slt :
	public rformat
{
public:
	Slt(int rs, int rt, int rd);
	virtual ~Slt();
	virtual void execute();
};