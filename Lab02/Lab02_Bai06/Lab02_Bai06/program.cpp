#include<iostream>
#include<conio.h>
using namespace std;

double TinhChiSoBMI(double w, double h);

int main()
{
	double w, h, BMI;
	cout << endl << "Nhap can nang : ";
	cin >> w;
	cout << endl << "Nhap chieu cao : ";
	cin >> h;
	BMI = TinhChiSoBMI(w, h);
	cout << endl << "BMI cua ban la : " << BMI;
	_getch();
	return 1;
}

double TinhChiSoBMI(double w, double h)
{
	double BMI;
	BMI = w / pow(h, 2);
	
	return BMI;
}
