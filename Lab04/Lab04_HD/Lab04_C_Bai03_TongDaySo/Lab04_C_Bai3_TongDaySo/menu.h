// ===================================================
// Khai báo nguyên mẫu các hàm xử lý menu
// ===================================================

// ===================================================
//bổ sung sau
// ===================================================

// ===================================================
// Định nghĩa các hàm xử lý menu
// ===================================================



//Định nghĩa hàm xuất danh sách chức năng ra màn hình
// Input : Không có
// Output: Không có
void XuatMenu()
{
	cout << endl << "==== HE THONG CHUC NANG =======";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Tinh tong R";
	cout << endl << "2. Tinh tong S";
	cout << endl << "3. Tinh tong T";
	cout << endl << "================================";
}

// Định nghĩa hàm chọn một menu trong danh sách
// Input : soMenu = Số lượng menu có thể chọn.
// Output: Số thứ tự menu do người dùng nhập vào.

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so khong khoang [0,..," << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;

	}
	return stt;
}

//Định nghĩa hàm xử lý menu
// Input : menu = Số thứ tự menu do người chọn.
// n = Một số nguyên dương
// Output: Không có.


void XuLyMenu(int menu, unsigned int n)
{
	double sum = 0;

	switch (menu)
	{
	case 0:
		cout << endl << "0. Thoat khoi chuong trinh";
		break;
	case 1:
		cout << endl << "1. Tinh tong R";

		// Gọi hàm tính tổng R
		sum = TinhTongR(n);

		// Xuất kết quả
		cout << endl << "R = " << sum;
		break;;
	case 2:
		cout << endl << "2. Tinh tong S";

		// Gọi hàm tính tổng S
		sum = TinhTongS(n);

		// Xuất kết quả
		cout << endl << "S = " << sum;
		break;
	case 3:
		cout << endl << "3. Tinh tong T";

		// Gọi hàm tính tổng T
		sum = TinhTongT(n);

		// Xuất kết quả
		cout << endl << "T = " << sum;
		break;
	}
	_getch();
}

