#pragma once
#include "Utility.h"

class inst
{
public:
	inst();
	virtual ~inst();

	virtual void fetch();
	virtual void execute();
	virtual void memory();
	virtual void writeBack();
};
