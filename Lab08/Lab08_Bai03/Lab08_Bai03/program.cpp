#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

#include "Thuvien.h"
#include "Menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int menu, soMenu = 9;
	Vector u = { 0, 0, 0 }, v = { 0, 0, 0 };
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, u, v);
	} while (menu>0);
}