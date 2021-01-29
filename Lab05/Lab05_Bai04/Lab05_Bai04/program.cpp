#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
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
		XuLyMenu(a, menu, n);
	} while (n > 0);
	_getch();
}