#pragma once
#include "rformat.h"
#include <string>
class Add:
	public rformat
{
public:
	Add(int _rd = -1, int _rs=-1, int _rt=-1, int _instAddress = -1, std::string _instString = "nop");
	virtual ~Add();
	virtual void execute();
};