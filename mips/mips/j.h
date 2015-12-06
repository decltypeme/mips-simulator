#pragma once
#include "inst.h"

class J : public inst
{
public:
	J(int address = -1);
	virtual ~J();

	int address;
	virtual bool valid();
};
