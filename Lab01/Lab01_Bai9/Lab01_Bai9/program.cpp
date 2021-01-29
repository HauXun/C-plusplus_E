#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	float a, b, h, p, canhBen, chuVi, dienTich;
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;
	cout << "Nhap h = ";
	cin >> h;
	p = (a - b) / 2;
	canhBen = sqrt(p * p + h * h);
	chuVi = a + b + 2 * canhBen;
	dienTich = ((a + b) * h) / 2;
	cout << "Chu vi HTC = " << chuVi << endl
		<< "Dien tich HTC = " << dienTich;
	_getch();
	return 0;
}