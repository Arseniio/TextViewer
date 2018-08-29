#include <Windows.h>
#include "MyForm.h"

using namespace TextViewer;
using namespace System;
using namespace System::Windows::Forms;

INT WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int){
Application::EnableVisualStyles();
Application::Run(gcnew MyForm());
return TRUE;
}