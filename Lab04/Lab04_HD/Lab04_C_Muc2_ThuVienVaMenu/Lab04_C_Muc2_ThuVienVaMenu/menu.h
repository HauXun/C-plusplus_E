//Khai báo nguyên mẫu các hàm trong hệ thông menu

void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu);

//Định nghĩa các hàm trong hệ thống menu

//Hàm xuất menu: Xuất danh sách các chức năng ra màn hình: Giả sử có 4 chức năng
//Input: Không có
//Output: Không có

void XuatMenu()
{
	cout << "\n====== HE THONG CHUC NANG ======";
	cout << "\n0. THOAT KHOI CHUONG TRINH";
	cout << "\n1. Chuc nang 1";
	cout << "\n2. Chuc nang 2";
	cout << "\n3. Chuc nang 3";
	cout << "\n4. Chuc nang 4";
	cout << "\n================================";
}

//Hàm ChonMenu: Chọn một chức năng trong danh sách
//Input: soMenu = So chuc nang
//Output: stt = thu tu chuc nang duoc chon

int ChonMenu(int soMenu)
{
	int stt;	//Biến lưu stt chưc năng được chọn
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap mot stt (1 <= stt <= " << soMenu
			<< ") de chon menu : stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

//Hàm XuLyMenu: Xử lý chức năng được chọn
//Input: menu = So thu tu menu da chon
//Output: Không có

void XuLyMenu(int menu)
{
	switch (menu)
	{
	case 0:
		cout << "\n0. THOAT KHOI CHUONG TRINH.\n";
		break;
	case 1:
		cout << "\n1. Ban da chon chuc nang 1";
		//Xử lý chức năng 1
		break;
	case 2:
		cout << "\n2. Ban da chon chuc nang 2";
		//Xử lý chức năng 2
		break;
	case 3:
		cout << "\n3. Ban da chon chuc nang 3";
		//Xử lý chức năng 3
		break;
	case 4:
		cout << "\n4. Ban da chon chuc nang 4";
		//Xử lý chức năng 4
		break;
	}
	_getch();
}