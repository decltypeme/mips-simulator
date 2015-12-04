
#include "inst.h"

#include "rformat.h"

#include "iformat.h"
#include "ble.h"

#include "j.h"
#include "jr.h"
#include "jal.h"
#include "jmp.h"
#include "ret.h"

extern inst* pipeline[4];

void hazard_detection() 
{
	rformat* rptr = dynamic_cast<rformat*> (pipeline[0]);
	if (rptr != nullptr)
	{

	}
	
};