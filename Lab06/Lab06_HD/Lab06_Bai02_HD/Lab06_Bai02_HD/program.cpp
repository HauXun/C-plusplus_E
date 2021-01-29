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
	int menu, m = 0, n = 0, soMenu = 9;
	int a[SIZE][SIZE];
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, m, n);
	} while (menu > 0);
	_getch();
}