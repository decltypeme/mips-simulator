#pragma once
#include "inst.h"

class iformat : public inst
{
public:
	iformat(int source = -1, int destination = -1, int immediate = 0);
	virtual ~iformat();
	virtual void fetch();
	virtual void execute();
	virtual void memory();
	virtual void writeBack();
	int source;			//rs
	int destination;	//rt
	int immediate;
	int writeData;
	int readData[2];
	virtual bool valid() const;
};
