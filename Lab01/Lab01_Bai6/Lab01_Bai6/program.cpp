#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int x, y;
	cout << "Nhap x : ";
	cin >> x;
	cout << "Nhap y : ";
	cin >> y;
	x++;
	cout << "X++ = " << x << endl;
	x--;
	cout << "X-- = " << x << endl;
	++x;
	cout << "++X = " << x << endl;
	--x;
	cout << "--X = " << x << endl;
	
	cout << "x / y = " << (float)x / y << endl;

	cout << "x % y = " << x % y << endl;
	
	cout << "x *= y <=> x = " << x * y;
	_getch();
	return 1;
}