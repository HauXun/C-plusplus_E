#include <iostream>
#include <conio.h>
using namespace std;

#include "thuvien.h"

int main()
{
	char Thoat;
	String a;
	do
	{
		system("CLS");
		NhapChuoi(a);
		int kq;
		kq = ChuyenDoi(a);
		cout << "\nDang so cua chuoi a la : " << kq;
		Thoat = _getch();
	} while (Thoat != 27);
	return 0;
}