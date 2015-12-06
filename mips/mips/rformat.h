#pragma once
#include "inst.h"

class rformat : public inst
{
public:
	rformat(int source1 = -1, int source2 = -1 , int destination = -1);
	virtual ~rformat();
	virtual void fetch();
	virtual void execute();
	virtual void memory();
	virtual void writeBack();
	int source1;
	int source2;
	int destination;
	int writeData;
	int read_data[2];
	virtual bool valid() const;
};
