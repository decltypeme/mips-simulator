
#include "iformat.h"

class ble : public iformat
{
public:
	ble(int source1, int source2, int immediate, int instAddress=-1);
	virtual ~ble();
	virtual void operate();
};

