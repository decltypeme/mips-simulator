#pragma once
#include "inst.h"

class rformat : public inst
{
public:
	rformat(int rs = -1, int rt = -1 , int rd = -1);
	virtual ~rformat();
	virtual void fetch();
	virtual void writeBack();
	int rs;
	int rt;
	int destination;
	int rsData;
	int rtData;
	int writeData;
	virtual bool valid();
};
