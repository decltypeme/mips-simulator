#pragma once
#include "inst.h"

class Ret : public inst
{
public:
	Ret();
	virtual ~Ret();
	void fetch();
	int addressPopped;
};
