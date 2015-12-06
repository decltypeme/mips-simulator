#pragma once
#include "rformat.h"
class Xor :
	public rformat
{
public:
	Xor(int _rs=-1, int _rt=-1, int _rd=-1);
	virtual ~Xor();
	virtual void execute();
};