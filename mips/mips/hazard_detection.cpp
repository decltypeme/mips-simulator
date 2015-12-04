
#include "inst.h"

#include "rformat.h"

#include "iformat.h"
#include "ble.h"
#include "lw.h"
#include "sw.h"


#include "j.h"
#include "jr.h"
#include "jal.h"
#include "jmp.h"
#include "ret.h"

extern inst* pipeline[4];

void hazard_detection(int& hazardsFound) 
{
	
	
	int IF_ID_RegRS = -1;
	int IF_ID_RegRT = -1;
	int ID_EX_MemRead = -1;
	int ID_EX_RegRT = -1;
	int ID_EX_RegRS = -1;
	int EX_MEM_RegWrite = -1;
	int EX_MEM_RegRD = -1;
	int MEM_WB_RegWrite = -1; 
	int MEM_WB_RegRD = -1;


	for (int i = 0; i < 4; i++)
	{


		rformat* rptr = dynamic_cast<rformat*> (pipeline[i]);
		if (rptr != nullptr)
		{
			if (i == 0)
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 1;
				IF_ID_RegRS = rptr->getsource1();
				IF_ID_RegRT = rptr->getsource2();

			}
			if (i == 1)
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 1;
				ID_EX_RegRS = rptr -> getsource1();
				ID_EX_RegRT = rptr ->getsource2();
			}

			if (i == 2)
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 1;
				EX_MEM_RegRD = rptr -> getdestination();

			}
			if (i == 3)
			{

				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 1;
				MEM_WB_RegRD = rptr -> getdestination();
			}




		}
		
		iformat* iptr = dynamic_cast<iformat*> (pipeline[i]);
		if (rptr != nullptr)
		{
			if (i == 0)
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = -1;
				IF_ID_RegRS = iptr-> getsource();
				IF_ID_RegRT = -1;

			}
			if (i == 1)
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 1;
				ID_EX_RegRS = iptr-> getsource();
				ID_EX_RegRT = -1;
			}

			if (i == 2)
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 1;
				EX_MEM_RegRD = iptr-> getdestination();

			}
			if (i == 3)
			{

				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 1;
				MEM_WB_RegRD = iptr-> getdestination();
			}

		}

		ble* rptr = dynamic_cast<ble*> (pipeline[i]);
		if (rptr != nullptr)
		{

		}


	}

//ExHazard Read After Write 
 
	if (EX_MEM_RegWrite && ((EX_MEM_RegRD == ID_EX_RegRS) || (EX_MEM_RegRD == ID_EX_RegRT)))
	{
		hazardsFound = 1; // EX_MEM -> ID_EX
	}
	if ()

		

	
};