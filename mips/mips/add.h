
#include "inst.h"

class add : public inst
{
public:
	inst(int hazard = -1);
	virtual ~inst();
	virtual void operate();

protected:
	int hazard;
	virtual bool valid();
};
