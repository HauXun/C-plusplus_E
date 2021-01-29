#include<iostream>
#include<conio.h>
using namespace std;
double WindChill(double t, double v);

int main()
{
	double t, v, w;
	cout << endl << "Nhap nhiet do (T) : ";
	cin >> t;
	cout << endl << "Nhap van toc gio (V) : ";
	cin >> v;
	w = WindChill(t, v);
	cout << endl << "Do lanh cua gio (WindChill) = " << w;
	_getch();
	return 1;
}

double WindChill(double t, double v)
{
	double w;
	w = 35.74 + (0.6215 * t) + (0.4275 * t) - (35.75 * v) * 0.16;
	return w;
}