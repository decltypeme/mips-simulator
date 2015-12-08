
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

	data_memory[2] = 2;

	inst_memory[0] = new Lw(1, 0, 2, 0, "lw to $1 from mem[0+2]");
	inst_memory[1] = new Addi(2, 1, 4, 1, "addi $2, $1, 4");
}

void updatePipe()
{
	cout << endl << endl << endl;
	cout << "PC:\t" << PC * 4;
	cout << endl << endl;
	cout << "PipelinePos\t" << "Inst" << endl;
	for (int i = 0; i < 4; ++i)
	{
		cout << i << "\t" << pipeline[i]->instString << endl;
	}
}

void updateOthers()
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

	updatePipe();
	updateOthers();
	system("Pause");

	while (1)
	{
		fetch();
		
		updatePipe();
		system("Pause");

		decode();
		execute();
		memory();
		writeBack();

		updateOthers();
		system("Pause");
	}
}