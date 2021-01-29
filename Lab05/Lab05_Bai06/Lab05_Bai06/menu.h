void XuatMenu()
{
	cout << "\n=============== CHON CHUC NANG =================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap mang tu dong";
	cout << "\n2. Xuat mang";
	cout << "\n3. Tinh TBC cac phan tu trong mang";
	cout << "\n4. Tinh tong binh phuong cua cac phan tu trong mang";
	cout << "\n5. Tinh do lech lon nhat giua 2 phan tu nam lien tiep nhau";
	cout << "\n6. Tinh tong SNT co 2 chu so";
	cout << "\n=================================================\n";
}

int ChonMenu(int soMenu)
{
	int stt = -1;
	while (stt < 0 || stt > soMenu)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap tuy chon menu tuong ung: ";
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
		NhapMangTuDong(a, n);
		cout << "\nMang vua nhap: \n";
		XuatMang(a, n);
		break;
	case 2:
		cout << "\n2. Xuat mang\n";
		XuatMang(a, n);
		break;
	case 3:
		cout << "\n3. Tinh TBC cac phan tu trong mang";
		ketQua = Tinh_TBC(a, n);
		cout << "\nGia tri trung binh cua mang: " << ketQua;
		break;
	case 4:
		cout << "\n4. Tinh tong binh phuong cua cac phan tu trong mang";
		ketQua = Tong_BinhPhuong(a, n);
		cout << "\nTong binh phuong cua mang = " << ketQua;
		break;
	case 5:
		cout << "\n5. Tinh do lech lon nhat giua 2 phan tu nam lien tiep nhau";
		break;
	case 6:
		cout << "\n6. Tinh tong SNT co 2 chu so\n";
		ketQua = TinhTongSNT_2ChuSo(a, n);
		cout << "\nXuat mang hien hanh\n";
		XuatMang(a, n);
		cout << "\nTong SNT co 2 chu so la: " << ketQua;
		break;
	}
	_getch();
}