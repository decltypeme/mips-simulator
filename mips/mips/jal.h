
#include "j.h"

class jal : public j
{
public:
	jal(int address);
	virtual ~jal();
	virtual void operate();
};
