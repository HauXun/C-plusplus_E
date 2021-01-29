#include <iostream>
#include <conio.h>
#include <string.h>
#include <iomanip>
using namespace std;

#include "Thuvien.h"
#include "Menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	char thoat;
	SoTuNhienLon m, n, t;
	do
	{
		system("CLS");
		cout << endl << "Nhap vao so tu nhien lon m = ";
		cin >> m;
		cout << endl << "Nhap vao so tu nhien lon n = ";
		cin >> n;
		CongSoTuNhienLon(m, n, t);
		cout << endl << "Bai giai : \n";
		cout << endl << setw(5) << ' ' << setw(17) << m;
		cout << endl << setw(5) << ' ' << '+' << setw(16) << n;
		cout << endl << setw(5) << ' ' << "-----------------------";
		cout << endl << setw(5) << ' ' << '=' << setw(16) << t;
		cout << endl << "\nNua khong ? go ESC neu khong\n";
		thoat = _getch();
	} while (thoat != 27);
	_getch();
}