#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

#include "Thuvien.h"
#include "Menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	int soMenu = 5, menu, n = 0;
	MaTranVuong a, b;
	do
	{
		cout << "\nNhap vao do dai canh ma tran vuong: ";
		cin >> n;
	} while (n <= 0);

	a = new int[n*n];
	b = new int[n*n];

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, b, n);
	} while (menu > 0);

	delete[] a;
	delete[] b;
}