#include "Simulator.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;



void uiInitialize()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

}

[STAThread]
int main()
{
	initialize();
	uiInitialize();

	mips::Simulator mainSimulatorForm;
	Application::Run(%mainSimulatorForm);
	//Magic mainSimulatorForm.Controls->Find((gcnew String("Reg1")), true);
	try {
		;
	}
	catch (exception e)
	{
		std::cerr << e.what();
	}
	catch (...)
	{
		std::cerr << "Unhandled Exception\n";
	}
	system("pause");
}
