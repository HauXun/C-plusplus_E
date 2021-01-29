#include<iostream>
#include<conio.h>
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
	int soMenu = 9, menu, n;
	DaySo a;
	cout << endl << "Nhap mot so nguyen duong: ";
	cin >> n;

	//Nhập dữ liệu cho mảng a
	/*NhapMang(a, n);*/
	NhapTuDong(a, n);

	/*Lặp lại việc chọn và xử lý menu cho tới khi
	người dùng chọn chức năng 0. Thoat khoi CT*/
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
	_getch();
}