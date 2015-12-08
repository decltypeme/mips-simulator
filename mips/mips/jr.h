#pragma once
#include "inst.h"
#include <string>

class Jr : public inst
{
public:
	Jr(int _rs = -1, int _instAddress = -1, std::string _instString = "nop");
	virtual ~Jr();
	virtual void fetch();
	
	int rs;
	int rsData;
	int instAddress;
	
	virtual bool valid();
};
