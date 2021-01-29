#include <iostream>
#include <conio.h>
#include <iomanip>
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
	int menu, soMenu = 8, n = 0;
	MaTranVuong a;
	a = new int[MAX];
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
	_getch();
}