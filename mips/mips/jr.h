#pragma once
#include "inst.h"

class Jr : public inst
{
public:
	Jr(int _rs = -1);
	virtual ~Jr();
	virtual void fetch();
	
	int rs;
	int rsData;
	
	virtual bool valid();
};
