#pragma once
#include "rformat.h"
class Add:
	public rformat
{
public:
	Add(int rs=-1, int rt=-1, int rd=-1);
	virtual ~Add();
	virtual void execute();
};