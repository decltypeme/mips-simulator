#pragma once
#include "iformat.h"
class Addi :
	public iformat
{
public:
	Addi(int rt = -1, int rs = -1, int immediate = 0);
	virtual ~Addi();
	virtual void execute();
};