#include<iostream>
#include<conio.h>
#include <time.h>
#include <stdlib.h>
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
	int n = 0, menu, soMenu = 9;
	DaySo a;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (soMenu > 0);
	_getch();
}