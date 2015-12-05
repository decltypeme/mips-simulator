#pragma once
#include "iformat.h"
class Lw :
	public iformat
{
public:
	Lw(int rs, int rt, int immediate);
	virtual ~Lw();
	virtual void execute();
	virtual void memory();
	virtual void writeBack();
};