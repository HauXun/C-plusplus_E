#include<iostream>
#include<conio.h>
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

	int menu, n, soMenu = 6;
	cout << "\nNhap vao 1 so nguyen duong n: ";
	cin >> n;
	do
	{
		menu = ChonMenu(soMenu);
		XyLyMenu(menu, n);
	} while (n > 0);
	_getch();
}