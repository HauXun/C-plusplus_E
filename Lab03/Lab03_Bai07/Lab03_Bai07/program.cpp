#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

double TinhCanBacHai(double a);

int main()
{

	double a;
	cout << "\nNhap vao 1 so thuc bat ki : ";
	cin >> a;

	cout << "\nCan bac hai cua " << a << " la: " << TinhCanBacHai(a);

	_getch();
	return 0;
}


//Gọi hàm tính căn bậc 2 của a

double TinhCanBacHai(double a)
{
	//Khai báo biểu thức 1 bao gồm

	double xn,			//Để lưu kết quả
		x0;

	//double xn = 1,		//Để lưu kết quả
	//		x0;		

	//Đặt giới hạn cho phép là ( 10^-15) = 0,000 000 000 000 001
	double limit = pow(10, -15);

	if (a == 0)
		xn = 0;
	else
		xn = 1;

	//Thực hiện vòng lặp do...while
	do
	{
		x0 = xn;
		xn = (a / x0 + x0) / 2;

	//Thực hiện lặp lại vòng lặp nếu modun của |xn - x0| > limit tức lớn hơn 0,000 000 000 000 001
	//Tiếp tục gán lại giá trị của xn cho x0 và tiếp tục thực hiện vòng lặp cho đến khi thõa mãn
		//điều kiện và xuất ra giá trị cuối cùng ( trên hàm main )

	} while (abs(xn - x0) > limit);
	return xn;
}