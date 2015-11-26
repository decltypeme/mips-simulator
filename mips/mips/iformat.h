
#include "inst.h"

class iformat : public inst
{
public:
	iformat(int source = -1, int destination = -1, int immediate = 0);
	virtual ~iformat();
	virtual void operate() = 0;

protected:
	int source;
	int destination;
	int immediate;
	virtual bool valid();
};
