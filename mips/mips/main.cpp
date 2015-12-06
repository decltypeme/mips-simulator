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
	try {
		initialize();
		uiInitialize();

		mips::Simulator mainSimulatorForm;
		Application::Run(%mainSimulatorForm);
		//Magic mainSimulatorForm.Controls->Find((gcnew String("Reg1")), true);
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
	while (true)
	{
		fetch();
		decode();
		execute();
		memory();
		writeBack();
	}
}
