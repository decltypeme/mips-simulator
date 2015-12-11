#include <iostream>
#include <string>
#include "Simulator.h"
#include <iostream>
#define ___GUI_ENV
//#define ___CONSOLE_ENV
using namespace std;
using namespace System;
using namespace System::Windows::Forms;



void uiInitialize()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

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

#ifdef ___GUI_ENV
[STAThread]
#endif
int main()
{
#ifdef ___GUI_ENV
	initialize();
	uiInitialize();
	mips::Simulator mainSimulatorForm;
	Application::Run(%mainSimulatorForm);
	try {
		
	}
	catch (exception& ex)
	{
		string msg = ex.what();
		mainSimulatorForm.ParsingResults->AppendText(gcnew String(msg.c_str()));
		mainSimulatorForm.ParsingResults->AppendText("\n");
	}
	catch (...)
	{
		mainSimulatorForm.ParsingResults->AppendText("Unhandled Exception");

	}
#endif
#ifdef ___CONSOLE_ENV
	initialize();

	fillwithInst();

	displayPipe();
	displayStorage();
	system("Pause");

	int n = 0;
	while (n < 8)
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
#endif
}