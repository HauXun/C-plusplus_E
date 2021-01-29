//Khai báo nguyên mẫu các hàm xử lý menu
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int &n);

//Định nghĩa các hàm xử lý menu
void XuatMenu()
{
		cout << endl << "============== CHON CHUC NANG =============";
		cout << endl << "0. Thoat khoi chuong trinh";
		cout << endl << "1. Nhap tu dong mang a";
		cout << endl << "2. Xem du lieu mang a";
		cout << endl << "3. Dem so lan xuat hien cua x trong a";
		cout << endl << "4. Dem va xuat cac so nguyen to trong a";
		cout << endl << "5. Tinh tong cac gia tri trong mang";
		cout << endl << "6. Tinh tong cac gia tri chi xuat hien mot lan trong mang";
		cout << endl << "7. Tinh tong cac gia tri phan biet trong mang";
		cout << endl << "==========================================";
}

/*Input: soMenu = Số lượng menu có thể chọn
Output: Stt menu do người dùng nhập vào*/
int ChonMenu(int soMenu)
{
	int stt = -1;
	while (stt < 0 || stt > soMenu)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap tuy chon Menu tuong ung:";
		cin >> stt;
	}
	return stt;
}

/*Input: menu = Stt menu do người chọn
				Dãy số a
				Số nguyên dương n
Output: Không có*/
void XuLyMenu(int menu, DaySo a, int &n)
{
	int ketQua, x;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh";
		break;
	case 1:
		system("CLS");
		cout << endl << "\n1. Nhap tu dong mang a";
		cout << "\nNhap kich thuoc n: ";
		cin >> n;
		NhapTuDong(a, n);
		system("CLS");
		cout << "\nDay so moi nhap:\n";
		XuatMang(a, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "\n2. Xem du lieu mang a";
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);
		break;
	case 3:
		system("CLS");
		cout << endl << "\n3. Dem so lan xuat hien cua x trong a";
		cout << "\nNhap gia tri can xet x = ";
		cin >> x;
		ketQua = Dem_X(a, n, x);
		system("CLS");
		cout << "\nSo lan " << x << " xuat hien trong mang a: ketQua = " << ketQua;
		cout << "\nXem lai mang hien hanh de kiem tra n:\n";
		XuatMang(a, n);
		break;
	case 4:
		system("CLS");
		cout << endl << "\n4. Dem va xuat cac so nguyen to trong a";
		ketQua = Dem_NT(a, n);
		if (ketQua)
			cout << "\nSo luong cac so nguyen to trong a: ketQua = " << ketQua;
		else
			cout << "\nKhong co so nguyen to nao trong mang a";
		cout << "\nXem lai mang hien hanh de kiem tra:\n";
		XuatMang(a, n);
		break;
	case 5:
		system("CLS");
		cout << endl << "\n5. Tinh tong cac gia tri trong mang";
		cout << endl << "\nTong cac phan tu trong mang co ketQua = " << TinhTong(a, n);
		cout << endl << "\nXem lai mang hien hanh de kiem tra n:\n";
		XuatMang(a, n);
		break;
	case 6:
		system("CLS");
		cout << endl << "\n6. Tinh tong cac gia tri chi xuat hien mot lan trong mang";
		cout << endl << "\nTong cac phan tu trong mang chi xuat hien mot lan ketQua = " << TinhTongDuyNhat(a, n);
		cout << endl << "\nXem lai mang hien hanh de kiem tra n:\n";
		XuatMang(a, n);
		break;
	case 7:
		system("CLS");
		cout << endl << "\n7. Tinh tong cac gia tri phan biet trong mang";
		ketQua = TinhTong_PhanBiet(a, n);
		cout << endl << "\nTong cac phan tu phan biet trong a: ketQua = " << ketQua;
		cout << endl << "\nXem lai mang hien hanh de kiem tra n:\n";
		XuatMang(a, n);
		break;
	}
	_getch();
}