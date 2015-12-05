#pragma once
#include "inst.h"

class Ret : public inst
{
public:
	Ret();
	virtual ~Ret();
	virtual void execute() const;
};
