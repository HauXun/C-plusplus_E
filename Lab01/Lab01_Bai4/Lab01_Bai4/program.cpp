#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int a, b, c;
	float chuVi, dienTich, p;
	cout << "Nhap vao a : ";
	cin >> a;
	cout << "Nhap vao b : ";
	cin >> b;
	cout << "Nhap vao c : ";
	cin >> c;
	chuVi = a + b + c;
	p = chuVi / 2.0;
	dienTich = sqrt(p*(p - a)*(p - b)*(p - c));
	cout << "Chu vi HTG la : " << chuVi << endl
	<< "Dien tich HTG la : " << dienTich;
	_getch();
	return 1;
}