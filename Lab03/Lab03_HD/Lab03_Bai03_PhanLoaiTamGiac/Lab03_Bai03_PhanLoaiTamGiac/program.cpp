#include<iostream>
#include<conio.h>
using namespace std;
int PhanLoaiTamGiac(double a, double b, double c);
void ThongBao(int loaiTG, double a, double b, double c);

int main()
{
	//Khai báo biến để lưu độ dài các cạnh TG
	double a, b, c;

	//Nhập độ dài các cạnh của TG

	//Nhập năm (1 -> 3000)
	cout << endl << "Nhap do dai canh a : ";
	cin >> a;

	cout << endl << "Nhap do dai canh b : ";
	cin >> b;

	cout << endl << "Nhap do dai canh c : ";
	cin >> c;

	//Gọi hàm phân loại TG
	int ketQua = PhanLoaiTamGiac(a, b, c);

	//Gọi hàm thông báo để xuất kết quả phân loại
	ThongBao(ketQua, a, b, c);

	_getch();
	return 1;
}

//Định nghĩa hàm phân loại tam giác
//Input:
//	a: Độ dài cạnh a
//	b: Độ dài cạnh b
//	c: Độ dài cạnh c
//Output:
//	1: Tam giác đều
//	2: Tam giác cân
//	3: Tam giác vuông
//	4: Tam giác vuông cân
//	5: Tam giác thường
//	0: Không phải tam giác
int PhanLoaiTamGiac(double a, double b, double c)
{
	int kq;					//Khai báo biến để lưu kết quả phân loại
	
	//Nếu a, b, c là 3 cạnh của tam giác
	if (a + b > c && a + c > b && b + c > a)
	{
		//Kiểm tra nếu 3 cạnh bằng nhau thì đó là TG đều
		if (a == b && b == c)
			kq = 1;
		else				//Th không phải TG đều
			//Kiểm tra nếu 2 cạnh bằng nhau thì là TG cân
		if (a == b || b == c || a == c)
		{
			//Kiểm tra có phải là TG vuông không
			if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
				kq = 4;		//TH TG vuông cân
			else
				kq = 2;		//TH TG cân
		}
		else	//TH không phải TG cân
				//Kiểm tra có phải TG vuông không
		if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
			kq = 3;			//TH TG vuông
		else
			kq = 5;			//TH TG thường
	}
	//Gán giá trị kq cho hàm và trở về nơi gọi hàm
	return kq;
}

//Định nghĩa hàm thông báo kết quả phân loại TG
//Input:
//	a: Độ dài cạnh a
//	b: Độ dài cạnh b
//	c: Độ dài cạnh c
//Output: Không có chỉ xuất thông báo
void ThongBao(int loaiTG, double a, double b, double c)
{
	//Dùng lệnh switch để kiểm tra theo tháng
	switch (loaiTG)
	{
	case 0: cout << endl << a << ", " << b << ", " << c
		<< " khong phai la 3 canh cua 1 tam giac";
		break;
	case 1: cout << endl << a << ", " << b << ", " << c
		<< " la do dai 3 canh cua 1 tam giac deu";
		break;
	case 2: cout << endl << a << ", " << b << ", " << c
		<< " la do dai 3 canh cua 1 tam giac can";
		break;
	case 3: cout << endl << a << ", " << b << ", " << c
		<< " la do dai 3 canh cua 1 tam giac vuong";
		break;
	case 4: cout << endl << a << ", " << b << ", " << c
		<< " la do dai 3 canh cua 1 tam giac vuong cân";
		break;
	case 5: cout << endl << a << ", " << b << ", " << c
		<< " la do dai 3 canh cua 1 tam giac thuong";
		break;
	}
}