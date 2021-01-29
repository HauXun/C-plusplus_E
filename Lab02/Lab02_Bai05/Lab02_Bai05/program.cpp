#include<iostream>
#include<conio.h>

using namespace std;
#define PI 3.1415962

double TheTichKc(int r);
double sMatcau(int r);

int main()
{
	int r;
	double theTich, dienTich;
	cout << endl << "Nhap ban kinh r = ";
	cin >> r;
	theTich = TheTichKc(r);
	dienTich = sMatcau(r);
	cout << endl << "The tich mat cau = " << theTich;
	cout << endl << "Dien tich mat cau = " << dienTich;
	_getch();
	return 1;
}

double TheTichKc(int r)
{
	double theTich;
	theTich = (4 / 3) * PI * pow(r, 3);
	return theTich;
}
double sMatcau(int r)
{
	double dienTich;
	dienTich = 4 * PI * pow(r, 2);
	return dienTich;
}