void XuatMenu()
{
	cout << "\n=================== Bang Menu ===================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. gets_s : Nhap chuoi";
	cout << "\n2. Xem chuoi";
	cout << "\n3. strlen_Tinh chieu dai chuoi";
	cout << "\n4. strcat_s_Noi chuoi sau vao sau chuoi truoc";
	cout << "\n5. strcpy_s_Chep chuoi sau vao chuoi truoc";
	cout << "\n6. _strcmpi_So sanh chuoi _ khong phan biet KT thuong, HOA";
	cout << "\n7. strcmp_So sanh chuoi _ phan biet KT thuong, HOA";
	cout << "\n8. Noi chuoi sau vao sau chuoi truoc";
	cout << "\n9. Chep chuoi sau qua chuoi truoc";
	cout << "\n10. So sanh chuoi _ khong phan biet KT thuong, HOA";
	cout << "\n11. So sanh chuoi _ phan biet KT thuong, HOA";
	cout << "\n=================================================";
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

void XuLyMenu(int menu, String a, String b)
{
	int ketQua;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << "\n1. gets_s_Nhap chuoi a: \n";
		gets_s_NhapChuoi(a);
		cout << "\nChuoi a vua nhap: \n";
		XuatChuoi(a);
		gets_s_NhapChuoi(b);
		cout << "\nChuoi b vua nhap: \n";
		XuatChuoi(b);
		cout << "\nNhan phim bat ky de tiep tuc:";
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem chuoi";
		cout << "\nChuoi a:\n";
		XuatChuoi(a);
		cout << "\nChuoi b:\n";
		XuatChuoi(b);
		cout << "\nNhan phim bat ky de tiep tuc:";
		break;
	case 3:
		system("CLS");
		cout << "\n3. strlen_Tinh chieu dai chuoi";
		cout << "\nChuoi a:\n";
		XuatChuoi(a);
		ketQua = strlen_TinhChieuDaiChuoi(a);
		cout << "\nChieu dai chuoi a: ChieuDai = " << ketQua;
		cout << "\nChuoi b:\n";
		XuatChuoi(b);
		ketQua = strlen_TinhChieuDaiChuoi(b);
		cout << "\nChieu dai chuoi a: ChieuDai = " << ketQua;
		cout << "\nNhan mot phim bat ki de tiep tuc";
		break;
	case 4:
		system("CLS");
		cout << "\n4. strcat_s_Noi chuoi sau vao sau chuoi truoc";
		cout << "\nChuoi truoc : a = ";
		XuatChuoi(a);
		cout << "\nChuoi sau : b = ";
		XuatChuoi(b);
		strcat_s_Noi_ChuoiSau_VaoSau_ChuoiTruoc(a, b);
		cout << "\nChuoi truoc sau khi noi : a = ";
		XuatChuoi(a);
		break;
	case 5:
		system("CLS");
		cout << "\n5. strcpy_s_Chep chuoi sau qua chuoi truoc";
		cout << "\nChuoi sau : b = ";
		XuatChuoi(b);
		strcpy_s_Chep_ChuoiSau_Qua_ChuoiTruoc(a, b);
		cout << "\nChuoi truoc a,do b chep qua : a = ";
		XuatChuoi(a);
		break;
	case 6:
		system("CLS");
		cout << "\n6. _strcmpi _ So sanh chuoi _khong phan biet KT thuong, HOA";
		cout << "\nChuoi a = ";
		XuatChuoi(a);
		cout << "\nChuoi b = ";
		XuatChuoi(b);
		ketQua = _strcmpi_SoSanhChuoi_KPB(a, b);
		if (ketQua > 0)
			cout << "\nChuoi a > Chuoi b";
		else if (ketQua < 0)
			cout << "\nChuoi a < Chuoi b";
		else
			cout << "\nChuoi a = Chuoi b";
		break;
	case 7:
		system("CLS");
		cout << "\n7. strcmp _ So sanh chuoi _ phan biet KT thuong, HOA";
		cout << "\nChuoi a = ";
		XuatChuoi(a);
		cout << "\nChuoi b = ";
		XuatChuoi(b);
		ketQua = strcmp_SoSanhChuoi_PB(a, b);
		if (ketQua > 0)
			cout << "\nChuoi a > Chuoi b";
		else if (ketQua < 0)
			cout << "\nChuoi a < Chuoi b";
		else
			cout << "\nChuoi a = Chuoi b";
		break;
	case 8:
		system("CLS");
		cout << "\n8.Noi chuoi sau vao sau chuoi truoc";
		cout << "\nChuoi a = ";
		XuatChuoi(a);
		cout << "\nChuoi b = ";
		XuatChuoi(b);
		Noi_ChuoiSau_VaoSau_ChuoiTruoc(a, b);
		cout << "\nChuoi truoc sau khi noi: a = ";
		XuatChuoi(a);
		break;
	case 9:
		system("CLS");
		cout << "\n9. Chep chuoi sau qua chuoi truoc";
		cout << "\nChuoi sau : b = ";
		XuatChuoi(b);
		Chep_ChuoiSau_Qua_ChuoiTruoc(a, b);
		cout << "\nChuoi truoc a,do b chep qua : a = ";
		XuatChuoi(a);
		break;
	case 10:
		system("CLS");
		cout << "\n10. So sanh chuoi _khong phan biet KT thuong, HOA";
		cout << "\nChuoi a = ";
		XuatChuoi(a);
		cout << "\nChuoi b = ";
		XuatChuoi(b);
		ketQua = SoSanhChuoi_KPB(a, b);
		if (ketQua == 1)
			cout << "\nChuoi a > Chuoi b";
		else if (ketQua == -1)
			cout << "\nChuoi a < Chuoi b";
		else
			cout << "\nChuoi a = Chuoi b";
		break;
	case 11:
		system("CLS");
		cout << "\n7. So sanh chuoi _ phan biet KT thuong, HOA";
		cout << "\nChuoi a = ";
		XuatChuoi(a);
		cout << "\nChuoi b = ";
		XuatChuoi(b);
		ketQua = SoSanhChuoi_PB(a, b);
		if (ketQua == 1)
			cout << "\nChuoi a > Chuoi b";
		else if (ketQua == -1)
			cout << "\nChuoi a < Chuoi b";
		else
			cout << "\nChuoi a = Chuoi b";
		break;
	}
	_getch();
}