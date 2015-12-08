
#include <iostream>
#include <string>
#include "instructions.h"
using namespace std;

void fillwithInst()
{
	for (int i = 0; i < instMemSize; ++i)
	{
		inst_memory[i] = new inst();
	}

	data_memory[2] = 45;

	inst_memory[0] = new Lw(3, 1, 2, 0, "lw $3, 2($1)");
	inst_memory[1] = new Add(4, 0, 3, 1, "addi $4, $3, 5");
}

void displayPipe()
{
	cout << endl << endl << endl;
	cout << "PC:\t" << PC * 4;
	cout << endl << endl;
	cout << "Pipeline\t" << "Inst" << endl;
	for (int i = 0; i < 4; ++i)
	{
		cout << i << "\t\t" << pipeline[i]->instString << endl;
	}
}

void displayStorage()
{
	cout << endl << endl;
	cout << "RegNum\t" << "Value" << endl;
	for (int i = 0; i < 5; ++i)
	{
		cout << i << "\t" << registers[i] << endl;
	}
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

	displayPipe();
	displayStorage();
	system("Pause");

	int n = 0;
	while (n<16)
	{
		n++;
		fetch();
		
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