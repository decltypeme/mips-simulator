#pragma once
#include "iformat.h"

class Ble : public iformat
{
public:
	Ble(int source1 = -1 , int source2 = -1, int immediate = 0);
	virtual ~Ble();
	virtual void execute() const;
};

