#include "MyForm.h"
#include <Windows.h>
using namespace myTamagochi;
[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm());//вызываем конструктор Form1() и создаем динамический управл€емый —борщиком мусора объект
	return 0;
}

