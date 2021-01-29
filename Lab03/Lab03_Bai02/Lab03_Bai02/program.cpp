#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

double TinhBieuThuc(double x, double y, char k);

int main()
{
	double x, y;
	char k;
	cout << endl << "Nhap x: ";
	cin >> x;
	cout << endl << "Nhap y: ";
	cin >> y;
	cout << endl << "Nhap 1 ky tu trong khoang [+ - * /]: ";
	cin >> k;
	TinhBieuThuc(x, y, k);
	_getch();
	return 1;
}

double TinhBieuThuc(double x, double y, char k)
{
	/*switch (k)
	{
	case '+':
		cout << endl << "X + Y = " << x + y;
		return x + y;
	case '-':
		cout << endl << "X - Y = " << x - y;
		return x - y;
	case '*':
		cout << endl << "X * Y = " << x * y;
		return x * y;
	case '/':
		cout << endl << "X / Y = " << x / y;
		return x / y;
	}*/
	switch (k)
	{
	case '+':
		cout << endl << "X + Y = " << x + y;
		break;
	case '-':
		cout << endl << "X - Y = " << x - y;
		break;
	case '*':
		cout << endl << "X * Y = " << x * y;
		break;
	case '/':
		cout << endl << "X / Y = " << x / y;
		break;
	}
	return 1;
}