#pragma once
#include "rformat.h"
class Slt :
	public rformat
{
public:
	Slt(int _rs=-1, int _rt=-1, int _rd=-1);
	virtual ~Slt();
	virtual void execute();
};