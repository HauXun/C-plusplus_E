#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

#include "Thuvien.h"
#include "Menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	int soMenu = 10, menu;
	Chuoi a = new char[MAX];

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a);
	} while (menu > 0);
}