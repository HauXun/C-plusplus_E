void XuatMenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap mang tu dong";
	cout << endl << "2. Xuat mang";
	cout << endl << "3. Tinh tong cac phan tu trong mang";
	cout << endl << "4. Tim gia tri nho nhat cua mang";
	cout << endl << "5. Tim viTri cuoi cung cua Min trong mang";
	cout << endl << "6. Sap xep mang theo yeu cau: 0 - Cuoi && != 0 Tang";
	cout << endl << "==========================================";
}

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

void XuLyMenu(int menu, DaySo a, int &n)
{
	int ketQua;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << endl << "1. Nhap mang tu dong";
		NhapMangTuDong(a, n);
		cout << "\nMang sau khi nhap tu dong:\n";
		XuatMang(a, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Xuat mang\n";
		XuatMang(a, n);
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Tinh tong cac phan tu trong mang";
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		ketQua = TinhTong(a, n);
		cout << "\nTong cac phan tu trong mang la: " << ketQua;
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Tim gia tri nho nhat cua mang";
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		ketQua = NhoNhat(a, n);
		cout << "\nGTNN cua mang la: " << ketQua;
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Tim viTri cuoi cung cua Min trong mang";
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		ketQua = TimMinCuoiCung(a, n);
		cout << "\nVi tri cua GTNN trong mang la: " << ketQua;
		break;
	case 6:
		system("CLS");
		cout << endl << "6. Sap xep mang theo yeu cau: 0 - Cuoi && != 0 Tang";
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		So0CuoiMang(a, n);
		cout << "\nMang sau khi sap xep:\n";
		XuatMang(a, n);
		break;
	}
	_getch();
}