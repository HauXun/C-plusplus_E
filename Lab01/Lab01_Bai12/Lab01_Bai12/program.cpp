#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
#define PI 3.1415926
int main()
{
	float r, theTich, dienTich;
	cout << "Nhap ban kinh r = ";
	cin >> r;
	theTich = (4 / 3) * PI * pow(r, 3);
	dienTich = 4 * PI * pow(r, 2);
	cout << "The tich = " << theTich << endl;
	cout << "Dien tich = " << dienTich;
	_getch();
	return 1;
}