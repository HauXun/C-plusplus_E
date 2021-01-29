#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	float x, y;
	cout << "Nhap vao 2 so thuc x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	int n;
	cout << "n = ";
	cin >> n;
	float Ketqua;
	Ketqua = pow(x, n) + pow(y, n);
	cout << "Ket qua = " << Ketqua;
	_getch();
	return 0;
}