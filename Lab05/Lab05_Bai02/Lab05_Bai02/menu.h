void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int &n);

void XuatMenu()
{
	cout << "\n=============== CHON CHUC NANG =================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap mang tu dong";
	cout << "\n2. Xuat mang";
	cout << "\n3. Dem so luong so co 3 chu so";
	cout << "\n4. Dem cac so nam ngoai pham vi";
	cout << "\n5. Dem so luong so chinh phuong";
	cout << "\n6. Dem so lan xuat hien cua phan tu x bat dau tu vi tri cho truoc";
	cout << "\n7. Dem so luong cac duong chay trong day";
	cout << "\n=================================================\n";
}

int ChonMenu(int soMenu)
{
	int stt = -1;
	while (stt < 0 || stt > soMenu)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap tuy chon menu tuong ung:";
		cin >> stt;
	}
	return stt;
}

void XuLyMenu(int menu,DaySo a, int &n)
{
	int ketQua, min, max, viTri, x;
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Nhap mang tu dong";
		NhapMangTuDong(a, n);
		cout << "\nMang vua nhap: \n";
		XuatMang(a, n);
		break;
	case 2:
		cout << "\n2. Xuat mang\n";
		XuatMang(a, n);
		break;
	case 3:
		cout << "\n3. Dem so luong so co 3 chu so";
		system("CLS");
		cout << "\nMang vua nhap: \n";
		XuatMang(a, n);
		ketQua = DemSoLuongSoCo3ChuSo(a, n);
		cout << "\nSo luong so co 3 chu so trong mang a la : " << ketQua;
		cout << "\nXem mang de kiem tra:\n";
		XuatMang(a, n);
		break;
	case 4:
		cout << "\n4. Dem cac so nam ngoai pham vi";
		cout << "\nNhap pham vi nho nhat: ";
		cin >> min;
		cout << "\nNhap pham vi lon nhat: ";
		cin >> max;
		ketQua = DemSoNamNgoaiPhamVi(a, n, min, max);
		cout << "\nSo luong so nam ngoai pham vi [" << min << " ... " << max << "] la: " << ketQua;
		cout << "\nXem mang de kiem tra:\n";
		XuatMang(a, n);
		break;
	case 5:
		cout << "\n5. Dem so luong so chinh phuong";
		ketQua = DemSoChinhPhuong(a, n);
		cout << "\nSo luong so chinh phuong trong mang a la: " << ketQua;
		cout << "\nXem mang de kiem tra:\n";
		XuatMang(a, n);
		break;
	case 6:
		cout << "\n6. Dem so lan xuat hien cua phan tu x bat dau tu vi tri cho truoc";
		cout << "\nNhap vao 1 vi tri: ";
		cin >> viTri;
		cout << "\nNhap vao 1 so bat ki: ";
		cin >> x;
		ketQua = SoLanXuatHien_X(a, n, viTri, x);
		cout << "\nSo lan xuat hien cua x tu vi tri " << viTri << " la: " << ketQua;
		cout << "\nXem mang de kiem tra:\n";
		XuatMang(a, n);
		break;
	case 7:
		cout << "\n7. Dem so luong cac duong chay trong day";
		break;
	}
	_getch();
}