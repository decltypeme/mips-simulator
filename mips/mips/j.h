#pragma once
#include "inst.h"

class J : public inst
{
public:
	J(int _immediate = -1);
	virtual ~J();

	int immediate;
	int address;

	virtual void fetch();
	virtual bool valid();
};
