#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>
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
	int menu, soMenu = 6, n;
	NhanVien a[MAX];
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
	_getch();
}