#pragma once
#include "J.h"
#include <string>

class Jal : public J
{
public:
	Jal(int _immediate = -1, int _instAddress = -1, std::string _instString = "nop");
	virtual ~Jal();
	virtual void fetch();
	virtual void writeBack();
	int returnAddress;
};
