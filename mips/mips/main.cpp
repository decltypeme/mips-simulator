
#include <iostream>
#include <string>
#include "instructions.h"
using namespace std;

void displayFetch()
{
	cout << endl << endl << endl;
	cout << "PC:\t" << PC * 4;
	cout << endl << endl;
	cout << "Pipeline\t" << "Inst" << endl;
	cout << -1 << "\t\t" << inst_memory[PC]->instString << endl;
}

void fillwithInst()
{
	for (int i = 0; i < instMemSize; ++i)
	{
		inst_memory[i] = new inst();
	}

	inst_memory[0] = new Addi(1, 0, 3, 0, "addi 1,0,3");
	inst_memory[1] = new Add(2, 0, 0, 1, "add 2,0,0");
	inst_memory[2] = new Ble(1, 2, 2, 2, "ble 2,1, 2");
	inst_memory[3] = new Addi(2, 2, 1, 3, "addi 2,2,1");
	inst_memory[4] = new J(2, 4, "j 2");
	inst_memory[5] = new Xor(4, 10, 11, 4, "xor 4,10,11");
}

void displayPipe()
{
	for (int i = 0; i < 4; ++i)
	{
		cout << i << "\t\t" << pipeline[i]->instString << endl;
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
}

int main()
{
	initialize();

	fillwithInst();

	displayFetch();
	displayPipe();
	displayStorage();
	system("Pause");

	int n = 0;
	while (n<100)
	{
		n++;
		fetch();

		displayFetch();
		
		displayPipe();

		decode();

		cout << endl << endl << hazards[0] << "\t" << hazards[1] << "\t" << hazards[2] << "\t" << hazards[3] << "\t" << hazards[4] << endl;
		
		execute();
		memory();
		writeBack();

		displayStorage();
		system("Pause");
	}

	cout << endl << endl << "End of simulation\n\n";
	system("Pause");
}