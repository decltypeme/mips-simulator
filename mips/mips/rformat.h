
#include "inst.h"

class rformat : public inst
{
public:
	rformat(int source1 = -1, int source2 = -1 , int destination = -1, int hazard = -1);
	virtual ~rformat();
	virtual void operate()=0;

protected:
	int source1;
	int source2;
	int destination;
	int hazard;
	virtual bool valid();
};