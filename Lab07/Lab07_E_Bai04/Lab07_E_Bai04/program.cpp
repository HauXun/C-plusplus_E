#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

void ChayChuongTrinh();

#include "thuvien.h"
#include "menu.h"

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int menu, soMenu = 9;
	String a;
	String b;
	do
	{
		system("cls");
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, b);
	} while (menu > 0);
	_getch();
}