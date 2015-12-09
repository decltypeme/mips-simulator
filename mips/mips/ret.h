#pragma once
#include "inst.h"
#include <string>

class Ret : public inst
{
public:
	Ret(int _instAddress = -1, std::string _instString = "nop");
	virtual ~Ret();
	void fetch();
	int addressPopped;
	int instAddress;
	virtual bool valid();
};
