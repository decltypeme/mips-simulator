
#include "parser.h"
#include <cstring>
using namespace std;

void hazard_detection() 
{
	int z = 0;
	int IF_ID_RegRS = -1;
	int IF_ID_RegRT = -1;
	int ID_EX_MemRead = -1;
	int EX_MEM_MEMWr = -1;
	int ID_EX_RegRT = -1;
	int ID_EX_RegRS = -1;
	int ID_EX_RegRD = -1;
	int EX_MEM_RegWrite = -1;
	int EX_MEM_RegRD = -1;
	int MEM_WB_RegWrite = -1; 
	int MEM_WB_RegRD = -1;
	int JAL_EXIST = -1;
	int JR_EXIST = -1;
	int JAL_Where = -1;
	int JALWhere = -1;
	int ID_EX_RegRD_LW = -1;
	int EX_MEM_RegRD_LW = -1;
	int EX_MEM_RegRD_SW = -1;
	int Jmp_EXIST = -1;
	int Ret_EXIST = -1;
	
	// The following loop goes through every pipeline stage and captures what type of instruction is in the current stage buffer
	memset(data_memory, 0, sizeof(hazards));
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
				ID_EX_RegRD = rptr ->getdestination();
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
				ID_EX_RegRD = iptr->getdestination();
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

		Lw* Lwptr = dynamic_cast<Lw*> (pipeline[i]);
			if (Lwptr != nullptr)
			{
				if (i == 0)
				{
					ID_EX_MemRead = 1;

				}
				if (i == 1)
				{
					ID_EX_MemRead = 1;
					ID_EX_RegRD_LW = Lwptr->getdestination();
				}

				if (i == 2)
				{
					ID_EX_MemRead = 1;
					EX_MEM_RegRD_LW = Lwptr->getdestination();

				}
				if (i == 3)
				{
					ID_EX_MemRead = 1;
					MEM_WB_RegRD = Lwptr->getdestination();
				}
			}
			Sw* Swptr = dynamic_cast<Sw*> (pipeline[i]);
			if (Swptr != nullptr)
			{
				if (i == 0)
				{
					EX_MEM_MEMWr = 1;

		}
				if (i == 1)
				{
					EX_MEM_MEMWr = 1;
				}

				if (i == 2)
				{
					EX_MEM_MEMWr = 1;
					EX_MEM_RegRD_SW = Swptr->getdestination();

				}
				if (i == 3)
				{
					EX_MEM_MEMWr = 1;
					MEM_WB_RegRD = Swptr->getdestination();
				}
			}
		}
		

		

		Ble* bleptr = dynamic_cast<Ble*> (pipeline[i]);
		if (bleptr != nullptr)
		{
			if (i == 0)
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 0;
				IF_ID_RegRS = bleptr->getsource();
				IF_ID_RegRT = -1;

			}
			if (i == 1)
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 0;
				ID_EX_RegRS = bleptr->getsource();
				ID_EX_RegRT = -1;
				ID_EX_RegRD = bleptr->getdestination();
			}

			if (i == 2)
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 0;
				EX_MEM_RegRD = bleptr->getdestination();

			}
			if (i == 3)
			{

				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 1;
				MEM_WB_RegRD = bleptr->getdestination();
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
		J* jptr = dynamic_cast<J*> (pipeline[i]);
		if (jptr != nullptr)
		{
			
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

			if (i == 0)
			{
				Jmp_EXIST = 1;
			}


	
		}
		Ret* Retptr = dynamic_cast<Ret*> (pipeline[i]);
		if (Retptr != nullptr)
		{
			if(i==0 )
			Ret_EXIST = 1;
			}
		}

//EX and MEM Hazard Read After Write 
 
	if (JR_EXIST == 1)
	{
		if (IF_ID_RegRT == EX_MEM_RegRD)  //  Action = EX_MEM -> IF_ID   Example: add $1,$2,$3 or $2,$4,$5 jr $1
		{
			hazards[z] = 212;
			z++;
		}

		if (IF_ID_RegRT == MEM_WB_RegRD) // Action = MEM_WB -> IF_ID     Example: add $1,$2,$3 or $2,$4,$5 and $5,$9,$10 jr $1
		{
			hazards[z] = 312;
			z++;
		}

		if (IF_ID_RegRT == ID_EX_RegRD) //Stall  nop-> EX   Example: add $1,$2,$3 jr $1
		{
			hazards[z] = 51;
			z++;
		}
		
		if (IF_ID_RegRT == ID_EX_RegRD_LW ) //Stall nop -> Ex  Example: lw $1,20($2) jr $1
		{ 
			hazards[z] = 51;
			z++;
		}

		if(IF_ID_RegRT == EX_MEM_RegRD_LW) // Stall nop -> M  Example: lw $1,20($2) jr $1
		{
			hazards[z] = 52;
			z++;
		}

		if (JAL_EXIST == 1) // Occurence of JAL and JR (Multiple usage of $31)
		{
			if (IF_ID_RegRT == 31)
			{
				if (JALWhere == 1) // ID_EX -> IF_ID
				{
					hazards[z] = 112;
					z++;
				}

				if (JALWhere==2 ) // EX_MEM -> IF_ID
				{
					hazards[z] = 212;
					z++;
				}

				if (JALWhere == 3) // MEM_WB -> IF_ID
				{
					hazards[z] = 312;
					z++;
				}
				
				
			}
		}

	}
	
	if (ID_EX_MemRead)  // for example lw $2,20($1) followed by add $4,$2,$5 
	{ 
		if (ID_EX_RegRT == IF_ID_RegRS)
		{
			hazards[z] = 52; // Stall nop -> M
			z++;
			
		}
		else if (ID_EX_RegRT == IF_ID_RegRT) //Stall nop -> M
		{
			hazards[z] = 52;
			z++;
		}
		
	}

	if (EX_MEM_RegWrite)
	{
		if (EX_MEM_RegRD == ID_EX_RegRS) //EX_MEM -> ID_EX
		{
			hazards[z] = 221;
			z++;
		}
			
		else if (EX_MEM_RegRD == ID_EX_RegRT) //EX_MEM -> ID_EX
		{
			hazards[z] = 222;
			z++;
			

		}
		
		else EX_MEM_RegWrite = 0;
		
	}

	if (MEM_WB_RegWrite && !(EX_MEM_RegWrite))
	{
		if (MEM_WB_RegRD == ID_EX_RegRS) //MEM_WB -> ID_EX
		{
			hazards[z] = 321;
			z++;			
		}
		if (MEM_WB_RegRD == ID_EX_RegRT) //MEM_WB -> ID_EX
		{
			hazards[z] = 322;
			z++;			
		}
			
		if ((MEM_WB_RegRD == EX_MEM_RegRD_SW) && (EX_MEM_MEMWr == 1)) // MEM_WB -> EX_MEM   Example: add $1,$3,$2  sw $1,20($2)
		{
			hazards[z] = 332;
			z++;
		}

		
	}
	if (JAL_EXIST) // Occurence of JAL and usage of $31 in other instructions
	{
		if (EX_MEM_RegWrite)
		{
			if (ID_EX_RegRS == 31) // Rs is using $31  //EX_MEM -> ID_EX
			{
				hazards[z] = 221;
				z++;
			}
			if (ID_EX_RegRT == 31) // RT is using $31
			{
				hazards[z] = 222;
				z++;
			}
		}
		if (MEM_WB_RegWrite)
		{
			if (ID_EX_RegRS == 31) // Rs is using $31 //MEM_WB -> ID_EX
			{
				hazards[z] = 321;
				z++;
			}
			if (ID_EX_RegRT == 31) // RT is using $31
			{
				hazards[z] = 322;
				z++;
			
			}
		}
	}

	if (right_prediction() == false) //Flush D&E
	{
		hazards[z] = 42;
		z++;
	}

	if (JR_EXIST != 1 && Jmp_EXIST == 1 && Ret_EXIST == 1) //Flush D
	{
		hazards[z] = 41;
		z++;
	}
	
	
}
	
	
void deal_with_hazard(int value)
{
	switch (value)
	{
	case 111:
	{
		rformat* rptrfrom = dynamic_cast<rformat*> (pipeline[1]);
		iformat* iptrfrom = dynamic_cast<iformat*> (pipeline[1]);
		Jr* jrptr = dynamic_cast<Jr*> (pipeline[0]);
		if (rptrfrom != nullptr)
		{
			jrptr->source = rptrfrom->writeData;
		}
		else if (iptrfrom != nullptr)
		{
			jrptr->source = iptrfrom->writeData;
		}
		break;
	}
	case 211:
	{
		rformat* rptrfrom = dynamic_cast<rformat*> (pipeline[2]);
		iformat* iptrfrom = dynamic_cast<iformat*> (pipeline[2]);
		Jr* jrptr = dynamic_cast<Jr*> (pipeline[0]);
		if (rptrfrom != nullptr)
		{
			jrptr->source = rptrfrom->writeData;
		}
		else if (iptrfrom != nullptr)
		{
			jrptr->source = iptrfrom->writeData;
		}
		break;
	}
	case 311:
	{
		rformat* rptrfrom = dynamic_cast<rformat*> (pipeline[3]);
		iformat* iptrfrom = dynamic_cast<iformat*> (pipeline[3]);
		Jr* jrptr = dynamic_cast<Jr*> (pipeline[0]);
		if (rptrfrom != nullptr)
		{
			jrptr->source = rptrfrom->writeData;
		}
		else if (iptrfrom != nullptr)
		{
			jrptr->source = iptrfrom->writeData;
		}
		break;
	}
	case 221:
	{
		rformat* rptrfrom = dynamic_cast<rformat*> (pipeline[2]);
		iformat* iptrfrom = dynamic_cast<iformat*> (pipeline[2]);
		rformat* rptrto = dynamic_cast<rformat*> (pipeline[1]);
		iformat* iptrto = dynamic_cast<iformat*> (pipeline[1]);
		if (rptrfrom != nullptr)
		{
			if (rptrto != nullptr)
			{
				rptrto->source1 = rptrfrom->writeData;
			}
			else if (iptrto != nullptr)
			{
				iptrto->source = rptrfrom->writeData;
			}
		}
		else if (iptrfrom != nullptr)
		{
			if (rptrto != nullptr)
			{
				rptrto->source1 = iptrfrom->writeData;
			}
			else if (iptrto != nullptr)
			{
				iptrto->source = iptrfrom->writeData;
			}
		}
		break;
	}
	case 222:
	{
		rformat* rptrfrom = dynamic_cast<rformat*> (pipeline[2]);
		iformat* iptrfrom = dynamic_cast<iformat*> (pipeline[2]);
		rformat* rptrto = dynamic_cast<rformat*> (pipeline[1]);
		if (rptrfrom != nullptr)
		{
			rptrto->source2 = rptrfrom->writeData;
		}
		else if (iptrfrom != nullptr)
		{
			rptrto->source2 = iptrfrom->writeData;
		}
		break;
	}
	case 321:
	{
		rformat* rptrfrom = dynamic_cast<rformat*> (pipeline[3]);
		iformat* iptrfrom = dynamic_cast<iformat*> (pipeline[3]);
		rformat* rptrto = dynamic_cast<rformat*> (pipeline[1]);
		iformat* iptrto = dynamic_cast<iformat*> (pipeline[1]);
		if (rptrfrom != nullptr)
		{
			if (rptrto != nullptr)
			{
				rptrto->source1 = rptrfrom->writeData;
			}
			else if (iptrto != nullptr)
			{
				iptrto->source = rptrfrom->writeData;
			}
		}
		else if (iptrfrom != nullptr)
		{
			if (rptrto != nullptr)
			{
				rptrto->source1 = iptrfrom->writeData;
			}
			else if (iptrto != nullptr)
			{
				iptrto->source = iptrfrom->writeData;
			}
		}
		break;
	}
	case 322:
	{
		rformat* rptrfrom = dynamic_cast<rformat*> (pipeline[3]);
		iformat* iptrfrom = dynamic_cast<iformat*> (pipeline[3]);
		rformat* rptrto = dynamic_cast<rformat*> (pipeline[1]);
		if (rptrfrom != nullptr)
		{
			rptrto->source2 = rptrfrom->writeData;
		}
		else if (iptrfrom != nullptr)
		{
			rptrto->source2 = iptrfrom->writeData;
		}
		break;
	}
	case 332:
	{
		rformat* rptrfrom = dynamic_cast<rformat*> (pipeline[3]);
		iformat* iptrfrom = dynamic_cast<iformat*> (pipeline[3]);
		iformat* iptrto = dynamic_cast<iformat*> (pipeline[2]);
		if (rptrfrom != nullptr)
		{
			iptrto->destination = rptrfrom->writeData;
		}
		else if (iptrfrom != nullptr)
		{
			iptrto->destination = iptrfrom->writeData;
		}
		break;
	}
	default:
		break;
	}
}