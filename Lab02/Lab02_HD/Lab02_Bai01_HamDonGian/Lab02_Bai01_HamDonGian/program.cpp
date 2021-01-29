//=============================================
//Nạp các thu viện vào hàm chương trình
//=============================================
#include<iostream>
#include<conio.h>

using namespace std;

//=============================================
//Định nghĩa hằng sô và các kiểu dữ liệu mới
//=============================================


//=============================================
//Khai báo nguyên mẫu của các hàm
//=============================================

void ThongBao();
void XuatKyTu(short ma);
void XuatPhuongTrinh(float a, float b);

//=============================================
//Định nghĩa hàm main
//=============================================
int main()
{
	//Gọi hàm thông báo

	ThongBao();

	XuatKyTu(147);				//Dùng giá trị làm đối số

	//Khai báo kiểu số nguyên tên là dollar và ma
	short dollar = 135, ma;
	XuatKyTu(dollar);			//Dùng tên biến làm đối số

	//Nhập mã ACSII từ bàn phím rồi truyền vào hàm
	cout << endl << "Nhap mot so trong doan [30 ... 255] : ";
	cin >> ma;

	//Gọi hàm xuất phương trình
	XuatPhuongTrinh(2.3, 5);	//Dùng giá trị làm đối số

	//Khai báo 2 biến kiểu số thực
	float p, q = 10;
	XuatPhuongTrinh(7.5, q);	//Dùng cả giá trị và biến

	//Nhập giá trị thực từ bàn phím, lưu vào biến p
	cout << endl << "Nhap mot so thuc : ";
	cin >> p;
	XuatPhuongTrinh(p, q);		//Dùng tên biến làm đối số

	XuatKyTu(ma);				//Dùng tên biến làm đối số
	//Dừng chương trình và chờ nhấn 1 phím để kết thúc
	_getch();

	//Trả về giá trị 1
	return 1;
}

//=============================================
//Định nghĩa hàm xử lý
//=============================================

//Định nghĩa hàm xuất 1 thông báo ra màn hình
void ThongBao()
{
	cout << endl << "Ban phai hoan thanh bai tap nay.";
}

//Định nghĩa hàm xuất ký tự có mã ACSII cho trước
//Input:
//		ma : Mã ACSII của ký tự
//Output không có
void XuatKyTu(short ma)
{
	char KyTu = (char)ma;
	cout << endl << ma << " <=> " << KyTu;
}

//Định nghĩa hàm xuất ra phương trình bậc nhất ax + b = 0
//Input:
//		a : Hệ số a
//		b : Hệ số b
//Output: Không có
void XuatPhuongTrinh(float a, float b)
{
	cout << endl << a << " * x + " << b << " = 0";
}