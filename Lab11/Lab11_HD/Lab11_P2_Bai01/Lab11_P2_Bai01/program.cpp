#include <iostream>
#include <conio.h>
#include <fstream>
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
	int a[MAX], n;
	char filename[MAX];
	system("CLS");
	cout << "\nNhap ten file mo de doc: ";
	cin >> filename;

	//Thêm đuôi .txt vào sau filename trong trường hợp chỉ gõ đúng tên file
	int dau = 0;
	for (int i = 0; filename[i] != NULL; i++)
	if (filename[i] == '.')
	{
		dau = 1;
		break;
	}
	if (!dau)
		strcat_s(filename, ".txt");

	File_Array(filename, a, n);
	cout << n << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << '\t';
	cout << "\n";

	int ketQua;
	ketQua = File_Array_2(filename, a, n);
	if (ketQua == 0)
	{
		cout << "\nDoc file khong thanh cong.\n";
	}
	else
	{
		cout << "\nDoc file thanh cong.\n";
		File_Array_2(filename, a, n);
		cout << n << endl;
		for (int i = 0; i < n; i++)
			cout << a[i] << '\t';
	}
	_getch();
}