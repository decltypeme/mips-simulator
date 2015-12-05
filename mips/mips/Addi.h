#pragma once
#include "iformat.h"
class Addi :
	public iformat
{
public:
	Addi();
	virtual ~Addi();
	virtual void execute();
	virtual void memory();
	virtual void writeBack();
};