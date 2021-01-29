void XuatMenu();
//int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int &n);


void XuatMenu()
{
	cout << "\n============= CHON CHUC NANG =================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap mang tu dong";
	cout << "\n2. Xuat mang";
	cout << "\n3. Tim vi tri cua SNT cuoi cung trong mang a";
	cout << "\n4. Tim phan tu xuat hien nhieu nhat";
	cout << "\n5. Tim phan tu co gia tri nho nhat";
	cout << "\n6. Tim so am lon nhat";
	cout << "\n7. Tim so duong nho nhat";
	cout << "\n=============================================\n";
}

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

void XuLyMenu(int menu, DaySo a, int &n)
{
	int ketQua;
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Nhap mang tu dong";
		cout << "\nNhap vao so phan tu cua mang : ";
		cin >> n;
		NhapMangTuDong(a, n);	
		system("CLS");
		cout << "\nDay so vua nhap:\n";
		XuatMang(a, n);
		break;
	case 2:
		cout << "\n2. Xuat mang";
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);
		break;
	case 3:
		cout << "\n3. Tim vi tri cua SNT cuoi cung trong mang a";
		ketQua = SoNguyenToCuoiCung(a, n);
		if (ketQua == -1)
			cout << "\nKhong tim thay so nguyen to\n";
		else
			cout << "\nSo nguyen to cuoi cung la " << a[ketQua]
			<< ", tai vi tri: " << ketQua;
		cout << "\nXuat mang hien hanh de kiem tra n:\n";
		XuatMang(a, n);
		break;
	case 4:
		cout << "\n4. Tim phan tu xuat hien nhieu nhat";
		ketQua = PhanTuXuatHienNhieuNhat(a, n);
		cout << "\nPhan tu xuat hien nhieu nhat la: " << ketQua
			<< " voi so lan xuat hien la: " << DemSoLanXuatHien(a, n, ketQua);
		cout << "\nXuat mang hien hanh de kiem tra n:\n";
		XuatMang(a, n);
		break;
	case 5:
		cout << "\n5. Tim phan tu co gia tri nho nhat";
		ketQua = ViTriNhoNhat(a, n);
		cout << "\nPhan tu nho nhat la: " 
			<< a[ketQua] << ", tai vi tri: " << ketQua;
		cout << "\nXuat mang hien hanh de kiem tra n:\n";
		XuatMang(a, n);
		break;
	case 6:
		cout << "\n6. Tim so am lon nhat";
		ketQua = TimSoAmLonNhat(a, n);
		if (ketQua == -1)
			cout << "\nMang khong chua so am:\n";
		else
			cout << "\nSo am lon nhat la: " << a[ketQua]
			<< ", tai vi tri: " << ketQua;
		cout << "\nXuat mang hien hanh de kiem tra n:\n";
		XuatMang(a, n);
		break;
	case 7:
		cout << "\n7. Tim so duong nho nhat";
		ketQua = TimSoDuongNhoNhat(a, n);
		if (ketQua == -1)
			cout << "\nMang khong chua so am:\n";
		else
			cout << "\nSo duong nho nhat la: " << a[ketQua]
			<< ", tai vi tri: " << ketQua;
		cout << "\nXuat mang hien hanh de kiem tra n:\n";
		XuatMang(a, n);
		break;
	}
	_getch();
}