
#include "utility.h"

void hazard_detection(int** hazardFound) 
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
	int JALWhere = -1;
	
	// The following loop goes through every pipeline stage and captures what type of instruction is in the current stage buffer

	for (int i = 0; i < 4; i++)
	{

		rformat* rptr = dynamic_cast<rformat*> (pipeline[i]);
		if (rptr != nullptr)
		{
			if (i == 0) //IF_ID
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 0;
				IF_ID_RegRS = rptr->getsource1();
				IF_ID_RegRT = rptr->getsource2();

			}
			if (i == 1) //ID_EX
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 0;
				ID_EX_RegRS = rptr -> getsource1();
				ID_EX_RegRT = rptr ->getsource2();
			}

			if (i == 2) // EX_MEM
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 0;
				EX_MEM_RegRD = rptr -> getdestination();

			}
			if (i == 3) //MEM_WB
			{

				EX_MEM_RegWrite = 1;
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

				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 1;
				MEM_WB_RegRD = iptr->getdestination();
			}
		}
		Lw* Lwptr = dynamic_cast<Lw*> (pipeline[i]);
			if (Lwptr != nullptr)
			{
				if (i == 0)
				{
					ID_EX_MemRead = 1;
					EX_MEM_RegWrite = 1;
					MEM_WB_RegWrite = 0;
					IF_ID_RegRT = Lwptr->getsource();
					IF_ID_RegRS = -1;

				}
				if (i == 1)
				{
					ID_EX_MemRead = 1;
					EX_MEM_RegWrite = 1;
					MEM_WB_RegWrite = 0;
					ID_EX_RegRT = Lwptr->getsource();
					ID_EX_RegRS = -1;
				}

				if (i == 2)
				{
					ID_EX_MemRead = 1;
					EX_MEM_RegWrite = 1;
					MEM_WB_RegWrite = 0;
					EX_MEM_RegRD = Lwptr->getdestination();

				}
				if (i == 3)
				{
					ID_EX_MemRead = 1;
					EX_MEM_RegWrite = 1;
					MEM_WB_RegWrite = 1;
					MEM_WB_RegRD = Lwptr->getdestination();
				}

		}

		Ble* bleptr = dynamic_cast<Ble*> (pipeline[i]);
		if (bleptr != nullptr)
		{

		}

		Jal* jalptr = dynamic_cast<Jal*> (pipeline[i]);
		if (jalptr != nullptr)
		{
			JAL_EXIST = 1;
			if (i == 1)
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 0;
				JAL_Where = 1;
			}
			if (i == 2)
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 0;
				JAL_Where = 2;
			}
			if (i == 3)
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 1;
				JAL_Where = 3;
			}
			 

		}

		Jr* jrptr = dynamic_cast<Jr*> (pipeline[i]);
		if (jrptr != nullptr)
		{
			if (i == 0)
			{
				JR_EXIST = 1;
				IF_ID_RegRT = jrptr->getsource();
				if (JAL_EXIST)
				JALWhere = JAL_Where;

			}

		}

	}

//EX and MEM Hazard Read After Write 
 
	hazardFound = 0;
	if (ID_EX_MemRead)  // for example lw $2,20($1) followed by and $4,$2,$5 
	{ 
		if (ID_EX_RegRT == IF_ID_RegRS)
		{
			
			hazardFound[0][2] = 3; //Stall the pipeline and MEM_WB -> ID_EX
			hazardFound[1][2] = 1; //RS
		}
		else if (ID_EX_RegRT == IF_ID_RegRT)
		{
			hazardFound[0][2] = 3; //Stall the pipeline and MEM_WB -> ID_EX
			hazardFound[1][2] = 2; //RT
		}
		
	}

	if (EX_MEM_RegWrite)
	{
		if (EX_MEM_RegRD == ID_EX_RegRS)
		{
			hazardFound[0][0] = 1; //EX_MEM -> ID_EX
			hazardFound[1][0] = 1; //RS
			
		}
			
		else if (EX_MEM_RegRD == ID_EX_RegRT)
		{
			hazardFound[0][0] = 1; //EX_MEM -> ID_EX
			hazardFound[1][0] = 2; //RT

		}
		
		else EX_MEM_RegWrite = 0;
		
	}

	if (MEM_WB_RegWrite && !(EX_MEM_RegWrite))
	{
		if (MEM_WB_RegRD == ID_EX_RegRS)
		{
			hazardFound[0][1] = 2; //MEM_WB -> ID_EX
			hazardFound[1][1] = 1; //RS
			
		}
		else if (MEM_WB_RegRD == ID_EX_RegRT)
		{
			hazardFound[0][1] = 2; //MEM_WB -> ID_EX
			hazardFound[1][1] = 2; //RT
			
		}

		
	}
	if (JAL_EXIST) // Occurence of JAL and usage of $31 in other instructions
	{
		if (EX_MEM_RegWrite)
		{
			if (ID_EX_RegRS == 31) // Rs is using $31
			{
				hazardFound[0][0] = 1; //EX_MEM -> ID_EX
				hazardFound[1][0] = 1; //RS
			}
			if (ID_EX_RegRT == 31) // RT is using $31
			{
				hazardFound[0][0] = 1; //EX_MEM -> ID_EX
				hazardFound[1][0] = 2; //RT
			}
		}
		if (MEM_WB_RegWrite)
		{
			if (ID_EX_RegRS == 31) // Rs is using $31
			{
				hazardFound[0][1] = 2; //MEM_WB -> ID_EX
				hazardFound[1][1] = 1; //RS
			}
			if (ID_EX_RegRT == 31) // RT is using $31
			{
				hazardFound[0][1] = 2; //MEM_WB -> ID_EX
				hazardFound[1][1] = 2; //RT
			
			}
		}
	}

	if (JR_EXIST == 1 && JAL_EXIST ==1) // Occurence of JAL and JR (Multiple usage of $31)
	{
		if (IF_ID_RegRT == 31)
		{
			hazardFound[0][3] = 4;
			hazardFound[1][3] = JALWhere;
		}
	}
	
	
	

		

	
};