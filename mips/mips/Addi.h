#pragma once
#include "iformat.h"
class Addi :
	public iformat
{
public:
	Addi(int _rt = -1, int _rs = -1, int _immediate = 0);
	virtual ~Addi();
	virtual void execute();
};