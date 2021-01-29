void XuatMenu()
{
	cout << "\n==================== BANG CHON CHUC NANG ====================";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Tao danh sach nhan vien";
	cout << "\n2. Xem danh sach nhan vien";
	cout << "\n3. Xuat danh sach cac nhan vien co nam sinh cho truoc";
	cout << "\n4. Xuat danh sach cac nhan vien co luong thap nhat";
	cout << "\n5. Xoa cac nhan vien co que quan cho truoc ra khoi danh sach";
	cout << "\n=============================================================";
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

void XuLyMenu(int menu, NhanVien a[MAX], int &n)
{
	int ketQua;
	char filename[MAX];
	int nam;
	int min;
	char queQuan[15];
	char kiTu;

	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Tao danh sach nhan vien";
		system("CLS");
		cout << "\nNhap vao ten tap tin de mo file: ";
		cin >> filename;

		ketQua = 0;
		for (int i = 0; filename[i] != NULL; i++)
			if (filename[i] == '.')
			{
				ketQua = 1;
				break;
			}
		if (!ketQua)
			strcat_s(filename, ".txt");

		ketQua = TaoDanhSachNhanVien(a, n, filename);
		if (ketQua == 0)
			cout << "\nMo tap tin khong thanh cong. Vui long kiem tra lai ten tap tin...!";
		else
		{
			cout << "\nMo tap tin thanh cong !";
			cout << "\nSo luong nhan vien trong tap tin la: " << n;
			cout << "\nDanh sach nhan vien hien hanh:\n\n";
			XuatDSNV(a, n);
		}
		break;
	case 2:
		cout << "\n2. Xuat danh sach nhan vien";
		cout << "\nDanh sach nhan vien hien hanh:\n\n";
		XuatDSNV(a, n);
		break;
	case 3:
		cout << "\n3. Xuat danh sach cac nhan vien co nam sinh cho truoc";
		system("CLS");
		cout << "\nDanh sach nhan vien hien hanh:\n\n";
		XuatDSNV(a, n);
		cout << "\n\nNhap vao nam sinh cuan nhan vien cam tim kiem: ";
		cin >> nam;
		LietKeSinhVien_Nam(a, n, nam);
		break;
	case 4:
		cout << "\n4. Xuat danh sach cac nhan vien co luong thap nhat";
		system("CLS");
		cout << "\nDanh sach nhan vien hien hanh:\n\n";
		XuatDSNV(a, n);
		min = LuongThapNhat(a, n);
		cout << "\nMuc luong thap nhat la: " << min;
		XuatNhanVien_LuongThapNhat(a, n);
		cout << "\nBan co muon xoa cac nhan vien co luong thap nhat khong (nhan enter neu muon xoa, nhan'k' neu khong)";
		kiTu = _getch();
		if (kiTu != 'k' && kiTu != 'K')
		{
			XoaNhanVien_LuongThapNhat(a, n);
			cout << "\nDanh sach sau khi xoa cac nhan vien co muc luong thap nhat";
			XuatDSNV(a, n);
		}
		break;
	case 5:
		cout << "\n5. Xoa cac nhan vien co que quan cho truoc ra khoi danh sach";
		system("CLS");
		cout << "\nDanh sach nhan vien hien hanh:\n\n";
		XuatDSNV(a, n);
		cout << "\nNhap que quan nhan vien can xoa: ";
		cin >> queQuan;
		cout << "\nSo nhan vien trong danh sach: n = " << n;
		ketQua = XoaNhanVien_QueQuan1(a, n, queQuan);
		if (ketQua == 0)
			cout << "\nKhong tim thay nhan vien nao co que quan la " << queQuan << " trong danh sach";
		else
		{
			cout << "\nDanh sach sau khi xoa:\n";
			XuatDSNV(a, n);
		}
		break;
	}
	_getch();
}