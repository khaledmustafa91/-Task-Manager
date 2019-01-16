//#include "MyForm.h"

#include "MyForm4.h"
#include <string>
using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project5::MyForm4 form2;
	Application::Run(%form2);
}