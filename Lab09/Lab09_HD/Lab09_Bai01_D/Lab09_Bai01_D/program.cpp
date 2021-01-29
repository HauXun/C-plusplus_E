#include <iostream>
#include <conio.h>

using namespace std;

#include "thuvien.h"

int main()
{
	int n, *a;

	a = TaoMang(n);
	cout << "\nMang vua nhap la: \n";
	XuatMang(a, n);
	XuatGiaTri_SoLan_PhanBiet(a, n);
	delete[] a;

	_getch();
	return 0;
}