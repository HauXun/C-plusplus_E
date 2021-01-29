#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
using namespace std;
#include "thuvien.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	int n;
	SinhVien a[MAX];
	BangDiem_ChiTiet bd[MAX];
	system("CLS");
	TaoDanhSachSinhVien(a, n);
	cout << "\nDanh sach sinh vien mon LTCT:\n";
	Xuat_DSSV(a, n);
	cout << "\nSo luong sinh vien trong danh sach : n = " << n;
	_getch();

	system("CLS");
	TaoBangDiem_ChiTiet(bd, n);
	TinhDiemTongKet(bd, n);
	cout << "\nBang diem chi tiet mon LTCT:\n ";
	Xuat_BangDiem_ChiTiet(bd, n);
	cout << "\nSo luong sinh vien trong danh sach : n = " << n;
	_getch();

	system("CLS");
	cout << "\nBang diem chinh thuc mon LTCT:\n ";
	XuatBangDiem_ChinhThuc(a, bd, n);
	cout << "\nSo luong sinh vien trong danh sach : n = " << n;
	cout << endl;
}