#include<iostream>
#include<conio.h>
using namespace std;
int TinhGiaThua(unsigned int n);
int TinhTong(unsigned int n);

int main()
{
	//Khai báo biên
	unsigned int n;

	//Nhập giá trị cho biến a
	cout << endl << "Nhap mot so nguyen khong am : ";
	cin >> n;

	//Khai báo biến để lưu kết quả
	long ketQua;

	//Gọi hàm tính !n
	ketQua = TinhGiaThua(n);
	
	//Xuất kết quả
	cout << endl << n << "! = " << ketQua;

	//Gọi hàm tính tổng n số nguyên dương đầu tiền
	ketQua = TinhTong(n);
	cout << endl << "1 + 2 + ... + n = " << ketQua;

	_getch();
	return 1;
}

//Định nghĩa hàm tính giai thừa của N
//Intput:
//	n: Một số nguyên không âm
//Output: Giai thừ của n(!n)
int TinhGiaThua(unsigned int n)
{
	int kq;
	if (n < 2)
		return 1;
	else
	{
		kq = 1;			//Khai báo biến lưu kết quả

		//Duyệt qua các số từ 2 đến n
		for (int i = 2; i <= n; i++)
			kq *= i;
		//Gán giá trị kq cho hàm và trở về nơi gọi hàm
		return kq;
	}
}

//Định nghĩa hàm tính tổng N số nguyên dương đầu tiên
//Input:
//	n: một số nguyên không âm
//Output:
//	Tổng các số từ 1 đến n
int TinhTong(unsigned int n)
{
	int sum = 0;			//Khai báo biến lưu kết quả

	//Duyệt qua các số từ 2 đến n
	for (int i = 1; i <= n; i++)
		sum += i;
	return sum;
}