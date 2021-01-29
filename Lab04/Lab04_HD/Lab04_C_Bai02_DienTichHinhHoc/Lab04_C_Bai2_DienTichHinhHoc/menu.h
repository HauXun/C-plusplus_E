// ===================================================
// Khai báo nguyên mẫu các hàm xử lý menu
// ===================================================
//bổ sung sau
// ===================================================
// Định nghĩa các hàm xử lý menu
// ===================================================

//Định nghĩa hàm xuất danh sách các chức năng ra màn hình
//Input: Không có
//Output: Không có

void XuatMenu()
{
	cout << endl << "========CHON CHUC NANG========";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Tinh dien tich hinh vuong";
	cout << endl << "2. Tinh dien tich hinh chu nhat";
	cout << endl << "3. Tinh dien tich hinh tam giac";
	cout << endl << "4. Tinh dien tich hinh tron";
	cout << endl << "================================";
	
}

//Định nghĩa hàm chọn một menu trong danh sách
// Hàm này điều khiển người dùng trong việc chọn chức năng
// Người dùng chỉ được phép nhập số thứ tự trong khoảng [0,...,soMenu].
//Input: soMenu = Số lượng menu có thể chọn
//Output: Stt menu do người dùng nhập vào

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap mot so de chon menu ( 0 <= stt <= " << soMenu << " ) : stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	
	return stt;
}

//Định nghĩa hàm xử lý menu phụ thuộc và chứ năng:
//Input: menu = Stt menu do người chọn
//Output: Không có

void XuLyMenu(int menu)
{
	double a, b, c, r, dienTich;
	switch (menu)
	{
	case 0:
		cout << endl << "0. Thoat khoi chuong trinh";
		break;
	case 1:
		cout << endl << "1. Tinh dien tich hinh vuong";
		
		//Thông báo người dùng nhập độ dài cạnh
		cout << endl << "Nhap do dai canh hinh vuong : ";
		cin >> a;

		//Gọi hàm tính diện tích hình vuông
		dienTich = DienTichHinhVuong(a);
		
		//Xuất kết quả
		cout << endl << "Dien tich hinh vuong canh " << a << " la " << dienTich;
		break;

	//Như 5.2
	case 2:
		cout << endl << "2. Tinh dien tich hinh chu nhat";

		//Thông báo người dùng nhập chiều dài & rộng
		cout << endl << "Nhap chieu dai hinh CN : ";
		cin >> a;

		cout << endl << "Nhap chieu rong HCN : ";
		cin >> b;

		//Gọi hàm tính S,HCN
		dienTich = DienTichHinhChuNhat(a, b);

		//Xuất kết quả
		cout << endl << "Dien tich HCN co chieu dai = " << a << " chieu rong = " << b << " la " << dienTich;
		break;

	//Như 6.2
	case 3:
		cout << endl << "3. Tinh dien tich hinh tam giac";

		// Thông báo người dùng nhập chiều dài 3 cạnh
		cout << endl << "Nhap do dai canh a : ";
		cin >> a;

		cout << endl << "Nhap do dai canh b : ";
		cin >> b;

		cout << endl << "Nhap do dai canh c : ";
		cin >> c;

		// Gọi hàm tính diện tích hình tam giác
		dienTich = DienTichTamGiac(a, b, c);

		// Xuất kết quả
		cout << endl << "Dien tich hinh tam giac "
			<< " co 3 canh a = " << a << ", b = " << b
			<< ", c = " << c << " la " << dienTich;
		break;
	case 4:
		cout << endl << "4. Tinh dien tich hinh tron";

		// Thông báo người dùng nhập độ dài bán kính
		cout << endl << "Nhap do dai ban kinh : ";
		cin >> a;

		// Gọi hàm tính diện tích hình tròn
		dienTich = DienTichHinhTron(a);

		// Xuất kết quả
		cout << endl << "Dien tich hinh tron ban kinh "
			<< a << " la " << dienTich;
		break;
	}
	_getch();
}

/*Trong bước tiếp theo, ta soạn thảo từng phần (chức năng) trong thuvien.h, bổ sung xử lý các chức
năng trong hàm XuLyMenu của menu.h, viết lại hàm ChayChuongTrinh trong program.cpp để điều
khiển tùy chọn thực hiện menu chương trình(chọn 0 là dừng chương trình)*/