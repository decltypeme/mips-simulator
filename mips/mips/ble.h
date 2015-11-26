
#include "iformat.h"

class ble : public iformat
{
public:
	ble(int source1, int source2, int immediate);
	virtual ~ble();
	virtual void operate();
};

