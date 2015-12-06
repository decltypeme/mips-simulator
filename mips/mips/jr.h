#pragma once
#include "inst.h"

class Jr : public inst
{
public:
	Jr(int source = -1);
	virtual ~Jr();
	virtual void execute() const;
	int source;
	virtual bool valid() const;
};
