#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

#include "thuvien.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	int a[MAX], n;
	do
	{
		cout << "\nNhap vao so phan tu cua mang: ";
		cin >> n;
	} while (n <= 0);

	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap vao phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}

	char filename[MAX];
	cout << "\nNhap ten file de ghi: ";
	cin >> filename;

	int dau = 0;
	for (int i = 0; filename[i] != NULL; i++)
	if (filename[i] == '.')
		dau = 1;
	if (!dau)
		strcat_s(filename, ".txt");

	Write_Int(a, n, filename);
	_getch();

	system("CLS");
	cout << "\nXem lai du lieu de kiem tra: \n";
	File_Display(filename);
	_getch();
}