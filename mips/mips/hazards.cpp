
#include "instructions.h"
#include "hazards.h"
#include <cstring>
#include <algorithm>
#include <iterator>
using namespace std;

int z;

void hazardDetection()
{
	z = 0;
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
	int J_EXIST = -1;
	int JR_EXIST = -1;
	int JAL_Where = -1;
	int JALWhere = -1;
	int ID_EX_RegRD_LW = -1;
	int EX_MEM_RegRD_LW = -1;
	int EX_MEM_RegRD_SW = -1;
	int Jal_EXIST = -1;
	int Ret_EXIST = -1;
	int IF_ID_RegRT_JR = -1;
	int IF_ID_RegRT_JAL = -1;
	int JR_Notready = -1;

	// The following loop goes through every pipeline stage and captures what type of instruction is in the current stage buffer
	memset(hazards, 0, sizeof(hazards));
	for (int i = 0; i < 4; i++)
	{

		rformat* rptr = dynamic_cast<rformat*> (pipeline[i]);
		if (rptr != nullptr)
		{
			if (i == 0) //IF_ID
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 0;
				IF_ID_RegRS = rptr->rs;
				IF_ID_RegRT = rptr->rt;

			}
			if (i == 1) //ID_EX
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 0;
				ID_EX_RegRS = rptr->rs;
				ID_EX_RegRT = rptr->rt;
				ID_EX_RegRD = rptr->rd;
			}

			if (i == 2) // EX_MEM
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 0;
				EX_MEM_RegRD = rptr->rd;

			}
			if (i == 3) //MEM_WB
			{

				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 1;
				MEM_WB_RegRD = rptr->rd;
			}




		}

		iformat* iptr = dynamic_cast<iformat*> (pipeline[i]);
		if (iptr != nullptr)
		{
			if (i == 0)
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 0;
				IF_ID_RegRS = iptr->rs;
				IF_ID_RegRT = -1;

			}
			if (i == 1)
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 0;
				ID_EX_RegRS = iptr->rs;
				ID_EX_RegRT = -1;
				ID_EX_RegRD = iptr->rt;
			}

			if (i == 2)
			{
				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 0;
				EX_MEM_RegRD = iptr->rt;

			}
			if (i == 3)
			{

				EX_MEM_RegWrite = 1;
				MEM_WB_RegWrite = 1;
				MEM_WB_RegRD = iptr->rt;
			}

			Lw* Lwptr = dynamic_cast<Lw*> (pipeline[i]);
			if (Lwptr != nullptr)
			{
				if (i == 0)
				{
					EX_MEM_RegWrite = 0;
					MEM_WB_RegWrite = 0;
					IF_ID_RegRS = -1;
					IF_ID_RegRT = -1;

					ID_EX_MemRead = 1;

				}
				if (i == 1)
				{
					EX_MEM_RegWrite = 0;
					MEM_WB_RegWrite = 0;
					ID_EX_RegRS = -1;
					ID_EX_RegRT = -1;
					ID_EX_RegRD = -1;

					ID_EX_MemRead = 1;
					ID_EX_RegRD_LW = Lwptr->rt;
				}

				if (i == 2)
				{
					EX_MEM_RegWrite = 0;
					MEM_WB_RegWrite = 0;
					EX_MEM_RegRD = -1;

					ID_EX_MemRead = 1;
					ID_EX_RegRD_LW = -1;
					EX_MEM_RegRD_LW = Lwptr->rt;

				}
				if (i == 3)
				{

					EX_MEM_RegWrite = 0;
					MEM_WB_RegWrite = 1;
					EX_MEM_RegRD_LW = -1;
					MEM_WB_RegRD = Lwptr->rt;
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
					EX_MEM_RegRD_SW = Swptr->rt;

				}
				if (i == 3)
				{
					EX_MEM_MEMWr = 1;
					EX_MEM_RegRD_SW = -1;
					MEM_WB_RegRD = Swptr->rt;
				}
			}

			Ble* bleptr = dynamic_cast<Ble*> (pipeline[i]);
			if (bleptr != nullptr)
			{
				if (i == 0) // IF_ID
				{


					EX_MEM_RegWrite = 0;
					MEM_WB_RegWrite = 0;
					IF_ID_RegRS = bleptr->rs;
					IF_ID_RegRT = bleptr->rt;


				}
				if (i == 1)  // ID_EX
				{
					EX_MEM_RegWrite = 0;
					MEM_WB_RegWrite = 0;
					ID_EX_RegRS = bleptr->rs;
					ID_EX_RegRT = bleptr->rt;
				}

				if (i == 2) //EX_MEM
				{

					EX_MEM_RegWrite = 0;
					MEM_WB_RegWrite = 0;
					EX_MEM_RegRD = -1;

				}
				if (i == 3)
				{

					EX_MEM_RegWrite = 0;
					MEM_WB_RegWrite = 0;
					MEM_WB_RegRD = -1;
				}

			}
		}




		/*	Ble* bleptr = dynamic_cast<Ble*> (pipeline[i]);
			if (bleptr != nullptr)
			{
				if (i == 0) // IF_ID
				{
					EX_MEM_RegWrite = 0;
					MEM_WB_RegWrite = 0;
					IF_ID_RegRS = bleptr->rs;
					IF_ID_RegRT = bleptr->rt;


				}
				if (i == 1)  // ID_EX
				{


					EX_MEM_RegWrite = 0;
					MEM_WB_RegWrite = 0;
					ID_EX_RegRS = bleptr->rs;
					ID_EX_RegRT = bleptr->rt;
					ID_EX_RegRD = -1;
				}

				if (i == 2) //EX_MEM
				{
					EX_MEM_RegWrite = 0;
					MEM_WB_RegWrite = 0;
					EX_MEM_RegRD = -1;

				}
				if (i == 3)
				{

					EX_MEM_RegWrite = 0;
					MEM_WB_RegWrite = 0;
					MEM_WB_RegRD = -1;
				}

			}
			*/
		J* jptr = dynamic_cast<J*> (pipeline[i]);
		if (jptr != nullptr)
		{

			Jal* jalptr = dynamic_cast<Jal*> (pipeline[i]);
			if (jalptr != nullptr)
			{
				JAL_EXIST = 1;
				if (i == 0)
				{
					IF_ID_RegRT_JAL = 1;
				}
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
				if (JR_EXIST)
					JALWhere = JAL_Where;
			}

			if (i == 0)
			{
				J_EXIST = 1;
			}



		}

		Jr* jrptr = dynamic_cast<Jr*> (pipeline[i]);
		if (jrptr != nullptr)
		{
			if (i == 0)
			{
				JR_EXIST = 1;
				IF_ID_RegRT_JR = jrptr->rs;


			}


		}

		Ret* Retptr = dynamic_cast<Ret*> (pipeline[i]);
		if (Retptr != nullptr)
		{
			if (i == 0)
				Ret_EXIST = 1;
		}
	}

	//EX and MEM Hazard Read After Write 

	if (JR_EXIST == 1)
	{
		if (IF_ID_RegRT_JR == EX_MEM_RegRD && IF_ID_RegRT_JR != -1)  //  Action = EX_MEM -> IF_ID   Example: add $1,$2,$3 or $2,$4,$5 jr $1
		{
			hazards[z] = 211;
			z++;

		}

		if (IF_ID_RegRT_JR == MEM_WB_RegRD && IF_ID_RegRT_JR != -1) // Action = MEM_WB -> IF_ID     Example: add $1,$2,$3 or $2,$4,$5 and $5,$9,$10 jr $1
		{
			hazards[z] = 311;
			z++;

		}

		if (IF_ID_RegRT_JR == ID_EX_RegRD && IF_ID_RegRT_JR != -1) //Stall  nop-> EX   Example: add $1,$2,$3 jr $1
		{
			hazards[z] = 51;
			z++;
			JR_Notready = 1;
		}

		if (IF_ID_RegRT_JR == ID_EX_RegRD_LW && IF_ID_RegRT_JR != -1) //Stall nop -> Ex  Example: lw $1,20($2) jr $1
		{
			hazards[z] = 51;
			z++;
			JR_Notready = 1;
		}

		if (IF_ID_RegRT_JR == EX_MEM_RegRD_LW && IF_ID_RegRT_JR != -1) // Stall nop -> M  Example: lw $1,20($2) jr $1
		{
			hazards[z] = 52;
			z++;
			JR_Notready = 1;
		}

		if (JAL_EXIST == 1 && JR_EXIST == 1) // Occurence of JAL and JR (Multiple usage of $31)
		{
			if (IF_ID_RegRT_JR == 31)
			{

				if (JALWhere == 1) // ID_EX -> IF_ID
				{
					hazards[z] = 111;
					z++;

				}

				if (JALWhere == 2) // EX_MEM -> IF_ID
				{
					hazards[z] = 211;
					z++;

				}

				if (JALWhere == 3) // MEM_WB -> IF_ID
				{
					hazards[z] = 311;
					z++;

				}


			}
		}

	}

	if (ID_EX_MemRead == 1)  // for example lw $2,20($1) followed by add $4,$2,$5 
	{
		if (EX_MEM_RegRD_LW == ID_EX_RegRS && EX_MEM_RegRD_LW != -1)
		{
			hazards[z] = 52; // Stall nop -> M
			z++;

		}
		else if (EX_MEM_RegRD_LW == ID_EX_RegRT  && EX_MEM_RegRD_LW != -1) //Stall nop -> M
		{
			hazards[z] = 52;
			z++;
		}

	}

	if (EX_MEM_RegWrite == 1 && ID_EX_MemRead != 1)
	{
		if (EX_MEM_RegRD == ID_EX_RegRS && EX_MEM_RegRD != -1) //EX_MEM -> ID_EX
		{
			hazards[z] = 221;
			z++;
		}

		if (EX_MEM_RegRD == ID_EX_RegRT && EX_MEM_RegRD != -1) //EX_MEM -> ID_EX
		{
			hazards[z] = 222;
			z++;


		}

		else EX_MEM_RegWrite = 0;

	}
	if (MEM_WB_RegRD != EX_MEM_RegRD)
	{
		EX_MEM_RegWrite = 0;
	}
	else if (MEM_WB_RegRD == EX_MEM_RegRD || MEM_WB_RegRD == EX_MEM_RegRD_LW)
	{
		EX_MEM_RegWrite = 1;
	}

	if (MEM_WB_RegWrite == 1 && !(EX_MEM_RegWrite))
	{
		if (MEM_WB_RegRD == ID_EX_RegRS && MEM_WB_RegRD != -1) //MEM_WB -> ID_EX
		{
			hazards[z] = 321;
			z++;
		}
		if (MEM_WB_RegRD == ID_EX_RegRT  && MEM_WB_RegRD != -1) //MEM_WB -> ID_EX
		{
			hazards[z] = 322;
			z++;
		}

		if ((MEM_WB_RegRD == EX_MEM_RegRD_SW) && (EX_MEM_MEMWr == 1) && (MEM_WB_RegRD != -1)) // MEM_WB -> EX_MEM   Example: add $1,$3,$2  sw $1,20($2)
		{
			hazards[z] = 332;
			z++;
		}



	}
	/*if (JAL_EXIST) // Occurence of JAL and usage of $31 in other instructions
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
	}*/


	Ble* bleptrSpecial = dynamic_cast<Ble*> (pipeline[0]);
	if (bleptrSpecial != nullptr)
	{
		if (EX_MEM_RegRD == ID_EX_RegRS && EX_MEM_RegRD != -1)
		{
			hazards[z] = 221;
			z++;
		}
		if (EX_MEM_RegRD == ID_EX_RegRT && EX_MEM_RegRD != -1)
		{
			hazards[z] = 222;
			z++;
		}
		if (MEM_WB_RegRD == ID_EX_RegRS  && MEM_WB_RegRD != -1 )
		{
			hazards[z] = 321;
			z++;
		}
		if (MEM_WB_RegRD == ID_EX_RegRT && MEM_WB_RegRD != -1)
		{
			hazards[z] = 322;
			z++;
		}

		if (EX_MEM_RegRD == IF_ID_RegRS && EX_MEM_RegRD != -1)
		{
			hazards[z] = 211;
			z++;
		}
		if (EX_MEM_RegRD == IF_ID_RegRT && EX_MEM_RegRD != -1)
		{
			hazards[z] = 212;
			z++;
		}
		if (MEM_WB_RegRD == IF_ID_RegRS  && MEM_WB_RegRD != -1)
		{
			hazards[z] = 311;
			z++;
		}
		if (MEM_WB_RegRD == IF_ID_RegRT && MEM_WB_RegRD != -1)
		{
			hazards[z] = 312;
			z++;
		}

	}

	if ((IF_ID_RegRT_JR != -1 && JR_Notready != 1) || IF_ID_RegRT_JAL == 1 || Ret_EXIST == 1 || J_EXIST == 1) //Flush D
	{
		hazards[z] = 41;
		z++;
		int* it = find(begin(hazards), end(hazards), 51);
		if (it != end(hazards))
		{
			*it = 0;
		}

		it = find(begin(hazards), end(hazards), 52);
		if (it != end(hazards))
		{
			*it = 0;
		}
	}
}
	
	
void dealWithForwarding(int value)
{
	switch (value)
	{
	case 111:
	{
		rformat* rptrfrom = dynamic_cast<rformat*> (pipeline[1]);
		iformat* iptrfrom = dynamic_cast<iformat*> (pipeline[1]);
		Jal* jalptrfrom = dynamic_cast<Jal*> (pipeline[1]);
		Jr* jrptr = dynamic_cast<Jr*> (pipeline[0]);
		if (rptrfrom != nullptr)
		{
			jrptr->rsData = rptrfrom->writeData;
		}
		else if (iptrfrom != nullptr)
		{
			jrptr->rsData = iptrfrom->writeData;
		}
		else if (jalptrfrom != nullptr)
		{
			jrptr->rsData = jalptrfrom->returnAddress;
		}
		break;
	}
	case 211:
	{
		rformat* rptrfrom = dynamic_cast<rformat*> (pipeline[2]);
		iformat* iptrfrom = dynamic_cast<iformat*> (pipeline[2]);
		Jal* jalptrfrom = dynamic_cast<Jal*> (pipeline[2]);
		Jr* jrptr = dynamic_cast<Jr*> (pipeline[0]);
		Ble* bleptr = dynamic_cast<Ble*> (pipeline[0]);
		if (rptrfrom != nullptr)
		{
			if (jrptr != nullptr)
				jrptr->rsData = rptrfrom->writeData;
			if (bleptr != nullptr)
				bleptr->rsData = rptrfrom->writeData;
		}
		else if (iptrfrom != nullptr)
		{
			if (jrptr != nullptr)
				jrptr->rsData = iptrfrom->writeData;
			if (bleptr != nullptr)
				bleptr->rsData = iptrfrom->writeData;
		}
		else if (jalptrfrom != nullptr)
		{
			if (jrptr != nullptr)
				jrptr->rsData = jalptrfrom->returnAddress;
			if (bleptr != nullptr)
				bleptr->rsData = jalptrfrom->returnAddress;
		}
		break;
	}
	case 212:
	{
		rformat* rptrfrom = dynamic_cast<rformat*> (pipeline[2]);
		iformat* iptrfrom = dynamic_cast<iformat*> (pipeline[2]);
		Jal* jalptrfrom = dynamic_cast<Jal*> (pipeline[2]);
		Ble* bleptr = dynamic_cast<Ble*> (pipeline[0]);
		if (rptrfrom != nullptr)
		{
			if (bleptr != nullptr)
				bleptr->rtData = rptrfrom->writeData;
		}
		else if (iptrfrom != nullptr)
		{
			if (bleptr != nullptr)
				bleptr->rtData = iptrfrom->writeData;
		}
		else if (jalptrfrom != nullptr)
		{
			if (bleptr != nullptr)
				bleptr->rtData = jalptrfrom->returnAddress;
		}
		break;
	}
	case 311:
	{
		rformat* rptrfrom = dynamic_cast<rformat*> (pipeline[3]);
		iformat* iptrfrom = dynamic_cast<iformat*> (pipeline[3]);
		Jal* jalptrfrom = dynamic_cast<Jal*> (pipeline[3]);
		Jr* jrptr = dynamic_cast<Jr*> (pipeline[0]);
		Ble* bleptr = dynamic_cast<Ble*> (pipeline[0]);
		if (rptrfrom != nullptr)
		{
			if (jrptr != nullptr)
				jrptr->rsData = rptrfrom->writeData;
			if (bleptr != nullptr)
				bleptr->rsData = rptrfrom->writeData;
		}
		else if (iptrfrom != nullptr)
		{
			if (jrptr != nullptr)
				jrptr->rsData = iptrfrom->writeData;
			if (bleptr != nullptr)
				bleptr->rsData = iptrfrom->writeData;
		}
		else if (jalptrfrom != nullptr)
		{
			if (jrptr != nullptr)
				jrptr->rsData = jalptrfrom->returnAddress;
			if (bleptr != nullptr)
				bleptr->rsData = jalptrfrom->returnAddress;
		}
		break;
	}
	case 312:
	{
		rformat* rptrfrom = dynamic_cast<rformat*> (pipeline[3]);
		iformat* iptrfrom = dynamic_cast<iformat*> (pipeline[3]);
		Jal* jalptrfrom = dynamic_cast<Jal*> (pipeline[3]);
		Ble* bleptr = dynamic_cast<Ble*> (pipeline[0]);
		if (rptrfrom != nullptr)
		{
			if (bleptr != nullptr)
				bleptr->rtData = rptrfrom->writeData;
		}
		else if (iptrfrom != nullptr)
		{
			if (bleptr != nullptr)
				bleptr->rtData = iptrfrom->writeData;
		}
		else if (jalptrfrom != nullptr)
		{
			if (bleptr != nullptr)
				bleptr->rtData = jalptrfrom->returnAddress;
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
				rptrto->rsData = rptrfrom->writeData;
			}
			else if (iptrto != nullptr)
			{
				iptrto->rsData = rptrfrom->writeData;
			}
		}
		else if (iptrfrom != nullptr)
		{
			if (rptrto != nullptr)
			{
				rptrto->rsData = iptrfrom->writeData;
			}
			else if (iptrto != nullptr)
			{
				iptrto->rsData = iptrfrom->writeData;
			}
		}
		break;
	}
	case 222:
	{
		rformat* rptrfrom = dynamic_cast<rformat*> (pipeline[2]);
		iformat* iptrfrom = dynamic_cast<iformat*> (pipeline[2]);
		iformat* iptrto = dynamic_cast<iformat*> (pipeline[1]);
		rformat* rptrto = dynamic_cast<rformat*> (pipeline[1]);
		if (rptrfrom != nullptr)
		{
			if (rptrto != nullptr)
			{
				rptrto->rtData = rptrfrom->writeData;
			}
			else if (iptrto != nullptr)
			{
				iptrto->rtData = rptrfrom->writeData;
			}
		}
		else if (iptrfrom != nullptr)
		{
			if (rptrto != nullptr)
			{
				rptrto->rtData = iptrfrom->writeData;
			}
			else if (iptrto != nullptr)
			{
				iptrto->rtData = iptrfrom->writeData;
			}
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
				rptrto->rsData = rptrfrom->writeData;
			}
			else if (iptrto != nullptr)
			{
				iptrto->rsData = rptrfrom->writeData;
			}
		}
		else if (iptrfrom != nullptr)
		{
			if (rptrto != nullptr)
			{
				rptrto->rsData = iptrfrom->writeData;
			}
			else if (iptrto != nullptr)
			{
				iptrto->rsData = iptrfrom->writeData;
			}
		}
		break;
	}
	case 322:
	{
		rformat* rptrfrom = dynamic_cast<rformat*> (pipeline[3]);
		iformat* iptrfrom = dynamic_cast<iformat*> (pipeline[3]);
		rformat* rptrto = dynamic_cast<rformat*> (pipeline[1]);
		iformat* iptrto = dynamic_cast<iformat*> (pipeline[1]);
		if (rptrfrom != nullptr)
		{
			if (rptrto != nullptr)
			{
				rptrto->rtData = rptrfrom->writeData;
			}
			else if (iptrto != nullptr)
			{
				iptrto->rtData = rptrfrom->writeData;
			}
		}
		else if (iptrfrom != nullptr)
		{
			if (rptrto != nullptr)
			{
				rptrto->rtData = iptrfrom->writeData;
			}
			else if (iptrto != nullptr)
			{
				iptrto->rtData = iptrfrom->writeData;
			}
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
			iptrto->rtData = rptrfrom->writeData;
		}
		else if (iptrfrom != nullptr)
		{
			iptrto->rtData = iptrfrom->writeData;
		}
		break;
	}
	default:
		break;
	}
}

hazardMsg hazardMsgs[14] =
{
	hazardMsg(41, string("Need to flush fetched instruction during next cycle.")),
	hazardMsg(42, string("Need to flush fetched and decoded instructions during next cycle.")),
	hazardMsg(51, string("Need to stall at the decode stage for the next cycle.")),
	hazardMsg(52, string("Need to stall at the execute stage for the next cycle.")),
	hazardMsg(111, string("Forwarded the value of rs from execute to decode.")),
	hazardMsg(211, string("Forwarded the value of rs from memory to decode.")),
	hazardMsg(212, string("Forwarded the value of rt from memory to decode.")),
	hazardMsg(311, string("Forwarded the value of rs from writeback to decode.")),
	hazardMsg(312, string("Forwarded the value of rt from writeback to decode.")),
	hazardMsg(221, string("Forwarded the value of rs from memory to execute.")),
	hazardMsg(222, string("Forwarded the value of rt from memory to execute.")),
	hazardMsg(321, string("Forwarded the value of rs from writeback to execute.")),
	hazardMsg(322, string("Forwarded the value of rt from writeback to execute.")),
	hazardMsg(332, string("Forwarded the value of rt from writeback to memory."))
};