#pragma once
#include "rformat.h"
class Add:
	public rformat
{
public:
	Add(int rs, int rt, int rd);
	virtual ~Add();
	virtual void execute();
};