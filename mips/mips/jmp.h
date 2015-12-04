
#include "j.h"

class jmp : public j
{
public:
	jmp(int address = -1);
	virtual ~jmp();
	virtual void operate() const;
};
