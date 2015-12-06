#pragma once
#include "inst.h"
#include <string>

class J : public inst
{
public:
	J(int _immediate = -1, int _instAddress = -1, string _instString = "nop");
	virtual ~J();

	int immediate;
	int address;
	int instAddress;

	virtual void fetch();
	virtual bool valid();
};
