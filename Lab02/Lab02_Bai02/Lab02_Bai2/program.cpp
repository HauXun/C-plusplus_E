#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

#define MAX 3600
#define SIXTY 60

void DoiThoiGian(unsigned int n);

int main()
{
	int soGay;
	cout << endl << "Nhap so giay : ";
	cin >> soGay;
	DoiThoiGian(soGay);
	_getch();
	return 1;
}

void DoiThoiGian(unsigned int n)
{
	int gio, phut, giay;
	
	gio = n / MAX;
	phut = (n%MAX) / SIXTY;
	giay = (n%MAX) % SIXTY;
	cout << "Gio, Phut, Giay lan luot la -> " << gio << ":" << phut << ":" << giay << endl;
	return;
}