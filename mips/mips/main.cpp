
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

	inst_memory[0] = new Addi(1, 0, 2, 0, "addi $1, $0, 2");
	inst_memory[1] = new Addi(2, 0, 4, 1, "addi $2, $0, 4");
	inst_memory[2] = new Addi(3, 0, 8, 2, "addi $3, $0, 8");
	inst_memory[3] = new Addi(4, 0, 16, 3, "addi $4, $0, 16");
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

		decode();
		execute();
		memory();
		writeBack();

		updateOthers();
		system("Pause");
	}
}