#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
#define MAX 3600
#define SIXTY 60
int main()
{
	int n, gio, phut, giay;
	cout << "Nhap n : ";
	cin >> n;
	gio = n / MAX;
	phut = (n%MAX) / SIXTY;
	giay = (n%MAX) % SIXTY;
	cout << "Gio, Phut, Giay lan luot la -> " << gio << ":" << phut << ":" << giay << endl;
	_getch();
	return 1;
}