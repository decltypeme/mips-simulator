
#include "iformat.h"

class ble : public iformat
{
public:
	ble(int source1 = -1 , int source2 = -1, int immediate = 0);
	virtual ~ble();
	virtual void execute() const;
};

