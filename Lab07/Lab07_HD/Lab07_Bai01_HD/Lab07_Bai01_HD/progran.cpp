#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
#include "thuvien.h"
#include "menu.h"
void ChayChuongTrinh();
int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	int menu, soMenu = 12;
	String a, b;
	do
	{
		system("CLS");
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, b);
	} while (menu > 0);
	_getch();
}