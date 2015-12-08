#pragma once
#include "iformat.h"
#include <string>

class Addi :
	public iformat
{
public:
	Addi(int _rt = -1, int _rs = -1, int _immediate = 0, int _instAddress = -1, std::string _instString = "nop");
	virtual ~Addi();
	virtual void execute();
};