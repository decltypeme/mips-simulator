#pragma once
#include "inst.h"

class J : public inst
{
public:
	J(int address = -1);
	virtual ~J();
	virtual void execute() const;
	int address;
	virtual bool valid() const;
};
