#pragma once
#include "rformat.h"
class Slt :
	public rformat
{
public:
	Slt(int rs=-1, int rt=-1, int rd=-1);
	virtual ~Slt();
	virtual void execute();
};