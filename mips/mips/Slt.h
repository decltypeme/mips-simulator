#pragma once
#include "rformat.h"
#include <string>
class Slt :
	public rformat
{
public:
	Slt(int _rd = -1, int _rs=-1, int _rt=-1, int _instAddress = -1, std::string _instString = "nop");
	virtual ~Slt();
	virtual void execute();
};