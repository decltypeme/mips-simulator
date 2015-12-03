
#include "inst.h"

class ret : public inst
{
public:
	ret();
	virtual ~ret();
	virtual void operate();
};
