void XuatMenu()
{
	cout << "\n===========================HE THONG CHUC NANG===========================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Nhap chuoi";
	cout << "\n2. Xem chuoi";
	cout << "\n3. Tinh chieu dai chuoi";
	cout << "\n4. Chen ky tu x vao chuoi tai vi tri cho truoc";
	cout << "\n5. Xoa ky tu tai vi tri cho truoc";
	cout << "\n6. Cat ky tu cuoi chen vao vi tri dau";
	cout << "\n7. Xoa tat ca cac ky tu x";
	cout << "\n========================================================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nChon 1 so trong khoang tu [0,...," << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, ChuoiDong a)
{
	int kq, vt;
	char x;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh\n";
		delete[]a;
		break;
	case 1:
		system("CLS");
		cout << "\n1. Nhap chuoi\n";
		cout << "\nNhap vao chuoi : ";
		_flushall();
		gets_s(a, MAX);
		cout << "\nChuoi da nhap : " << a;
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem chuoi\n";
		cout << "\nChuoi da nhap : " << a;
		break;
	case 3:
		system("CLS");
		cout << "\n3. Tinh chieu dai chuoi\n";
		cout << "\nXem lai chuoi : " << a << endl;
		kq = TinhChieuDaiChuoi(a);
		cout << "\nChieu dai cua chuoi tren la : " << kq;
		break;
	case 4:
		system("CLS");
		cout << "\n4. Chen ky tu x vao chuoi tai vi tri cho truoc\n";
		cout << "\nNhap ky tu can chen : ";
		cin >> x;
		cout << "\nNhap vi tri can chen : ";
		cin >> vt;
		kq = ChenKT_VT(a, x, vt);
		if (kq != 0)
			cout << "\nChuoi sau khi chen : " << a;
		else cout << "\nVi tri can chen khong hop le";
		break;
	case 5:
		system("CLS");
		cout << "\n5. Xoa ky tu tai vi tri cho truoc\n";
		cout << "\nNhap vi tri can xoa : ";
		cin >> vt;
		kq = XoaKT_VT(a, vt);
		if (kq != 0)
			cout << "\nChuoi sau khi xoa : " << a;
		else cout << "\nVi tri can xoa khong hop le";
		break;
	case 6:
		system("CLS");
		cout << "\n6. Cat ky tu cuoi chen vao vi tri dau\n";
		cout << "\nChuoi ban dau : " << a;
		CatCuoiChenDau(a);
		cout << "\nChuoi sau : " << a;
		break;
	case 7:
		system("CLS");
		cout << "\n7. Xoa tat ca cac ky tu x\n";
		cout << "\nNhap ky tu x can xoa : ";
		cin >> x;
		cout << "\nChuoi ban dau : " << a;
		Xoa_x(a, x);
		cout << "\nChuoi sau khi xoa ky tu '" << x << "' : " << a;
		break;
	}
	_getch();
}