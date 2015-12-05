#pragma once
#include "inst.h"

class rformat : public inst
{
public:
	rformat(int source1 = -1, int source2 = -1 , int destination = -1);
	virtual ~rformat();

	int getsource1() const;
	int getsource2() const;
	int getdestination() const;

	void setsource1(const int _source1);
	void setsource2(const int _source2);
	void setdestination(const int _destination);

	int getwriteData() const;
	void setwriteData(const int _source1);

	virtual void fetch();
	virtual void execute();
	virtual void memory();
	virtual void writeBack();

protected:
	int source1;
	int source2;
	int destination;
	int writeData;
	int read_data[2];
	virtual bool valid() const;
};
