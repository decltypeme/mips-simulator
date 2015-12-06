#pragma once
#include "J.h"

class Jmp : public J
{
public:
	Jmp(int address = -1);
	virtual ~Jmp();
	virtual void fetch();
};
