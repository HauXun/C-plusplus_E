#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
#include "thuvien.h"
void ChayChuongTrinh();
int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	char a[MAX];
	char thoat;
	do
	{
		system("CLS");
		cout << "\nNhap xau ky tu : ";
		gets_s(a);
		system("CLS");
		cout << "\nTen vua nhap: ";
		cout << a;
		NanTen(a);
		cout << "\nTen da nan : ";
		cout << a;
		cout << endl << "Nua khong ? go ESC neu khong\n";
		thoat = _getch();
	} while (thoat != 27);
	_getch();
}