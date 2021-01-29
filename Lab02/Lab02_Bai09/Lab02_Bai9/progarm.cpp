#include<iostream >
#include <conio.h>

using namespace std;
double TimMax(double x, double y);
double TimMax4(double a, double b, double c, double d);
int main()
{
	double a, b, c, d;

	cout << "gia tri a=";
	cin >> a;
	cout << "gia tri b= ";
	cin >> b;
	cout << "gia tri c =";
	cin >> c;
	cout << "gia tri d =";
	cin >> d;

	TimMax4(a, b, c, d);



	_getch();
	return 1;
}
double TimMax(double x, double y)
{
	double MAX;
	MAX = (x >= y) ? x : y;
	return MAX;

}
double TimMax4(double a, double b, double c, double d)
{
	TimMax(TimMax(a, b), TimMax(c, d));
	cout << TimMax(TimMax(a, b), TimMax(c, d));
	return  TimMax(TimMax(a, b), TimMax(c, d));

}