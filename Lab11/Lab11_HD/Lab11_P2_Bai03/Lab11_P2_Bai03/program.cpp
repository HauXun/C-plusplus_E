#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

#include "Thuvien.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	int a[MAX], n;
	char filename[MAX];

	cout << "\nNhap ten file de mo: ";
	cin >> filename;

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

	cout << "\nXem lai mang de kiem tra: \n";
	Array_Display(a, n);

	_getch();
}