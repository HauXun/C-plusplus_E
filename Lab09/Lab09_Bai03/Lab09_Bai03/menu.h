void XuatMenu()
{
	cout << "\n======================HE THONG CHUC NANG======================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Nhap ma tran";
	cout << "\n2. Xem ma tran";
	cout << "\n3. Kiem tra ma tran co phai la doi xung";
	cout << "\n4. Kiem tra ma tran co phai la tam giac tren";
	cout << "\n5. Kiem tra ma tran co phai la tam giac duoi";
	cout << "\n6. Kiem tra ma tran co phai la tam giac cheo";
	cout << "\n7. Kiem tra ma tran co phai la tam giac don vi";
	cout << "\n==============================================================";
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

void XuLyMenu(int menu, MaTranVuong a, int &n)
{
	int ketQua;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh\n";
		delete[]a;
		break;
	case 1:
		system("CLS");
		cout << "\n1. Nhap ma tran\n";
		do
		{
			cout << "\nNhap vao cap ma tran: ";
			cin >> n;
		} while (n < 0);

		cout << "\nMa tran ngau nhien :\n";
		NhapMaTranTD(a, n);
		XuatMaTran(a, n);
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem ma tran\n";
		XuatMaTran(a, n);
		break;
	case 3:
		system("CLS");
		cout << "\n3. Kiem tra ma tran co phai la doi xung\n";
		ketQua = MaTranDoiXung(a, n);
		if (ketQua)
			cout << "\nMa tran doi xung";
		else
			cout << "\nMa tran khong doi xung";
		break;
	case 4:
		system("CLS");
		cout << "\n4. Kiem tra ma tran co phai la tam giac tren\n";
		ketQua = MaTranTGT(a, n);
		if (ketQua)
			cout << "\nLa ma tran TGT";
		else
			cout << "\nKhong phai la ma tran TGT";
		break;
	case 5:
		system("CLS");
		cout << "\n5. Kiem tra ma tran co phai la tam giac duoi\n";
		ketQua = MaTranTGD(a, n);
		if (ketQua)
			cout << "\nLa ma tran TGD";
		else
			cout << "\nKhong phai la ma tran TGD";
		break;
	case 6:
		system("CLS");
		cout << "\n6. Kiem tra ma tran co phai la tam giac cheo\n";
		ketQua = MaTranTG_Cheo(a, n);
		if (ketQua)
			cout << "\nLa ma tran TG Cheo";
		else
			cout << "\nKhong phai la ma tran TG Cheo";
		break;
	case 7:
		system("CLS");
		cout << "\n7. Kiem tra ma tran co phai la tam giac don vi\n";
		ketQua = MaTranDonVi(a, n);
		if (ketQua)
			cout << "\nLa ma tran TG don vi";
		else
			cout << "\nKhong phai la ma tran TG don vi";
		break;
	}
	_getch();
}