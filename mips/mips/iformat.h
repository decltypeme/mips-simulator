
#include "inst.h"

class iformat : public inst
{
public:
	iformat(int source1 = -1, int source2 = -1, int hazard = -1);
	virtual ~iformat();
	virtual void operate() = 0;

protected:
	int source1;
	int source2;
	int destination;
	int hazard;
	virtual bool valid();
};
