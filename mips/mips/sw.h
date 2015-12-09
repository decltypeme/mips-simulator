#pragma once
#include "iformat.h"
#include <string>
class Sw :
	public iformat
{
public:
	Sw(int _rt = -1, int _rs = -1, int _immediate = 0, int _instAddress = -1, std::string _instString = "nop");
	virtual ~Sw();
	virtual void execute();
	virtual void memory();
	virtual void writeBack();
	int addressResolved;
};