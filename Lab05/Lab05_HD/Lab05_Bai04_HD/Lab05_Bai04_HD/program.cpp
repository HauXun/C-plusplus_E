#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
#include"thuvien.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	char kyTu;
	int a[MAX], b[MAX], c[MAX];
	int n = 0, m = 0;
	do
	{
		system("CLS");
		NhapTuDong(a, n);
		TimDayGTPB(a, b, c, n, m);
		cout << "\nDay dang xet\n";
		XuatMang(a, n);
		cout << resetiosflags(ios::left);
		cout << endl << setw(20) << "Gia tri Phan biet"
			<< setw(20) << "So lan xuat hien";
		for (int i = 0; i < m; i++)
		{
			cout << endl << setw(20) << b[i]
				<< setw(20) << c[i];
		}
		cout << "\nNua khong, nhan ESC neu khong!\n";
		kyTu = _getch();
	} while (kyTu != 27);
}