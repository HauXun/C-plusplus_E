void XuatMenu()
{
	cout << "\n===================== HE THONG CHUC NANG =====================";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap chuoi";
	cout << "\n2. Xem chuoi";
	cout << "\n3. Xem X trong chuoi";
	cout << "\n4. Xuat cac gia tri ki tu phan biet cua chuoi va so lan xuat hien tuong ung";
	cout << "\n5. Tim vi tri X xuat hien dau tien trong chuoi";
	cout << "\n6. Tim vi tri xuat hien cua chuoi T trong chuoi S";
	cout << "\n7. Dem so tu trong chuoi S";
	cout << "\n8. Dao vi tri tu dau va tu cuoi trong chuoi S";
	cout << "\n==============================================================";

}

int ChonMenu(int soMenu)
{
	int stt;

	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "\nChon chuc nang : ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}

	return stt;
}

void XuLyMenu(int menu, String a, String b)
{
	int ketQua;
	char x;

	system("cls");
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Nhap chuoi";

		NhapChuoi(a);
		cout << "\nChuoi vua nhap: ";
		XuatChuoi(a);

		NhapChuoi(b);
		cout << "\nChuoi vua nhap: ";
		XuatChuoi(b);
		break;
	case 2:
		cout << "\n2. Xem chuoi: ";
		cout << "\nChuoi a: ";
		XuatChuoi(a);
		cout << "\nChuoi b: ";
		XuatChuoi(b);
		break;
	case 3:
		cout << "\n3. Xem X trong chuoi";
		cout << "\nChuoi hien hanh:\n";
		XuatChuoi(a);
		cout << "\nNhap X: ";
		cin >> x;
		ketQua = DemX(a, x);
		cout << "\nSo lan X xuat hien trong chuoi la: " << ketQua;
		break;
	case 4:
		cout << "\n4. Xuat cac gia tri ki tu phan biet cua chuoi va so lan xuat hien tuong ung";

		break;
	case 5:
		cout << "\n5. Tim vi tri X xuat hien dau tien trong chuoi";
		cout << "\nChuoi hien hanh:\n";
		XuatChuoi(a);
		cout << "\nNhap X: ";
		cin >> x;
		ketQua = ViTriX_DauTien(a, x);
		cout << "\nVi tri X xuat hien trong chuoi la: " << ketQua;
		break;
	case 6:
		cout << "\n6. Tim vi tri xuat hien cua chuoi T trong chuoi S";
		ketQua = TimViTri(a, b);
		cout << "\nVi tri xuat hien cua chuoi T trong chuoi S la: " << ketQua;
		break;
	case 7:
		cout << "\n7. Dem so tu trong chuoi S";
		cout << "\nChuoi hien hanh:\n";
		XuatChuoi(a);
		ketQua = DemSoTu(a);
		cout << "\nSo tu trong chuoi la: " << ketQua;
		break;
	case 8:
		cout << "\n8. Dao vi tri tu dau va tu cuoi trong chuoi S";
		cout << "\nChuoi hien hanh:\n";
		XuatChuoi(a);
		cout << "\nChuoi sau khi dao :\n";
		Dao(a);
		break;
	}
	_getch();
}