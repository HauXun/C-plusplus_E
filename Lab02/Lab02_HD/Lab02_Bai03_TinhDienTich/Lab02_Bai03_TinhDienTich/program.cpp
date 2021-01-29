#include<iostream>
#include<conio.h>
using namespace std;

//Định nghĩa hằng số và các kiểu dữ liệu mới


//Khai báo nguyên mẫu của các hàm


int TinhDienTichHCN(int dai, int rong);
double TinhDienTichTG(int canhA, int canhB, int canhC);

//Định nghĩa hàm main
int main()
{
	//Khai báo biến để lưu độ dài các cạnh
	int a, b, c;

	//Khai báo biến để lưu diện tích
	double dienTich;

	//Nhập độ dài canh a
	cout << endl << "Nhap do dai canh a : ";
	cin >> a;

	//Nhập độ dài canh b
	cout << endl << "Nhap do dai canh b : ";
	cin >> b;

	//Nhập độ dài canh c
	cout << endl << "Nhap do dai canh c : ";
	cin >> c;

	//Gọi hàm tính diện tích HCN khi biết chiều dài a và chiều rộng b
	dienTich = TinhDienTichHCN(a, b);
	
	//Xuất diện tích của HCN
	cout << endl << "Dien tich cua HCN co chieu dai " << a << " va chieu rong " << b << " la " << dienTich;

	//Gọi hàm tính diện tích tam giác khi biết độ dài 3 cạnh a, b ,c
	dienTich = TinhDienTichTG(a, b, c);

	//Xuất diện tích của HTG
	cout << endl << "Dien tich cua HTG co 3 canh : a = " << a
		<< ", b = " << b << ", c = " << c << " la " << dienTich;
}

int TinhDienTichHCN(int dai, int rong)
{
	int dt;
	dt = dai * rong;
	return dt;
}

double TinhDienTichTG(int canhA, int canhB, int canhC)
{
	double dt, p;
	p = (canhA + canhB + canhC) / 2.0;
	dt = sqrt(p * (p - canhA) * (p - canhB) * (p - canhC));
	return dt;
}