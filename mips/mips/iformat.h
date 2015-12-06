#pragma once
#include "inst.h"

class iformat : public inst
{
public:
	iformat(int rs = -1, int rt = -1, int immediate = 0);
	virtual ~iformat();
	virtual void fetch();
	virtual void writeBack();
	int rs;
	int rt;
	int immediate;
	int rsData;
	int rtData;
	int writeData;
	virtual bool valid();
};
