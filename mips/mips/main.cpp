
#include "parser.h"
#include "Simulator.h"

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


	while (true)
	{
		fetch();
		decode();
		execute();
		memory();
		writeBack();
	}
}
