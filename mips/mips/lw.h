#pragma once
#include "iformat.h"
class Lw :
	public iformat
{
public:
	Lw(int rs = -1, int rt = -1, int immediate = 0);
	virtual ~Lw();
	virtual void execute();
	virtual void memory();
};