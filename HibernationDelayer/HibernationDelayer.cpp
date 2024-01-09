#include "HibernationDelayer.h"

using namespace System;
using namespace System::Windows::Forms;
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	HibernationDelayer::HibernationDelayer form;
	Application::Run(% form);

}