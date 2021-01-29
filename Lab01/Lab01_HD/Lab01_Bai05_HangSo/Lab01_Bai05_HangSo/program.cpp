#include<iostream>
#include<conio.h>
using namespace std;
//#define MAX 100
//#define KHOA "Cong nghe Thong tin"
//#define PI 3.1415926
//#define TAB '\t'
int main()
{
	const int MAX = 100;
	const char KHOA[] = "Cong nghe Thong tin";
	const float PI = 3.1415926;
	const char TAB = '\t';
	cout << "Gia tri cua hang so MAX la : " << MAX << endl
		<< "Gia tri cua hang so KHOA la : " << KHOA << endl
		<< "Gia tri cua hang so PI la : " << PI << endl
		<< TAB << "Dong nay duoc thut le 1 dau TAB";
	//Khai báo biến r kiểu số thực để lưu bán kính hình tròn
	float r;
	//Xuất thông báo yêu cầu người dùng nhập bán kính r
	cout << endl << "Nhap ban kinh hinh tron : ";
	//Chờ người dùng nhập giá trị rồi gán cho biến r
	cin >> r;
	//Khai báo 2 biến kiểu số thực để lưu chu vi và diện tích
	float chuVi, dienTich;
	//Tính chu vi và diện tích hình tròn
	chuVi = 2 * PI * r;
	dienTich = PI * r * r;
	//Xuất chu vi và diện tích hình tròn ra màn hinh
	cout << endl << "Ban kinh : R = " << r
		<< endl << "Chu vi : C = " << chuVi
		<< endl << "Dien tich : S = " << dienTich;
	_getch();
	return 1;
}