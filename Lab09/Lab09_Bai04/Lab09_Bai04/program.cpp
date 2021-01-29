#include <iostream>
#include <conio.h>
#include <iomanip>
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
	int soMenu = 10, menu, n = 0;
	TaiLieu *ds;
	ds = new TaiLieu[MAX];

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, ds, n);
	} while (menu > 0);

	delete[] ds;
}