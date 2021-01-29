
#include <iostream>
#include <conio.h>
#include<string.h>

using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	int soMenu = 7, menu;
	String a;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a);
	} while (menu > 0);
	_getch();
}