//Nạp các thư viện vào hàm chương trình
#include<iostream>
#include<conio.h>
using namespace std;
//Định nghĩa hàm main
int main()
{
	//Xuất 2 chuỗi nằm liền nhau
	cout << "Xin chao" << " tat ca cac ban\n";
	cout << "Chao nam moi " << 2015;
	//Xuất nhiều giá trị trên một dòng
	cout << endl << "Nam " << 2015
		<< " thuoc the ki " << 21
		<< " va co ten am lich la " << "At mui";
	//Dùng một lệnh cout để xuất trên nhiều dòng
	cout << endl
		<< endl << "Ho va ten : Phan Thanh Binh"
		<< endl << "Gioi Tinh : Nam"
		<< endl << "Ngay sinh : 27/10/1995"
		<< endl << "Diem Tb   : " << 7.75
		<< endl << "SV Khoa   : Cong nghe Thong tin";

	_getch();
}