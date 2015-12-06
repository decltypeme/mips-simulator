#pragma once
#include "iformat.h"
class Lw :
	public iformat
{
public:
	Lw(int _rs = -1, int _rt = -1, int _immediate = 0);
	virtual ~Lw();
	virtual void execute();
	virtual void memory();
};