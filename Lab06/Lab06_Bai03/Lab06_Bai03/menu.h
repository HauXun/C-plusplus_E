void XuatMenu()
{
	cout << "\n========== CHON CHUC NANG =============\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap ma tran m n";
	cout << "\n2. Xem ma tran";
	cout << "\n3. Hoan vi hai cot ma tran";
	cout << "\n4. Hoan vi hai dong ma tran";
	cout << "\n5. Hoan vi ma tran";
	cout << "\n=======================================\n";
}

int ChonMenu(int soMenu)
{
	int stt;
	do
	{
		system("cls");
		XuatMenu();
		cout << "\nChon chuc nang : ";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);
	return stt;
}

void XuLyMenu(int menu, int a[SIZE][SIZE], int &m, int &n)
{
	int i, j, h, k;
	system("cls");
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Nhap ma tran m n";
		cout << "\nNhap so dong: ";
		cin >> m;
		cout << "\nNhap so cot: ";
		cin >> n;
		NhapMaTran_TD(a, m, n);
		cout << "\nMa tran vua nhap:\n";
		XuatMaTran(a, m, n);
		break;
	case 2:
		cout << "\n2. Xem ma tran";
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, m, n);
		break;
	case 3:
		cout << "\n3. Hoan vi hai cot ma tran";
		cout << "\nNhap cot j: ";
		cin >> j;
		cout << "\nNhap cot h: ";
		cin >> h;
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, m, n);
		HoanVi_HaiCot(a, m, n, j, h);
		cout << "\nMang sau khi hoan vi hai cot:\n";
		XuatMaTran(a, m, n);
		break;
	case 4:
		cout << "\n4. Hoan vi hai dong ma tran";
		cout << "\nNhap cot i: ";
		cin >> i;
		cout << "\nNhap cot k: ";
		cin >> k;
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, m, n);
		HoanVi_HaiDong(a, m, n, i, k);
		cout << "\nMang sau khi hoan vi hai dong:\n";
		XuatMaTran(a, m, n);
		break;
	case 5:
		cout << "\n5. Hoan vi ma tran";
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, m, n);
		cout << "\nMang sau khi hoan vi:\n";
		MaTran_HoanVi(a, m, n);
		break;
	}
	_getch();
}