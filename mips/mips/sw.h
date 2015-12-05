#pragma once
#include "iformat.h"
class Sw :
	public iformat
{
public:
	Sw();
	virtual ~Sw();
	virtual void execute();
	virtual void memory();
	virtual void writeBack();
};