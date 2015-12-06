#pragma once
#include "iformat.h"
class Sw :
	public iformat
{
public:
	Sw(int rs = -1, int rt = -1, int immediate = 0);
	virtual ~Sw();
	virtual void execute();
	virtual void memory();
};