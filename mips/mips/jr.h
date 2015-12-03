
#include "inst.h"

class jr : public inst
{
public:
	jr(int source = -1, int instAddress = -1);
	virtual ~jr();
	virtual void operate();

protected:
	int source;
	virtual bool valid();
};
