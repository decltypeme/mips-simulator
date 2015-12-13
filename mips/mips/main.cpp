
#include <iostream>
#include <string>
#include "instructions.h"
using namespace std;

char* stageName[5] = { "Fetch", "Decode", "Execute", "Memory", "Write Back" };

void displayFetch()
{
	cout <<  endl << endl;
	cout << "PC:\t" << PC * 4;
	cout << endl << endl;
	cout << "Pipeline\t\t" << "Inst" << endl;
	cout << stageName[0] << "\t\t" << inst_memory[PC]->instString << endl;
	for (int i = 1; i < 5; ++i)
	{
		cout << stageName[i] << "\t\t" << pipeline[i-1]->instString << endl;
	}
}

void displayHazards()
{
	cout << endl << endl;
	for (int i = 4; i >= 0; i--)
	{
		if (hazards[i])
		{
			hazardMsg* msgptr = gethazardMsgPtr(hazards[i]);
			cout << msgptr->hazard << endl;
		}
	}
}

void displayStorage()
{
	cout << endl << endl;
	cout << "RegNum\t" << "Value" << endl;
	for (int i = 0; i < 6; ++i)
	{
		cout << i << "\t" << registers[i] << endl;
	}
	cout << 31 << "\t" << registers[31] << endl;
	cout << endl << endl;
	cout << "MemNum\t" << "Value" << endl;
	for (int i = 0; i < 5; ++i)
	{
		cout << i << "\t" << data_memory[i] << endl;
	}
	cout << endl << endl;
}

void fillwithInst()
{
	inst_memory[0] = new Ble(0,0, 0,0, "Ble that branches to next inst");
	inst_memory[1] = new Xor(0, 0, 0, 4, "XOR $0, $0, $0");
}

int main()
{
	initialize();

	fillwithInst();

	displayFetch();
	displayStorage();
	
	system("Pause");


	int n = 0;
	while (n<100)
	{
		n++;
		
		fetch();

		displayFetch();

		decode();
		execute();
		memory();
		writeBack();

		displayHazards();
		displayStorage();

		system("Pause");
	}

	cout << endl << endl << "End of simulation\n\n";
	system("Pause");
}