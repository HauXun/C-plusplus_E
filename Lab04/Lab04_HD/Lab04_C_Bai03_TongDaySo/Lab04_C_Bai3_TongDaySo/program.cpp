#include<iostream>
#include<conio.h>

using namespace std;
#include "thuvien.h"
#include "menu.h"


void ChayChuongTrinh();
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, unsigned int n);
double TinhTongR(unsigned int n);
double TinhTongS(unsigned int n);
double TinhTongT(unsigned int n);

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	// Khai báo biến
	int menu, // lưu số thứ tự menu được chọn
		soMenu = 3; // lưu số lượng menu chức năng.
	// Khai báo biến n
	unsigned int n;
	// Nhập giá trị cho biến n
	cout << endl << "Nhap mot so nguyen duong : ";
	cin >> n;
		// Lặp lại việc chọn và xử lý menu cho tới khi
		// người dùng chọn chức năng 0. Thoát khỏi CT.
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, n);
	} while (menu > 0);
}

