#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	int soMenu = 4, menu, n;
		cout << "\nNhap vao 1 so nguyen duong n : ";
		cin >> n;
	do
	{
		system("cls");
		menu = ChonMenu(soMenu, n);
		XuLyMenu(menu, n);
	} while (menu > 0);

	cout << "\nCam on da dung chuong trinh";
	_getch();
}