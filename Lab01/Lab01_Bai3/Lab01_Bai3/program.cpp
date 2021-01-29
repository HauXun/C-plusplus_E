#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x, y;
	cout << "Hay nhap x : ";

	cin >> x;
	cout << "Hay nhap y : ";
	
	cin >> y;
	cout << "z(+) = " << x + y << endl
		<< "z(-) = " << x - y << endl
		<< "z(*) = " << x * y << endl
		<< "z(/) = " << (double)x / y << endl
		<< "z(%) = " << x % y;
	_getch();
	return 1;
}