#pragma once
#include "iformat.h"
class Lw :
	public iformat
{
public:
	Lw();
	virtual ~Lw();
	virtual void execute();
	virtual void memory();
	virtual void writeBack();
};