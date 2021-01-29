#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
#include "2011379_thuvien.h"
#include "2011379_menu.h"

void ChayChuongTrinh(); 

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int soMenu = 7, menu, n = 0; 
	DaySo a;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
	_getch();
}