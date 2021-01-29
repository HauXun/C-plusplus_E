#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
#include "2011379_thuvien.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int Lich[6][7];
	int mm, yy;

	system("CLS");
	cout << "\nNhap thang = ";
	cin >> mm;
	cout << "\nNhap nam = ";
	cin >> yy;

	int thu = TimThuTrongTuan(mm, yy);
	int ngay = TimSoNgay(mm, yy);

	TaoLich(Lich, thu, ngay);

	cout << "\nLICH THANG " << mm << " / " << yy << "\n\n";

	XuatLich(Lich);
}