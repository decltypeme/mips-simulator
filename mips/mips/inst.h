#pragma once
#include <string>
#include "utility.h"

class inst
{
public:
	inst();
	inst(std::string _instString);
	virtual ~inst();
	virtual void fetch();
	virtual void execute();
	virtual void memory();
	virtual void writeBack();
	virtual bool valid();
	std::string instString;
};
