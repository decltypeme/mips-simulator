#pragma once
#include "rformat.h"
class Add:
	public rformat
{
public:
	Add(int _rs=-1, int _rt=-1, int _rd=-1);
	virtual ~Add();
	virtual void execute();
};