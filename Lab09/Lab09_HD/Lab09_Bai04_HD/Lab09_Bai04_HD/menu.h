void XuatMenu()
{
	cout << "\n===========================HE THONG CHUC NANG===========================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Tao danh sach sinh vien";
	cout << "\n2. Xem danh sach sinh vien";
	cout << "\n3. Sap danh sach sinh vien giam dan theo diem";
	cout << "\n4. Xem danh sach sinh vien theo lop";
	cout << "\n5. Xuat danh sach sinh vien theo lop va co diem giam dan";
	cout << "\n6. Thong ke chat luong sinh vien theo lop";
	cout << "\n========================================================================";
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

void XuLyMenu(int menu, SinhVien *a, int &n)
{
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh\n";
		delete[]a;
		break;
	case 1:
		system("CLS");
		cout << "\n1. Tao danh sach sinh vien\n";
		TaoDanhSachSinhVien(a, n);
		system("CLS");
		cout << "\nDANH SACH SINH VIEN : \n";
		Xuat_DSSV(a, n);
		cout << "\nSo sinh vien trong danh sach : n = " << n;
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem danh sach nhan vien\n";
		cout << "\nDANH SACH SINH VIEN : \n";
		Xuat_DSSV(a, n);
		cout << "\nSo sinh vien trong danh sach : n = " << n;
		break;
	case 3:
		system("CLS");
		cout << "\n3. Sap danh sach sinh vien giam dan theo diem\n";
		cout << "\nDanh sach ban dau : \n";
		Xuat_DSSV(a, n);
		Sap_DSSV_GiamDiem(a, n);
		cout << "\nDanh sach sinh vien giam theo diem : \n";
		Xuat_DSSV(a, n);
		break;
	case 4:
		system("CLS");
		cout << "\n4. Xem danh sach sinh vien theo lop\n";
		/*cout << "\nDanh sach ban dau : \n";
		Xuat_DSSV(a, n);
		_getch();
		Xuat_DSSV_Lop(a, n, "CTK39");
		_getch();
		Xuat_DSSV_Lop(a, n, "CTK38");
		_getch();
		Xuat_DSSV_Lop(a, n, "CTK37");
		_getch();
		Xuat_DSSV_Lop(a, n, "CTK36");
		_getch();*/
		XuatSinhVienTheoLop(a, n);
		break;
	case 5:
		system("CLS");
		cout << "\n5. Xuat danh sach sinh vien theo lop va co diem giam dan\n";
		cout << "\nDanh sach ban dau : \n";
		Xuat_DSSV(a, n);
		Xuat_DSSV_Lop_Giam_Diem(a, n, "CTK39");
		_getch();
		Xuat_DSSV_Lop_Giam_Diem(a, n, "CTK38");
		_getch();
		Xuat_DSSV_Lop_Giam_Diem(a, n, "CTK37");
		_getch();
		Xuat_DSSV_Lop_Giam_Diem(a, n, "CTK36");
		break;
	case 6:
		system("CLS");
		cout << "\n6. Thong ke chat luong sinh vien theo lop\n";
		cout << "\nDanh sach ban dau :\n";
		Xuat_DSSV(a, n);
		_getch();
		system("CLS");
		ThongKe_ChatLuong(a, n, "CTK39");
		_getch();
		ThongKe_ChatLuong(a, n, "CTK38");
		_getch();
		ThongKe_ChatLuong(a, n, "CTK37");
		_getch();
		ThongKe_ChatLuong(a, n, "CTK36");
		break;
	}
	_getch();
}