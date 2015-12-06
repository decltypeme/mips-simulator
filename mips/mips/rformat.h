#pragma once
#include "inst.h"

class rformat : public inst
{
public:
	rformat(int _rs = -1, int _rt = -1 , int _rd = -1);
	virtual ~rformat();
	virtual void fetch();
	virtual void writeBack();
	int rs;
	int rt;
	int rd;
	int rsData;
	int rtData;
	int writeData;
	virtual bool valid();
};
