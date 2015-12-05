#pragma once
#include "inst.h"

class Jr : public inst
{
public:
	Jr(int source = -1);
	virtual ~Jr();
	virtual void execute() const;
	int getsource() const;
	void setsource(const int source);

protected:
	int source;
	virtual bool valid() const;
};
