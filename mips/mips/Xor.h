#pragma once
#include "rformat.h"
#include <string>
class Xor :
	public rformat
{
public:
	Xor(int _rd = -1, int _rs=-1, int _rt=-1, int _instAddress = -1, std::string _instString = "nop");
	virtual ~Xor();
	virtual void execute();
};