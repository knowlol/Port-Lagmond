#include <iostream>
#include <windows.h>
#include <thread>
#include <string>

using namespace std;

int main()
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);

	MessageBoxA(NULL, "F2: Lag\nF3: Stop Lag\nF4: Exit Program", "Binds", NULL);

	while (true)
	{
		if (GetAsyncKeyState(VK_F2) & 0x8000)
		{
			Beep(800, 200);
			ShellExecute(NULL, "open", "cmd", "/c ipconfig /release", NULL, SW_HIDE); //Lag =^.^=
		}
		if (GetAsyncKeyState(VK_F3) & 0x8000)
		{
			Beep(400, 200);
			ShellExecute(NULL, "open", "cmd", "/c ipconfig /renew", NULL, SW_HIDE);   //Stop Lag =V.V=
		}
		if (GetAsyncKeyState(VK_F4) & 0x8000)
		{
			Beep(200, 200);
			break;
		}
	}
}