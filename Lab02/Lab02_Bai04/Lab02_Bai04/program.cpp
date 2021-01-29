#include<iostream>
#include<conio.h>

using namespace std;
#define PI 3.1415962

double TinhChuVi(int r);
double DienTichDay(int r);
double DienTichXQ(int h, int r);
double DienTichTP(int h, int r);
double TheTichHT(int r, int h);

int main()
{
	int r, h;
	double chuVi, dienTichDay, dienTichXQ, dienTichTP, theTich;
	cout << endl << "Nhap vao ban kinh mat day : ";
	cin >> r;
	cout << endl << "Nhap vao chieu cao : ";
	cin >> h;

	chuVi = TinhChuVi(r);
	dienTichDay = DienTichDay(r);
	dienTichXQ = DienTichXQ(h, r);
	dienTichTP = DienTichTP(h, r);
	theTich = TheTichHT(r, h);
	cout << endl << "Chu vi = " << chuVi;
	cout << endl << "Dien tich day = " << dienTichDay;
	cout << endl << "Dien tich Xq = " << dienTichXQ;
	cout << endl << "Dien tich Tp = " << dienTichTP;
	cout << endl << "The tich = " << theTich;
	_getch();
	return 1;
}

double TinhChuVi(int r)
{
	double chuVi;
	chuVi = 2 * PI * r;
	return chuVi;
}

double DienTichDay(int r)
{
	double Sday;
	Sday = PI * pow(r, 2);
	return Sday;
}

double DienTichXQ(int h, int r)
{
	double Sxq;
	Sxq = 2 * PI * r * h;
	return Sxq;
}

double DienTichTP(int h, int r)
{
	double Stp;
	Stp = (2 * PI * r * h) + (2 * PI * pow(r, 2));
	return Stp;
}

double TheTichHT(int r, int h)
{
	double theTich;
	theTich = 4 * PI * pow(r, 2) * h;
	return theTich;
}