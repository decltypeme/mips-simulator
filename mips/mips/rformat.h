#pragma once
#include "inst.h"
#include <string>

class rformat : public inst
{
public:
	rformat(int _rs = -1, int _rt = -1 , int _rd = -1, int _instAddress = -1, std::string _instString = "nop");
	virtual ~rformat();
	virtual void fetch();
	virtual void writeBack();
	int rs;
	int rt;
	int rd;
	int rsData;
	int rtData;
	int writeData;
	int instAddress;
	virtual bool valid();
};
