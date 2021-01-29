#include<iostream>
#include<conio.h>

using namespace std;
#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);
double DienTichHinhVuong(double canh);
double DienTichHinhChuNhat(double dai, double rong);
double DienTichTamGiac(double a, double b, double c);
double DienTichHinhTron(double banKinh);

int main()
{
	ChayChuongTrinh();
	return 1;
}

// Định nghĩa hàm lặp lại việc chọn menu, xử lý menu
// cho tới khi người dùng chọn menu 0 thì thoát CT.

void ChayChuongTrinh()
{
	//Khai báo biến
	int menu,				//Lưu stt menu được chọn
		soMenu = 4;			//Lưu số lượng menu chức năng

	//Lặp lại việc chọn và xử lý menu cho tới khi người dùng chọn chức năng 0.
	//Thoát khỏi chương trình

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu);
	} while (menu > 0);
	_getch();
}