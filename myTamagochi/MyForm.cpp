#include "MyForm.h"
#include <Windows.h>
using namespace myTamagochi;
[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm());//�������� ����������� Form1() � ������� ������������ ����������� ��������� ������ ������
	return 0;
}

