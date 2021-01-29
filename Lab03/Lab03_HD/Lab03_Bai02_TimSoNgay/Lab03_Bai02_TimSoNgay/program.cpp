#include<iostream>
#include<conio.h>
using namespace std;
int TimSoNgay(int thang, int nam);
int NhapSoTrongMien(int min, int max);

int main()
{ 
	//Khai báo biến để lưu độ dài các cạnh
	int soNgay, thang, nam;

	//Nhập tháng trong năm(1 -> 12)
	cout << endl << "Nhap mot thang trong nam";
	thang = NhapSoTrongMien(1, 12);

	//Nhập năm(1 -> 3000)
	cout << endl << "Nhap nam duong lich";
	nam = NhapSoTrongMien(1, 3000);

	//Gọi hàm tìm số ngày của tháng và năm đã nhập
	soNgay = TimSoNgay(thang, nam);

	//Xuất kết quả
	cout << endl << "Thang " << thang << " nam " << nam << " co " << soNgay << " ngay.";

	_getch();
	return 1;
}

//Định nghĩa hàm nhập một số nằm trong đoạn [min ... max]
//Input: min: số nhỏ nhất có thể nhập
//		max: số lớn nhất có thể nhập
//Output: một số nguyên trong đoạn [min ... max]
int NhapSoTrongMien(int min, int max)
{
	//Khai báo biến để lưu số được nhập
	int so;
	//Thực hiện việc nhập và kiểm tra giá trị nhập
	//Nếu giá trị nhập nằm ngoài phạm vi thì yêu cầu nhập lại
	do
	{
		cout << endl << "Nhap mot so trong doan [" << min << "..." << max << "] : ";
		cin >> so;
	} while (so < min || so > max);

	//Gán giá trị so cho hàm và trở về nơi gọi hàm
	return so;
}

//Định nghĩa hàm tìm số ngày của tháng và năm cho trước
//Input:
//	Thang: Tháng trong năm(1 -> 12)
//	Nam: Năm dương lịch(1 -> 3000)
//Output: Số ngày của tháng trong năm cho trước
int TimSoNgay(int thang, int nam)
{
	//Khai báo biến để lưu số ngày
	int soNgay;
	
	//if (thang = 1, 3, 5, 7, 8, 10, 12)
	//{
	//	soNgay = 31;
	//}
	//else if (thang = 4, 6, 9, 11)
	//{
	//	soNgay = 30;
	//}
	//else if((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
	//	soNgay = 29;		//Trường hợp năm nhuận
	//
	//else
	//	soNgay = 28;

	//Dùng lệnh switch để kiểm tra theo tháng
	switch (thang)
	{
		//Nếu là tháng 1, 3, 5, 7, 8, 10, 12 thì số ngày là 31
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		soNgay = 31;
		break;
	//Nếu là tháng 4, 6, 9, 11 thì số ngày là 30
	case 4:
	case 6:
	case 9:
	case 11:
		soNgay = 30;
		break;
	//Trường hợp còn lại(tháng 2) số ngày = 28 hoặc 29
	//Phụ thuộc vào năm đó có nhuận hay không
	case 2:
		//Kiểm tra có phải năm nhuận hay không
		if (nam % 400 == 0)
			soNgay = 29;		//Trường hợp năm nhuận
		else if (nam % 4 == 0 && nam % 100 != 0)
			soNgay = 28;		//Trường hợp không phải năm nhuận
		break;
	}
	return soNgay;
}