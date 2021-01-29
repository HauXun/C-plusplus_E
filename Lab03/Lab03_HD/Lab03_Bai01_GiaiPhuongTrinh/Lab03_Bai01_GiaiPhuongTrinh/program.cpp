#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
using namespace std;

float NhapMotSoKhacKhong();
void GiaiPhuongTrinhBacHai(float a, float b, float c);

int main()
{
	//Khai báo biến để lưu độ dài các cạnh
	float a, b, c;

	//Nhập hệ số a khác 0
	a = NhapMotSoKhacKhong();

	//Nhập hệ số b
	cout << endl << "Nhap he so b: ";
	cin >> b;

	//Nhập độ dài cạnh c
	cout << endl << "Nhap he so c: ";
	cin >> c;

	//Gọi hàm giải phương trình bậc 2 một ẩn
	GiaiPhuongTrinhBacHai(a, b, c);
	_getch();
	return 1;
}

//Định nghĩa hàm nhập một số khác 0 từ bàn phím
//Input: Không có
//Output: Một số thực khác 0

float NhapMotSoKhacKhong()
{
	float so = 0;			//Khai báo biến để lưu số thực
	
	//Thực hiện việc nhập và kiểm tra giá trị nhập
	//Nếu giá trị nhập bằng 0 thì yêu cầu nhập lại
	while (so == 0)
	{
		cout << endl << "Nhap mot so thuc(khac 0) : ";
		cin >> so;
	}

	//Gán giá trị so cho hàm và trở về nơi gọi hàm
	return so;
}

//Định nghĩa hàm giải phương trình bậc 2
//Input:
//	a: Hệ số a
//	b: Hệ số b
//	c: Hệ số c
//Output: Không có chỉ xuất ra nghiệm của phương trình

void GiaiPhuongTrinhBacHai(float a, float b, float c)
{
	//Khai báo biến
	float delta,				//Dùng để lưu giá trị delta
		x;						//Để lưu nghiệm của phương trình
	//Tính giá trị delta
	delta = b * b - 4 * a * c;

	//Kiểm tra chương trình có nghiệm hay không?
	if (delta < 0)
	{
		//Trường hợp vô nghiệm: Xuất thông báo phương trình vô nghiêm
		cout << endl << "Phuong trinh vo nghiem";
	}
	else if (delta == 0.0)
	{
		//Trường hợp có nghiệm kép thi tiến hành Tìm nghiệm rồi sau đó xuất kết quả
		x = -b / (2 * a);

		//Xuất thông báo có nghiệm kép
		cout << endl << "Phuong trinh co nghiem kep x = " << x;
	}
	else			//Trường hợp có 2 nghiệm phân biệt
	{
		//Xuất thông báo có 2 nghiệm phân biệt
		cout << endl << "Phuong trinh có hai nghiem phan biệt : ";

		//Tìm nghiệm thứ nhất
		x = (-b + sqrt(delta)) / 2 * a;

		//Xuất nghiệm thứ nhất
		cout << "x1 = " << setprecision(5) << x;

		//Tìm nghiện thứ 2
		x = (-b - sqrt(delta)) / 2 * a;
		cout << " va x2 = " << setprecision(5) << x;
	}
}