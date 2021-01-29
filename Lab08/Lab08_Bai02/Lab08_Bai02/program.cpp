#include <iostream>
#include <conio.h>
#include <string.h>
#include <iomanip>

using namespace std;

#include "Thuvien.h"
#include "Menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int menu, soMenu = 6, n = 8;
	ThueBao a[MAX] =
	{
		{ 100579, "Nguyen Quoc", "Binh", "Da Lat", "051.3432157", { 1, 3, 2007 } },
		{ 100821, "Tran Dinh", "Quy", "Da Lat", "051.2650120", { 1, 5, 2010 } },
		{ 100720, "Phan Duc", "Hai", "Di Linh", "045.0364722", { 1, 1, 2006 } },
		{ 100521, "Nguyen Thi", "Dung", "Don Duong", "049.2501213", { 1, 5, 2004 } },
		{ 100301, "Le Minh", "Duy", "Da Lat", "051.4210306", { 1, 3, 2003 } },
		{ 100345, "Pham Cao", "Thanh", "Di Linh", "045.0154573", { 1, 5, 2014 } },
		{ 100301, "Nguyen Minh", "Quang", "Don Duong", "049.4210306", { 1, 1, 2006 } },
		{ 100345, "Pham Duc", "Duy", "Duc Trong", "055.0154573", { 1, 10, 2015 } }
	};
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}