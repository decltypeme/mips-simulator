
#include "inst.h"

class j : public inst
{
public:
	j(int address = -1, int instAddress = -1);
	virtual ~j();
	virtual void operate();

protected:
	int address;
	virtual bool valid();
};
