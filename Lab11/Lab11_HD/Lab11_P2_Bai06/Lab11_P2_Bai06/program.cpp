#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <iomanip>

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
	int n;
	NHANVIEN ds[MAX];
	char filename[MAX];

	cout << "\nNhap ten file de mo file: ";
	cin >> filename;

	int dau = 0;
	for (int i = 0; filename[i] != 0; i++)
		if (filename[i] == '.')
		{
			dau = 1;
			break;
		}
	if (!dau)
		strcat_s(filename, ".txt");

	Read_Struct(filename, ds, n);

	cout << "\nDu lieu tu tep: \n";
	Xuat(ds, n);
	_getch();
}