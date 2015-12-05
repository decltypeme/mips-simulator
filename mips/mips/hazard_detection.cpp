
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

void hazard_detection(int& hazardFound, int& hazardWhere, int&JALWhere) 
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
	int JAL_EXIST = -1;
	int JR_EXIST = -1;
	int JAL_Where = -1;
	


	for (int i = 0; i < 4; i++)
	{
		int JAL_EXIST = -1;
		int JR_EXIST = -1;

		rformat* rptr = dynamic_cast<rformat*> (pipeline[i]);
		if (rptr != nullptr)
		{
			if (i == 0)
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 0;
				IF_ID_RegRS = rptr->getsource1();
				IF_ID_RegRT = rptr->getsource2();

			}
			if (i == 1)
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 0;
				ID_EX_RegRS = rptr -> getsource1();
				ID_EX_RegRT = rptr ->getsource2();
			}

			if (i == 2)
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 0;
				EX_MEM_RegRD = rptr -> getdestination();

			}
			if (i == 3)
			{

				EX_MEM_RegWrite = 0;
				MEM_WB_RegWrite = 1;
				MEM_WB_RegRD = rptr -> getdestination();
			}




		}
		
		iformat* iptr = dynamic_cast<iformat*> (pipeline[i]);
		if (iptr != nullptr)
		{
			if (i == 0)
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 0;
				IF_ID_RegRS = iptr->getsource();
				IF_ID_RegRT = -1;

			}
			if (i == 1)
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 0;
				ID_EX_RegRS = iptr->getsource();
				ID_EX_RegRT = -1;
			}

			if (i == 2)
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 0;
				EX_MEM_RegRD = iptr->getdestination();

			}
			if (i == 3)
			{

				EX_MEM_RegWrite = 0;
				MEM_WB_RegWrite = 1;
				MEM_WB_RegRD = iptr->getdestination();
			}
		}
		lw* lwptr = dynamic_cast<lw*> (pipeline[i]);
			if (lwptr != nullptr)
			{
				if (i == 0)
				{
					ID_EX_MemRead = 1;
					EX_MEM_RegWrite = 1;
					MEM_WB_RegWrite = 0;
					IF_ID_RegRT = lwptr->getsource();
					IF_ID_RegRS = -1;

				}
				if (i == 1)
				{
					ID_EX_MemRead = 1;
					EX_MEM_RegWrite = 1;
					MEM_WB_RegWrite = 0;
					ID_EX_RegRT = lwptr->getsource();
					ID_EX_RegRS = -1;
				}

				if (i == 2)
				{
					ID_EX_MemRead = 1;
					EX_MEM_RegWrite = 1;
					MEM_WB_RegWrite = 0;
					EX_MEM_RegRD = lwptr->getdestination();

				}
				if (i == 3)
				{
					ID_EX_MemRead = 1;
					EX_MEM_RegWrite = 0;
					MEM_WB_RegWrite = 1;
					MEM_WB_RegRD = lwptr->getdestination();
				}

		}

		ble* rptr = dynamic_cast<ble*> (pipeline[i]);
		if (rptr != nullptr)
		{

		}

		jal* jalptr = dynamic_cast<jal*> (pipeline[i]);
		if (jalptr != nullptr)
		{
			JAL_EXIST = 1;
			if (i == 1)
			{
				JAL_Where = 1;
			}
			if (i == 2)
			{
				JAL_Where = 2;
			}
			if (i == 3)
			{
				JAL_Where = 3;
			}
			 

		}

		jr* jrptr = dynamic_cast<jr*> (pipeline[i]);
		if (jrptr != nullptr)
		{
			if (i == 0)
			{
				JR_EXIST = 1;
				if (JAL_EXIST)
				JALWhere = JAL_Where;
			}

		}

	}

//EX and MEM Hazard Read After Write 
 
	hazardFound = 0;
	if (ID_EX_MemRead)
	{ 
		if (ID_EX_RegRT == IF_ID_RegRS)
		{
			hazardWhere = 1; //RS
			hazardFound = 3; //Stall the pipeline and MEM_WB -> ID_EX
		}
		else if (ID_EX_RegRT == IF_ID_RegRT)
		{
			hazardWhere = 2; //RT
			hazardFound = 3; //Stall the pipeline and MEM_WB -> ID_EX
		}
		
	}

	if (EX_MEM_RegWrite)
	{
		if (EX_MEM_RegRD == ID_EX_RegRS)
		{
			hazardWhere = 1; //RS
			hazardFound = 1; // EX_MEM -> ID_EX
		}
			
		else if (EX_MEM_RegRD == ID_EX_RegRT)
		{
			hazardWhere = 2; //RT
			hazardFound = 1; // EX_MEM -> ID_EX
		}
		else hazardFound = 0;
		
	}
	if (MEM_WB_RegWrite && !(EX_MEM_RegWrite))
	{
		if (MEM_WB_RegRD == ID_EX_RegRS)
		{
			hazardWhere = 1; //RS
			hazardFound = 2; // MEM_WB -> ID_EX
		}
		else if (MEM_WB_RegRD == ID_EX_RegRT)
		{
			hazardWhere = 2; //RT
			hazardFound = 2; // MEM_WB -> ID_EX
		}

		else hazardFound = 0;
		
	}
	if (JR_EXIST == 1 && JAL_EXIST)
	{
		hazardFound = 4;
	}
	
	
	

		

	
};