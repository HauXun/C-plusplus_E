#include <iostream>
#include <conio.h>
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
	int soMenu = 6,
		menu;
	int m = 3, n = 4; //khoi dau m, n
	//khoi dau A, B
	DaThuc A = {
		{ 1, 1 },
		{ 4, 2 },
		{ -5, 6 }
	},
	B = {
		{ 1, 0 },
		{ -4, 2 },
		{ 3, 3 },
		{ 6, 4 }
		};
		do
		{
			system("CLS");
			menu = ChonMenu(soMenu);
			XuLyMenu(menu, A, m, B, n);
		} while (menu > 0);
}