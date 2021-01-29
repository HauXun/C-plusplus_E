void XuatMenu()
{
	cout << "\n=================== BANG MENU==================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap chuoi";
	cout << "\n2. Xem chuoi";
	cout << "\n3. Chuyen ki tu trong chuoi thanh ki tu thuong";
	cout << "\n4. Chuyen ki tu trong chuoi thanh ki tu HOA";
	cout << "\n5. Dao nguoc chuoi";
	cout << "\n6. Kiem tra chuoi doi xung";
	cout << "\n===============================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "\nNhap tuy chon menu tuong ung: ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, String a)
{
	int kq;
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
		cout << "\nNhan phim bat ky de tiep tuc.";
		break;
	case 2:
		cout << "\n2. Xem chuoi";
		cout << "\nChuoi a: ";
		XuatChuoi(a);
		cout << "\nNhan phim bat ky de tiep tuc.";
		break;
	case 3:
		cout << "\n3. Chuyen ki tu trong chuoi thanh ki tu thuong";
		cout << "\nChuoi hien hanh:\n";
		XuatChuoi(a);
		DoiKiTu_Thuong(a);
		cout << "\nChuoi sau khi doi:\n";
		XuatChuoi(a);
		break;
	case 4:
		cout << "\n4. Chuyen ki tu trong chuoi thanh ki tu HOA";
		cout << "\nChuoi hien hanh:\n";
		XuatChuoi(a);
		DoiKiTu_HOA(a);
		cout << "\nChuoi sau khi doi:\n";
		XuatChuoi(a);
		break;
	case 5:
		cout << "\n5. Dao nguoc chuoi";
		cout << "\nChuoi hien hanh:\n";
		XuatChuoi(a);
		DaoNguocChuoi(a);
		cout << "\nChuoi sau khi dao nguoc:\n";
		XuatChuoi(a);
		break;
	case 6:
		cout << "\n6. Kiem tra chuoi doi xung\n";
		kq = ChuoiDoiXung(a);
		if (kq == 1)
			cout << " - La chuoi doi xung.";
		else
			cout << " - Khong phai la chuoi doi xung.";
		break;
	}
		_getch();
}