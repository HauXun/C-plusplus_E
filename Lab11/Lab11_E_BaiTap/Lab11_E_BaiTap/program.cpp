#include<iostream>
#include<conio.h>
#include<iomanip>
#include<fstream>
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
	int soMenu = 3, menu, n_a, n_ds;
	int a[MAX];
	NhanVien ds[MAX];

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, ds, n_a, n_ds);
	} while (menu > 0);
	_getch();
}