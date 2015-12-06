#pragma once
#include "J.h"

class Jal : public J
{
public:
	Jal(int address = -1);
	virtual ~Jal();
	virtual void fetch();
};
