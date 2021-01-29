#include<iostream>
#include<conio.h>
using namespace std;

//Định nghĩa hằng số và các kiểu dữ liệu mới


//Khai báo nguyên mẫu của các hàm

//int NhapSoNguyen();
int TinhTong(unsigned int n);

//Định nghĩa hàm main
int main()
{
	////Khai báo biến để lưu số nhập từ bàn phím
	//int x, y, z;

	////Gọi hàm nhập số nguyên và lưu kết quả vào 2 phím
	//x = NhapSoNguyen();
	//y = NhapSoNguyen();

	////Xuất tổng của 2 số vừa nhập
	//cout << x << " + " << y << " = " << x + y;

	////Sử dụng lời gọi hàm trong biểu thức
	//z = (x + y) * NhapSoNguyen();
	//cout << endl << "z = " << z;
	//cout << NhapSoNguyen();

	//Khai báo biến để lưu kết quả
	int ketQua = 0;

	//Gọi hàm tính tổng các số từ 1 đến 50
	ketQua = TinhTong(50);

	//Xuất kết quả ra màn hình
	cout << endl << "1 + 2 + ... + 50 = " << ketQua;

	//Khai báo một số nguyên không âm
	unsigned int m;

	//Nhập giá trị cho biến m từ bàn phím
	cout << endl << "Nhap mot so nguyen khong am : ";
	cin >> m;

	//Gọi hàm tính tổng các số từ 1 đến n
	ketQua = TinhTong(m);

	//Xuất kết quả ra màn hình
	cout << endl << "1 + 2 + ... + " << m << " = " << ketQua;

	_getch();
	return 1;
}

//Định nghĩa hàm nhập một số nguyên từ bàn phím
//Input : Không có
//Output : Giá trị được nhập từ bàn phím
//int NhapSoNguyen()
//{
//	int so;				//Khai báo biến để lưu giá trị nhập vào
//	//Xuất thông báo để người dùng biết
//	cout << endl << "Nhap mot so nguyen : ";
//	//Chờ người dùng nhập một số nguyên
//	cin >> so;
//	//Gán giá trị so cho hàm và trả về nơi gọi hàm
//	return so;
//}

//Định nghĩa hàm tính tổng các số từ 1 tới n
//Input:
//		n: một số nguyên dương
//Output: Tổng các số từ 1 tới n
int TinhTong(unsigned int n)
{
	//Khai báo biến để lưu kết quả
	int sum = 0;

	//Tính tổng 1 + 2 + ... + n
	sum = n * (n - 1) / 2;

	//Gán giá trị sum cho hàm và trả về nơi gọi hàm
	return sum;
}