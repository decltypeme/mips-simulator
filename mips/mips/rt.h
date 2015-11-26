
#include "inst.h"

class rt : public inst
{
public:
	rt(int hazard = -1);
	virtual ~rt();
	virtual void operate();

protected:
	int hazard;
	virtual bool valid();
};
