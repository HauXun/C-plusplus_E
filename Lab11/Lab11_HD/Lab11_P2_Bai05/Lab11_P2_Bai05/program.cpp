#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstdlib>
#include <ctime>

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
	int a[MAX][MAX], n;
	char filename[MAX];

	do
	{
		cout << "\nNhap vao cap ma tran vuong: ";
		cin >> n;
	} while (n < 0);

	//Cách truyền thống
	cout << "\nTao ma tran ngau nhien cap: " << n << " ... \n";
	TaoMaTranNgauNhien(a, n);
	XuatMaTran(a, n);

	//Sử dụng tập tin
	cout << "\n\nNhap vao ten file de luu: ";
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

	//Nhập vào tập tin ma trận vuông
	Mat_File(filename, a, n);
	_getch();

	//Xuất tập tin để xem ma trận vuông và kiểm tra
	system("CLS");
	cout << "\nXem lai du lieu trong tap tin de kiem tra: \n";
	File_Display(filename);
	_getch();
}