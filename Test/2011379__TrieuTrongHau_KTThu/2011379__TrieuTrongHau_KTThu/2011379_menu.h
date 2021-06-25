void xuatmenu()
{
	cout << "\n=======CHON CHUC NANG=======";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Xuat cac so tu 1 den n";
	cout << "\n2. Xuat ra man hinh n so nguyen to dau tien";
	cout << "\n3. Dem so luong cac chu so cua n";
	cout << "\n4. Xac dinh chu so cuoi cung trong n";
	cout << "\n5. Tinh tich cac chu so trong n";
	cout << "\n==========================================================";

}
int ChonMenu(int SoMenu)
{
	int stt;
	for (;;)
	{
		system("cls");
		xuatmenu();
		cout << "\nNhap tuy chon menu tuong ung:";
		cin >> stt;
		if (0 <= stt && stt <= SoMenu)
			break;
	}
	return stt;
}

void XyLyMenu(int menu, int n)
{
	int ketQua;
	system("cls");
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Xuat cac so tu 1 den " << n;
		XuatDaySo(n);
		break;
	case 2:
		cout << "\n2. Xuat ra man hinh n so nguyen to dau tien";
		cout << "\n2. Xuat " << n << " so nguyen to dau tien: ";
		XuatN_SNT(n);
		break;
	case 3:
		cout << "\n3. Dem so luong chu so cua " << n;
		ketQua = demSoLuongChuSo(n);
		cout << "\nSo " << n << " co " << ketQua << " chu so.";
		break;
	case 4:
		cout << "\n4. Xac dinh chu so cuoi cung trong n";
		ketQua = TimChuSoCuoiCung(n);
		cout << "\nChu so cuoi cung trong " << n << " la: " << ketQua;
		break;
	case 5:
		cout << "\n4. Tinh tong cac uoc so nguyen to cua " << n;
		ketQua = TichCacChuSo(n);
		cout << "\nTong cac chu so cua " << n << " la : " << ketQua;
		break;
	}
	_getch();
}