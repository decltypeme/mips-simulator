#pragma once
#include "iformat.h"
class Sw :
	public iformat
{
public:
	Sw(int _rs = -1, int _rt = -1, int _immediate = 0);
	virtual ~Sw();
	virtual void execute();
	virtual void memory();
	virtual void writeBack();
};