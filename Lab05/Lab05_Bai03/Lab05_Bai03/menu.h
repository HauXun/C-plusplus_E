
void XuatMenu()
{
	cout << "\n===============BANG TUY CHON CHUC NANG==============";
	cout << "\n0.Thoat chuong trinh";
	cout << "\n1.Nhap mang tu dong";
	cout << "\n2.Xuat mang";
	cout << "\n3.Sap cac so duong tang dan, cac so khac giu nguyen thu tu";
	cout << "\n4.Sap cac phan tu sao cho so 0 nam o cuoi mang, cac so khac o dau mang va tang dan";
	cout << "\n5.Sap cac phan tu sao cho so 0 nam o dau mang, so am o giua va giam dan, so duong o cuoi va tang";
	cout << "\n6.Sap cac so le nam dau mang va tang dan, cac so chan nam cuoi mang va giam dan";
	cout << "\n7.Sap cac so nguyen to nam dau mang va tang dan, cac so con lai nam o cuoi va giam dan";
	cout << "\n====================================================";
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

void XuLyMenu(int menu, int &n, DaySo a)
{
	switch (menu)
	{
	case 0:
		cout << "\n0.Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1.Nhap mang tu dong";
		NhapMangTuDong(a, n);
		cout << "\nMang vua nhap:\n";
		XuatMang(a, n);
		break;
	case 2:
		cout << "\n2.Xuat mang";
		XuatMang(a, n);
		break;
	case 3:
		cout << "\n3.Sap cac so duong tang dan, cac so khac giu nguyen thu tu";
		system("CLS");
		cout << "\nMang truoc khi sap xep:\n";
		XuatMang(a, n);
		SoDuongTangDan(a, n);
		cout << "\nMang sau khi sap xep:\n";
		XuatMang(a, n);
		break;
	case 4:
		cout << "\n4.Sap cac phan tu sao cho so 0 nam o cuoi mang, cac so khac 0 dau mang va tang dan";
		system("CLS");
		cout << "\nMang truoc khi sap xep:\n";
		XuatMang(a, n);
		So0CuoiMang(a, n);
		cout << "\nMang sau khi sap xep:\n";
		XuatMang(a, n);
		break;
	case 5:
		cout << "\n5.Sap cac phan tu sao cho so 0 nam o dau mang, so am o giua va giam dan, so duong o cuoi va tang";
		system("CLS");
		cout << "\nMang truoc khi sap xep:\n";
		XuatMang(a, n);
		so0_AmGiam_DuongTang(a, n);
		cout << "\nMang sau khi sap xep:\n";
		XuatMang(a, n);
		break;
	case 6:
		cout << "\n6.Sap cac so le nam dau mang va tang dan, cac so chan nam cuoi mang va giam dan";
		break;
	case 7:
		cout << "\n7.Sap cac so nguyen to nam dau mang va tang dan, cac so con lai nam o cuoi va giam dan";
		break;
	}
	_getch();
}