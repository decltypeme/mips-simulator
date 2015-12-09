#pragma once
#include "iformat.h"

class Ble : public iformat
{
public:
	Ble( int _rt = -1, int _rs = -1, int _immediate = 0, int _instAddress = -1, std::string _instString = "nop");
	virtual ~Ble();
	virtual void fetch();
	virtual void execute();
	virtual void writeBack();
	
	int addressTrue;
	int addressIfNotTaken;
	int addressIfTaken;
	int specialFlag;
};

