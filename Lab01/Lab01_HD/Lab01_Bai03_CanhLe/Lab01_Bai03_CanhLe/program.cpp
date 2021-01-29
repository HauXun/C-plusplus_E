//Nạp các thư viện vào hàm chương trình
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
//Định nghĩa hàm main
int main()
{
	//Xuất dòng tiêu đề
	cout << setiosflags(ios::left)	//Thiết lập canh lề trái
		<< setw(10) << "MSSV"		//MSSV chiếm một cột
		<< setw(25) << "Ho va ten"	//Họ và tên chiếm 25 cột
		<< setw(10) << "Lop"		//Lớp chiếm 10 cột
		<< setw(10) << "Diem TB"	//Điểm TB chiếm 10 cột
		<< setw(10) << "Diem TL"	//Điểm TL chiếm 10 cột
		<< endl;
	//Xuất thông tin sinh viên
	cout << setiosflags(ios::left)
		<< setw(10) << "2011379"
		<< setw(25) << "Trieu Trong Hau"
		<< setw(10) << "CTK44"
		<< setw(10) << "7.50"
		<< setw(10) << setprecision(2) << 5.756251
		<< endl;
	_getch();
}