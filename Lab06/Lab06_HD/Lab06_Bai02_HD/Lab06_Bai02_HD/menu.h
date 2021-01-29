void XuatMenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap ma tran chu nhat m x n";
	cout << endl << "2. Xem ma tran chu nhat";
	cout << endl << "3. Tim gia tri lon nhat cua ma tran";
	cout << endl << "4. Tim gia tri lon nhat hang i ";
	cout << endl << "5. Tinh tong cac phan tu hang i ";
	cout << endl << "6. Tim gia tri nho nhat cot j ";
	cout << endl << "7. Tinh tich cac phan tu cot j ";
	cout << endl << "8. Xuat a[i][j] : lon nhat hang i va nho nhat cot j ";
	cout << endl << "==========================================";
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

void XuLyMenu(int menu, int a[SIZE][SIZE], int &m, int &n)
{
	int ketQua, i, j;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << endl << "1. Nhap ma tran chu nhat";
		cout << "\nNhap so hang i: m = ";
		cin >> m;
		cout << "\nNhap so cot j: n = ";
		cin >> n;
		NhapTuDong_MaTran(a, m, n);
		cout << "\nMa tran vua nhap:\n";
		XuatMaTran(a, m, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Xem ma tran chu nhat";
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, m, n);
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Tim gia tri lon nhat cua ma tran";
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, m, n);
		ketQua = TimMax_MaTran(a, m, n);
		cout << "\nMax(a) = " << ketQua;
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Tim gia tri lon nhat hang i ";
		do
		{
			cout << "\nChon hang i (0 <= i <=" << m - 1 << "): i = ";
			cin >> i;
		} while (i < 0 || i > m - 1);
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, m, n);
		ketQua = TimMax_Hang_i(a, i, n);
		cout << "\nMax (Hang " << i << ") = " << ketQua;
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Tinh tong cac phan tu hang i ";
		do
		{
			cout << "\nChon hang i (0 <= i <=" << m - 1 << "): i = ";
			cin >> i;
		} while (i < 0 || i > m - 1);
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, m, n);
		ketQua = TinhTong_Hang_i(a, i, n);
		cout << "\nTong (Hang " << i << ") = " << ketQua;
		break;
	case 6:
		system("CLS");
		cout << endl << "6. Tim gia tri nho nhat cot j ";
		do
		{
			cout << "\nChon cot j (0 <= j <= " << n - 1 << ") : j = ";
			cin >> j;
		} while (j < 0 || j > n - 1);
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, m, n);
		ketQua = TimMin_Cot_j(a, m, j);
		cout << "\nMin (Cot " << j << ") = " << ketQua;
		break;
	case 7:
		system("CLS");
		cout << endl << "7. Tinh tich cac phan tu cot j ";
		do
		{
			cout << "\nChon cot j (0 <= j <= " << n - 1 << ") : j = ";
			cin >> j;
		} while (j < 0 || j > n - 1);
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, m, n);
		ketQua = TinhTich_Cot_j(a, m, j);
		cout << "\nTich (Cot " << j << ") = " << ketQua;
		break;
	case 8:
		system("CLS");
		cout << endl << "8. Xuat a[i][j] : lon nhat hang i va nho nhat cot j ";
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, m, n);
		Max_i_Min_j(a, m, n);
		break;
	}
	_getch();
}