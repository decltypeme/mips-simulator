#pragma once
#include "J.h"
#include <string>

class Jmp : public J
{
public:
	Jmp(int _immediate = -1, int _instAddress = -1, std::string _instString = "nop");
	virtual ~Jmp();
	virtual void fetch();
};
