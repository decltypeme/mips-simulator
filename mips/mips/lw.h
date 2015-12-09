#pragma once
#include "iformat.h"
#include <string>
class Lw :
	public iformat
{
public:
	Lw(int _rt = -1, int _rs = -1, int _immediate = 0, int _instAddress = -1, std::string _instString = "nop");
	virtual ~Lw();
	virtual void execute();
	virtual void memory();
	int addressResolved;
};