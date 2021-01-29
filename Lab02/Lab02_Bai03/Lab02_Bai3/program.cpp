#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

double TinhCanhBen(int a, int b, int h);
double TinhChuVi(int a, int b, double canhBen);
double TinhDienTich(int a, int b, int h);

int main()
{
	int a, b, h;
	double canhBen, chuVi, dienTich;
	cout << endl << "Nhap a: ";
	cin >> a;
	cout << endl << "Nhap b: ";
	cin >> b;
	cout << endl << "Nhap h: ";
	cin >> h;
	canhBen = TinhCanhBen(a, b, h);
	chuVi = TinhChuVi(a, b, canhBen);
	dienTich = TinhDienTich(a, b, h);
	cout << endl << "Chu vi = " << chuVi << endl;
	cout << "Dien tich = " << dienTich << endl;
	_getch();
	return 1;
}

double TinhCanhBen(int a, int b, int h)
{
	double canhBen, p;
	
	p = (a - b) / 2;
	canhBen = sqrt(pow(p, 2) + pow(h,2));
	return canhBen;
}

double TinhChuVi(int a, int b, double canhBen)
{
	double chuVi;
	
	chuVi = a + b + 2 * canhBen;
	return chuVi;
}

double TinhDienTich(int a, int b, int h)
{
	int dienTich;
	
	dienTich = ((a + b) * h) / 2;
	return dienTich;
}