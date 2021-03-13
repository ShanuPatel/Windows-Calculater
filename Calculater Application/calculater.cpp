#include "calculater.h"

    using namespace System;
    using namespace System::Windows::Forms;

    [STAThreadAttribute]
    void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
        //WinformCDemo is your project name
    CalculaterApplication::calculater form;
	Application::Run(%form);
    }