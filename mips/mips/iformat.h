#pragma once
#include "inst.h"
#include <string>

class iformat : public inst
{
public:
	iformat(int _rs = -1, int _rt = -1, int _immediate = 0, int _instAddress = -1, std::string _instString = "nop");
	virtual ~iformat();
	virtual void fetch();
	virtual void writeBack();
	int rs;
	int rt;
	int immediate;
	int rsData;
	int rtData;
	int writeData;
	int instAddress;
	virtual bool valid();
};
