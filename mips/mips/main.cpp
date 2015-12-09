
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

	//data_memory[2] = 1;
	//inst_memory[0] = new Add(1, 0,0, 0,"add 1,0,0");
	inst_memory[0] = new Jal(2, 0, "jal to address 2");
	inst_memory[1] = new Add(0, 0, 0, 1, "add 0,0,0");
	inst_memory[2] = new Jr(31, 2, "jr $31");
	inst_memory[3] = new Xor(0, 0, 0, 3, "xor 0,0,0");
	inst_memory[4] = new Slt(0, 0, 0, 4, "slt 0,0,0");
	//inst_memory[0] = new Lw(1, 2, 2 , 0, "lw $1, 2($2)");
	//inst_memory[0] = new Add(1, 0,0, 0,"add 1,0,0");
	//inst_memory[1] = new Add(2, 0, 0, 1, "add 2,0,0");
	//inst_memory[2] = new Add(3, 0, 0, 2, "add 3,0,0");
	//inst_memory[3] = new Add(4, 0, 0, 3, "add 4,0,0");
	//inst_memory[4] = new Add(5, 0, 0, 4, "add 5,0,0");
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

	displayPipe();
	displayStorage();
	system("Pause");

	int n = 0;
	while (n<8)
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