
#include "j.h"

class jal : public j
{
public:
	jal(int address=-1);
	virtual ~jal();
	virtual void execute() const;
};
