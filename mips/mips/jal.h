
#include "j.h"

class jal : public j
{
public:
	jal(int address, int instAddress= -1);
	virtual ~jal();
	virtual void operate() const;
};
