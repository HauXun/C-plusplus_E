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
	int a[MAX][MAX], n;
	char filename[80];

	system("CLS");
	cout << "\nNhap ten file de doc: ";
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

	File_Mat(filename, a, n);
	cout << "\n N = " << n << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
			cout << a[i][j] << '\t';
	}
	_getch();
}