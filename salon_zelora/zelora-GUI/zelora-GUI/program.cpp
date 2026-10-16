#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    ZELORAGUI::LoginForm^ loginForm = gcnew ZELORAGUI::LoginForm();

    Application::Run(loginForm);

    return 0;
}

