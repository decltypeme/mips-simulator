#pragma once
#include "iformat.h"
class Sw :
	public iformat
{
public:
	Sw(int rs, int rt, int immediate);
	virtual ~Sw();
	virtual void execute();
	virtual void memory();
	virtual void writeBack();
};