
#include "inst.h"

class ret : public inst
{
public:
	ret(int instAddress = -1);
	virtual ~ret();
	virtual void operate() const;
};
