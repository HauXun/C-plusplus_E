//Chen cac tap tin thu vien co san
#include <iostream>
#include <conio.h>

using namespace std;

//Chen cac tap tin thu vien tu tao : luu y trinh tu chen.
#include "Thuvien.h"
#include "Menu.h"

//khai bao nguyen mau ham
void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int menu, soMenu = 4;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu);
	} while (menu > 0);
	_getch();
}