void XuatMenu()
{
	cout << "\n================ CHON CHUC NANG ===================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap tu dong day a";
	cout << "\n2. Xem du lieu day a";
	cout << "\n3. Xoa phan tu nam tai vi tri cho truoc khoi mang";
	cout << "\n4. Xoa phan tu x dau tien tim duoc trong mang";
	cout << "\n5. Xoa moi phan tu x trong mang";
	cout << "\n6. Xoa tat ca cac phan tu trung nhau, chi giu lai mot phan tu trong so cac phan tu trung do";
	cout << "\n7. Xoa cac phan tu nam ngoai pham vi";
	cout << "\n==================================================\n";
}

int ChonMenu(int soMenu)
{
	int stt = -1;

	while (stt < 0 || stt > soMenu)
	{
		system("cls");
		XuatMenu();
		cout << "\nChon chuc nang >> ";
		cin >> stt;
	}

	return stt;
}

void XuLyMenu(int menu, DaySo a, int &n)
{
	int x;
	system("cls");
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Nhap tu dong day a";
		NhapTuDong(a, n);

		system("cls");
		cout << "\nDay so moi nhap:\n";
		XuatMang(a, n);
		break;
	case 2:
		cout << "\n2. Xem du lieu day a";
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);
		break;
	case 3:
		cout << "\n3. Xoa phan tu nam tai vi tri cho truoc khoi mang";
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		cout << "\nNhap vi tri can xoa trong mang: ";
		cin >> x;
		XoaPhanTu(a, n, x);
		cout << "\nMang sau khi xoa:\n";
		XuatMang(a, n);
		break;
	case 4:
		cout << "\n4. Xoa phan tu x dau tien tim duoc trong mang";
		cout << "\nNhap x trong mang can xoa: ";
		cin >> x;
		XoaX_DauTien(a, n, x);
		cout << "\nMang sau khi xoa:\n";
		XuatMang(a, n);
		break;
	case 5:
		cout << "\n5. Xoa moi phan tu x trong mang";
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		cout << "\nNhap x can xoa trong mang: ";
		cin >> x;
		XoaX_TrongMang(a, n, x);
		cout << "\nMang sau khi xoa:\n";
		XuatMang(a, n);
		break;
	case 6:
		cout << "\n6. Xoa tat ca cac phan tu trung nhau, chi giu lai mot phan tu trong so cac phan tu trung do";
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		XoaCacPhanTuTrungNhau(a, n);
		cout << "\nMang sau khi xoa cac phan tu trung nhau:\n";
		XuatMang(a, n);
		break;
	case 7:
		cout << "\n7. Xoa cac phan tu nam ngoai pham vi";
		break;
	}
	_getch();
}
