#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	//Khai báo một biến kiểu số nguyên tên là x
	int x = 10;
	int y = 5;
	int z = 2;
	//Xuất giá trị của biến x ra màn hình
	cout << "x = " << x << endl << "y = " << y << endl << "z = " << z << endl;
	cout << "x + y + z = " << x + y + z;
	//Xuất tổng của 3 biến x, y, z
	cout << endl
		<< x << " + "
		<< y << " + "
		<< z << " = "
		<< x + y + z;
	/*Khai báo 2 biến lưu kiểu nguyên để lưu chiều dài
	và chiều rộng của hình chữ nhật*/
	int dai, rong;
	//Xuất thông báo cho người dùng để nhập chiều dài
	cout << endl << "Nhap chieu dai cua HCN : ";
	//Chờ người dùng nhập giá trị rồi gán cho biến ' dài '
	cin >> dai;
	//Xuất thông báo cho người dùng để nhập chiều rộng
	cout << endl << "Nhap chieu rong cua HCN : ";
	//Chờ người dùng nhập giá trị rồi gán cho biến ' rộng '
	cin >> rong;
	//Xuất giá trị của 2 biến ' dai ' , ' rong '
	cout << endl
		<< "Chieu dai hinh chu nhat la : " << dai << " , "
		<< "Chieu rong hinh chu nhat la : " << rong;
	//Khai báo 2 biến kiểu nguyên mới để lưu
	//Chu vi và diện tích hình chữ nhật
	int chuVi, dienTich;
	//Tính chu vi và diện tích hình chữ nhật
	chuVi = (dai + rong) * 2;
	dienTich = dai * rong;
	//Xuất chu vi và diện tích hình chữ nhật
	cout << endl << "Chu vi cua HCN la : " << chuVi
		<< endl << "Dien tich hinh HCN la : " << dienTich;
	_getch();
	return 1;
}