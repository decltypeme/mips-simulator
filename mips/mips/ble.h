#pragma once
#include "iformat.h"

class Ble : public iformat
{
public:
	Ble(int _rs = -1 , int _rt = -1, int _immediate = 0, int _instAddress = -1, string _instString = "nop");
	virtual ~Ble();
	virtual void fetch();
	virtual void execute();
	virtual void writeBack();
	
	int adressTrue;
	int addressIfNotTaken;
	int addressIfTaken;
};

