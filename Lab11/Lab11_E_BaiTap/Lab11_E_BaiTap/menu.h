void XuatMenu()
{
	cout << "\n========== BANG CHON CHUC NANG ==========";
	cout << "\n0. Thoat chuong trinh.";
	cout << "\n1. Chuyen du lieu vao mang 1 chieu.";
	cout << "\n2. Chuyen du lieu vao mang cau truc.";
	cout << "\n=========================================";
}

int ChonMenu(int soMenu)
{
	int stt = -1;
	while (stt < 0 || stt > soMenu)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap vao tuy chon chuc nang tuong ung: ";
		cin >> stt;
	} 
	return stt;
}

void XuLyMenu(int menu, int a[MAX], NhanVien ds[MAX], int &n_a, int &n_ds)
{
	char filename[MAX];
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Chuyen du lieu vao mang 1 chieu";
		cout << "\nNhap ten file de mo tep: ";
		cin >> filename;

		DuLieu_Mang(filename, a, n_a);
		cout << "\nDu lieu hien hanh tu tap tin:\n";
		HienThi_Mang(a, n_a);
		break;
	case 2:
		cout << "\n2. Chuyen du lieu vao mang cau truc";
		cout << "\nNhap ten file de mo tep: ";
		cin >> filename;

		DuLieu_NhanVien(filename, ds, n_ds);
		cout << "\nDu lieu hien hanh tu tap tin:\n";
		HienThi_NhanVien(ds, n_ds);
		break;
	}
	_getch();
}