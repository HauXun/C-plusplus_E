#include<iostream>
#include<conio.h>
#include<iomanip>

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

	int soMenu = 7, 
		menu;
	unsigned int n;
	cout << endl << "Nhap mot so nguyen duong: ";
	cin >> n;
	do
	{
		menu = ChonMenu(soMenu, n);
		XuLyMenu(menu, n);
	} while (menu > 0);
	_getch();
}