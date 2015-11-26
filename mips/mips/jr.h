
#include "inst.h"

class jr : public inst
{
public:
	jr(int source = -1, int hazard = -1);
	virtual ~jr();
	virtual void operate();

protected:
	int source;
	int hazard;
	virtual bool valid();
};
