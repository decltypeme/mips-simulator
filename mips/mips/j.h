
#include "inst.h"

class j : public inst
{
public:
	j(int address = -1, int hazard = -1);
	virtual ~j();
	virtual void operate();

protected:
	int address;
	int hazard;
	virtual bool valid();
};
