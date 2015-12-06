#pragma once
#include "utility.h"
#include <string>
using namespace std;

class inst
{
public:
	inst();
	inst(string _instString);
	virtual ~inst();
	virtual void fetch();
	virtual void execute();
	virtual void memory();
	virtual void writeBack();
	virtual bool valid();
	string instString;
};
