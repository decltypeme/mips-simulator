#pragma once
#include "rformat.h"
class Xor :
	public rformat
{
public:
	Xor(int rs=-1, int rt=-1, int rd=-1);
	virtual ~Xor();
	virtual void execute();
};