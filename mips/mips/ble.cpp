#include "Ble.h"
#include <algorithm>
using namespace std;


Ble::Ble(int _rt, int _rs,  int _immediate, int _instAddress, string _instString)
	:iformat(_rt, _rs, _immediate, _instAddress, _instString){}

Ble::~Ble() {}

void Ble::fetch()
{
	rsData = readRegister(rs);
	rtData = readRegister(rt);
	addressIfNotTaken = PC ;
	addressIfTaken = immediate + PC  ;
}

void Ble::execute()
{
	if (rsData <= rtData)
	{
		addressTrue = addressIfTaken;
	}
	else
	{
		addressTrue = addressIfNotTaken;
	}

	if (right_prediction() == false)
	{
		hazards[z] = 42;
		z++;
		int* it = find(begin(hazards), end(hazards), 41);
		if (it != end(hazards))
		{
			*it = 0;
		}
		it = find(begin(hazards), end(hazards), 51);
		if (it != end(hazards))
		{
			*it = 0;
		}

		it = find(begin(hazards), end(hazards), 52);
		if (it != end(hazards))
		{
			*it = 0;
		}
		sort(begin(hazards), end(hazards));
	}
}

void Ble::writeBack() {}
