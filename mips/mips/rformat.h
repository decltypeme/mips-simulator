
#include "inst.h"

class rformat : public inst
{
public:
	rformat(int source1 = -1, int source2 = -1 , int destination = -1);
	virtual ~rformat();
	virtual void operate();

	int getsource1() const;
	int getsource2() const;
	int getdestination() const;

	void setsource1(const int _source1);
	void setsource2(const int _source2);
	void setdestination(const int _destination);

protected:
	int source1;
	int source2;
	int destination;
	virtual bool valid() const;
};
