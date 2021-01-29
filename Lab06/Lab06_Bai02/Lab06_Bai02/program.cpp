#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

#include "thuvien.h"

int main()
{
	int ketQua;
	int k;
	MaTranVuong a;
	int n;
	do
	{
		cout << "\nNhap vao cap ma tran vuong: ";
		cin >> n;

		cout << "\n\nTao ngau nhien ma tran vuong:\n";
		NhapMaTran_TD(a, n);
		XuatMaTran(a, n);

		cout << "\n\nKiem tra doi xung:\n";
		ketQua = KiemTraDoiXung(a, n);
		if (ketQua == 1)
		{
			cout << "Ma tran A la ma tran doi xung";
		}
		else
		{
			cout << "Ma tran A khong la ma tran doi xung";
		}

		cout << "\n\nKiem tra TGT:\n";
		ketQua = KiemTraMaTranTGT(a, n);
		if (ketQua == 1)
		{
			cout << "Ma tran A la ma tran tam giac tren";
		}
		else
		{
			cout << "Ma tran A khong phai la ma tran tam giac tren";
		}

		cout << "\n\nKiem tra TGD:\n";
		ketQua = KiemTraMaTranTGD(a, n);
		if (ketQua == 1)
		{
			cout << "Ma tran A la ma tran tam giac duoi";
		}
		else
		{
			cout << "Ma tran A khong phai la ma tran tam giac duoi";
		}

		cout << "\n\nKiem tra ma tran cheo:\n";
		ketQua = KiemTraMaTranCheo(a, n);
		if (ketQua == 1)
		{
			cout << "Ma tran A la ma tran cheo";
		}
		else
		{
			cout << "Ma tran A khong la ma cheo";
		}

		cout << "\n\nKiem tra ma tran don vi:\n";
		ketQua = KiemTraMaTranDonVi(a, n);
		if (ketQua == 1)
		{
			cout << "Ma tran A la ma tran don vi";
		}
		else
		{
			cout << "Ma tran A khong la ma tran don vi";
		}

		_getch();
		system("cls");

		cout << "==========Tiep khong==========";
		cout << "\nNhap 1 so bat ki de tiep tuc";
		cout << "\nNhap 0 de thoat chuong trinh";
		cout << "\n============================";
		cout << "\n" << TAB;
		cin >> k;
		system("cls");

	} while (k != 0);
	_getch();
}