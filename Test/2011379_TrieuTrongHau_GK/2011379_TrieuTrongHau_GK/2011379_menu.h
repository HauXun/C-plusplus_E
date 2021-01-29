void XuatMenu()
{
	cout << "\n========== CHON CHUC NANG =============\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap ma tran";
	cout << "\n2. Xem ma tran";
	cout << "\n3. Tinh tong cot J";
	cout << "\n4. Tinh tich hang I";
	cout << "\n5. Xuat aij : Min nhat hang i va Max cot j";
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

void XuLyMenu(int menu, MaTranVuong a, int &n)
{
	int i, j, kq;
	system("cls");
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Nhap ma tran";
		cout << "\nNhap vao cap ma tran vuong: ";
		cin >> n;

		cout << "\n\nTao ngau nhien ma tran vuong:\n";
		NhapMaTran_TD(a, n);
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, n);
		
		break;
	case 2:
		cout << "\n2. Xem ma tran";
		XuatMaTran(a, n);
		break;
	case 3:
		cout << "\n3. Tinh tong cot j";
		do
		{
			cout << "\nChon cot j (0 <= j <=" << n - 1 << ") : j = ";
			cin >> j;
		} while (j < 0 || j > n - 1);
		kq = Tinh_Tong_Cot_J(a, j, n);
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, n);
		cout << "\nToch(cot " << j << ") = " << kq;
		break;
	case 4:
		cout << "\n4. Tinh tich hang i";
		do
		{
			cout << "\nChon hang i (0 <= i <=" << n - 1 << ") : i = ";
			cin >> i;
		} while (i < 0 || i > n - 1);
		kq = Tinh_Tich_Hang_I(a, i, n);
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, n);
		cout << "\nTich(Hang " << i << ") = " << kq;
		break;
	case 5:
		cout << "\n5. Xuat aij : Min nhat hang i va Max cot j";
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, n);
		MinHang_MaxCot(a, n);
		break;
	}
	_getch();
}