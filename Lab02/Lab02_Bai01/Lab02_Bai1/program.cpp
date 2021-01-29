#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

#define PI 3.1415926

double TinhChuViHinhTron(double r);
double TinhDienTichHinhTron(double r);

int main()
{
	double chuVi, dienTich, banKinh;

	cout << endl << "Nhap ban kinh : ";
	cin >> banKinh;

	chuVi = TinhChuViHinhTron(2);
	cout << "Chu vi hinh tron co ban kinh = " << banKinh << " la : " << chuVi << endl;

	cout << endl << "Nhap ban kinh : ";
	cin >> banKinh;

	dienTich = TinhDienTichHinhTron(3);
	cout << "Dien tich hinh tron co ban kinh  = " << banKinh << " la : " << dienTich << endl;
	_getch();
	return 1;
}

double TinhChuViHinhTron(double r)
{
	double chuVi;
	chuVi = r * 2 * PI;
	return chuVi;
}

double TinhDienTichHinhTron(double r)
{
	double dienTich;
	dienTich = pow(r, 2) * PI;
	return dienTich;
}