#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;
void Xuat(int so);
int TimLuyThua(int b, int n);
void DoiCoSo(int n, int b);
int main()
{
	int n = 0, b = 0;

	cout << "\nNhap vao 1 so (he 10) : ";
	cin >> n;

	while (b < 2 || b > 16)
	{
		cout << "\nNhap vao co so b = [2..16] : ";
		cin >> b;
	}						
	DoiCoSo(n, b);			
	_getch();
	return 1;
}

void Xuat(int so)
{
	switch (so)
	{
	case 0:
		cout << "0";
		break;
	case 1:
		cout << "1";
		break;
	case 2:
		cout << "2";
		break;
	case 3:
		cout << "3";
		break;
	case 4:
		cout << "4";
		break;
	case 5:
		cout << "5";
		break;
	case 6:
		cout << "6";
		break;
	case 7:
		cout << "7";
		break;
	case 8:
		cout << "8";
		break;
	case 9:
		cout << "9";
		break;
	case 10:
		cout << "A";
		break;
	case 11:
		cout << "B";
		break;
	case 12:
		cout << "C";
		break;
	case 13:
		cout << "D";
		break;
	case 14:
		cout << "E";
		break;
	case 15:
		cout << "F";
		break;
	}
}

int TimLuyThua(int b, int n)		
{
	int ketQua = 1;
	while (pow(b, ketQua) <= n)
	{
		ketQua++;
	}

	ketQua--;
	return pow(b, ketQua);

}

void DoiCoSo(int n, int b)	
{
	int v, so = 0;				

	v = TimLuyThua(b, n);

	while (1)				
	{
		if (n < v)
			Xuat(0);
		else
		{
			so = n / v;
			Xuat(so);
			n = n - so * v;
		}
		v = v / b;
		if (v <= 0)
			break;
	}
}