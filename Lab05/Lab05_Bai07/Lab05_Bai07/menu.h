void XuatMenu()
{
	cout << "\n=============== CHON CHUC NANG =================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap mang tu dong";
	cout << "\n2. Xuat mang";
	cout << "\n3. Kiem tra mang co chua phan tu 0 khong";
	cout << "\n4. Kiem tra mang a co chua 3 phan tu nam lien tiep co gia tri lien tiep nhau hay khong";
	cout << "\n5. Kiem tra mang co chua ca phan tu 0 lan 1 khong";
	cout << "\n6. Kiem tra mang co chua phan tu co gia tri bang TBC cua cac phan tu khong";
	cout << "\n7. Kiem tra mang a co chua gia tri am khong";
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
		cout << "\nMang vua nhap:\n";
		XuatMang(a, n);
		break;
	case 2:
		cout << "\n2. Xuat mang\n";
		XuatMang(a, n);
		break;
	case 3:
		cout << "\n3. Kiem tra mang co chua phan tu 0 khong";
		ketQua = KT_Chua0(a, n);
		if (ketQua == 0)
			cout << "\nMang khong chua phan tu 0";
		else
			cout << "\nMang chua phan tu 0";
		break;
	case 4:
		cout << "\n4. Kiem tra mang a co chua 3 phan tu nam lien tiep co gia tri lien tiep nhau hay khong";
		break;
	case 5:
		cout << "\n5. Kiem tra mang co chua ca phan tu 0 lan 1 khong";
		ketQua = KT_Chua_0_Va_1(a, n);
		if (ketQua == 0)
			cout << "\nMang khong chua phan tu 0 va 1";
		else
			cout << "\nMang chua phan tu 0 va 1";
		break;
	case 6:
		cout << "\n6. Kiem tra mang co chua phan tu co gia tri bang TBC cua cac phan tu khong";
		ketQua = KTPT_BangTBT_CacPT(a, n);
		if (ketQua == 1)
			cout << "\nMang a chua phan tu co gia tri bang TBC cua mang";
		else
			cout << "\nMang a khong chua phan tu co gia tri bang TBC cua mang";
		break;
	case 7:
		cout << "\n7. Kiem tra mang a co chua gia tri am khong";
		ketQua = KT_Chua_GiaTriAm(a, n);
		if (ketQua == 1)
			cout << "\nMang a chua phan tu co gia tri am";
		else
			cout << "\nMang a khong chua phan tu co gia tri am";
	}
	_getch();
}