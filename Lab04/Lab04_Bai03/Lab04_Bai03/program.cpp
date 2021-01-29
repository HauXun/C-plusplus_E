#include<iostream>
#include<conio.h>

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
	int menu, n, somenu = 5;
	do
	{
		cout << endl << "Nhap 1 so nguyen duong n: ";
		cin >> n;
	} while (n < 0);

	do
	{
		system("cls");
		menu = ChonMenu(somenu, n);
		XuLyMenu(menu, n);
	} while (menu > 0);
	_getch();
}