#include "ranking_board.h"
#include <iostream>
#include <stdio.h>

using namespace System;
using namespace System::Windows::Forms;
//using namespace std;


[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::ranking_board form;
	Application::Run(%form);

}





