void XuatMenu()
{
	cout << "\n=====================HE THONG CHUC NANG=====================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Nhap chuoi ky tu";
	cout << "\n2. Xem chuoi ky tu";
	cout << "\n3. Dem so khoang trang";
	cout << "\n4. Tim vi tri xuat hien cua chuoi t trong chuoi s";
	cout << "\n5. Tim vi tri xuat hien dau tien cua ky tu x cho truoc trong chuoi s";
	cout << "\n6. Dao vi tri cua tu dau va tu cuoi trong chuoi s";
	cout << "\n7. Doi ky tu dau tien trong chuoi s sang chu hoa, con lai la chu thuong";
	cout << "\n8. Liet ke tung ky tu va so lan xuat hien cua chung trong chuoi s";
	cout << "\n9. Dem so tu trong chuoi s";
	cout << "\n============================================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang tu [0,...," << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, Chuoi a)
{
	int kq;
	char x;
	Chuoi b;
	b = new char[MAX];
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh\n";
		delete[]a;
		break;
	case 1:
		system("CLS");
		cout << "\n1. Nhap chuoi ky tu\n";
		cout << "\nNhap chuoi : ";
		_flushall();
		gets_s(a, MAX);
		cout << "\nChuoi da nhap : " << a;
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem chuoi ky tu\n";
		cout << "\nChuoi da nhap : " << a;
		break;
	case 3:
		system("CLS");
		cout << "\n3. Dem so khoang trang\n";
		kq = DemKhoangTrang(a);
		cout << "\nChuoi da nhap : " << a << endl;
		cout << "\nTrong chuoi tren co tat ca " << kq << " khoang trang";
		break;
	case 4:
		system("CLS");
		cout << "\n4. Tim vi tri xuat hien cua chuoi t trong chuoi s\n";
		cout << "\nChuoi s = " << a << endl;
		cout << "\nNhap chuoi b = ";
		_flushall();
		gets_s(b, MAX);
		kq = TimViTri(a, b);
		if (kq == -1)
			cout << "\nKhong co chuoi t trong chuoi s";
		else
			cout << "\nChuoi t nam vi tri thu " << kq << " trong chuoi s";
		delete[]b;
		break;
	case 5:
		system("CLS");
		cout << "\n5. Tim vi tri xuat hien dau tien cua ky tu x cho truoc trong chuoi s\n";
		cout << "\nXem lai chuoi : " << a << endl;
		cout << "\nNhap ky tu x = ";
		cin >> x;
		kq = TimViTri_X_DauTien(a, x);
		cout << "\nKy tu '" << x << "' nam vi tri thu " << kq << " trong chuoi s";
		break;
	case 6:
		system("CLS");
		cout << "\n6. Dao vi tri cua tu dau va tu cuoi trong chuoi s\n";
		cout << "\nChuoi ban dau : " << a << endl;
		Dao(a);
		break;
	case 7:
		system("CLS");
		cout << "\n7. Doi ky tu dau tien trong chuoi s sang chu hoa, con lai la chu thuong\n";
		cout << "\nChuoi ban dau : " << a << endl;
		DoiChuHoa(a);
		cout << "\nChuoi sau khi doi : " << a;
		break;
	case 8:
		system("CLS");
		cout << "\n8. Liet ke tung ky tu va so lan xuat hien cua chung trong chuoi s\n";
		cout << "\nXem lai chuoi : " << a << endl;
		LietKeKyTu(a);
		break;
	case 9:
		system("CLS");
		cout << "\n9. Dem so tu trong chuoi s\n";
		kq = DemSoTu(a);
		cout << "\nXem lai chuoi : " << a << endl;
		cout << "\nChuoi tren co tat ca la " << kq << " tu";
		break;
	}
	_getch();
}