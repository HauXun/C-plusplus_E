#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<iomanip>
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
	int menu, n = 0, soMenu = 8;
	DaySo a;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, n, a);
	} while (n > 0);
	_getch();
}