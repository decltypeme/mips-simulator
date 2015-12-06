#pragma once
#include "iformat.h"

class Ble : public iformat
{
public:
	Ble(int rs = -1 , int rt = -1, int immediate = 0);
	virtual ~Ble();
	virtual void fetch();
	virtual void execute();
	virtual void writeBack();
	
	int addressIfNotTaken;
	int addressIfTaken;
};

