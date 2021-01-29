void XuatMenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap ma tran vuong";
	cout << endl << "2. Xem ma tran vuong";
	cout << endl << "3. Tinh tong cac phan tu cua ma tran";
	cout << endl << "4. Xuat cac phan tu thuoc duong cheo chinh";
	cout << endl << "5. Xuat cac phan tu thuoc duong cheo phu";
	cout << endl << "6. Tinh tong cac phan tu nam phia tren duong cheo chinh";
	cout << endl << "7. Tinh tich cac phan tu nam phia duoi duong cheo phu ";
	cout << endl << "8.Xuat cac duong cheo // duong cheo chinh ";
	cout << endl << "==========================================";
}

int ChonMenu(int soMenu)
{
	int stt = -1;
	while (stt < 0 || stt > soMenu)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap vao tuy chon menu tuong ung: ";
		cin >> stt;
	}
	return stt;
}

void XuLyMenu(int menu, MaTranVuong a, int &n)
{
	int ketQua;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << endl << "1. Nhap ma tran vuong";
		cout << "\nNhap cap ma tran vuong : n = ";
		cin >> n;
		NhapMaTran(a, n);
		cout << "\nMa tran vuong vua nhap:\n";
		XuatMaTran(a, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Xem ma tran vuong";
		cout << "\nMa tran vuong hien hanh:\n";
		XuatMaTran(a, n);
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Tinh tong cac phan tu cua ma tran";
		cout << "\nMa tran hien hanh :\n";
		XuatMaTran(a, n);
		ketQua = TinhTong_MaTran(a, n);
		cout << "\nTong cac phan tu cua ma tran : sum = " << ketQua;
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Xuat cac phan tu thuoc duong cheo chinh";
		cout << "\nMa tran hien hanh :\n";
		XuatMaTran(a, n);
		cout << "\nCac phan tu thuoc duong cheo chinh cua a:\n";
		XuatDuongCheoChinh(a, n);
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Xuat cac phan tu thuoc duong cheo phu";
		cout << "\nMa tran hien hanh :\n";
		XuatMaTran(a, n);
		cout << "\nCac phan tu thuoc duong cheo chinh cua a:\n";
		XuatDuongCheoPhu(a, n);
		break;
	case 6:
		system("CLS");
		cout << endl << "6. Tinh tong cac phan tu nam phia tren duong cheo chinh";
		cout << "\nMa tran hien hanh :\n";
		XuatMaTran(a, n);
		ketQua = TinhTong_Tren_CheoChinh(a, n);
		cout << "\nTong cac phan tu phia tren duong cheo chinh: ketQua = " << ketQua;
		break;
	case 7:
		system("CLS");
		cout << endl << "7. Tinh tich cac phan tu nam phia duoi duong cheo phu ";
		cout << "\nMa tran hien hanh :\n";
		XuatMaTran(a, n);
		ketQua = TinhTich_duoi_CheoPhu(a, n);
		cout << "\nTich cac phan tu nam phia duoi duong cheo phu: ketQua = " << ketQua;
		break;
	case 8:
		system("CLS");
		cout << endl << "8.Xuat cac duong cheo // duong cheo chinh ";
		cout << "\nMa tran hien hanh :\n";
		XuatMaTran(a, n);
		Xuat_DuongCheo_SS_DCChinh(a, n);
		break;
	}
	_getch();
}