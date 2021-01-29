void XuatMenu();
int ChonMenu(int n, int soMenu);
void XuLyMenu(int menu, DaySo a, int &n);


void XuatMenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap tu dong day a";
	cout << endl << "2. Xem du lieu day a";
	cout << endl << "3. Chen x vao dau day";
	cout << endl << "4. Xoa phan tu dau day";
	cout << endl << "5. Cat phan tu dau day roi chen vao cuoi day";
	cout << endl << "6. Thay the cac gia tri x trong a bang gia tri y";
	cout << endl << "7. Sap day tang dan";
	cout << endl << "8. Sap day theo yeu cau :Duong Tang - Am Giam - Khong";
	cout << endl << "==========================================";
}

int ChonMenu(int soMenu)
{
	int stt = -1;
	while (stt < 0 || stt > soMenu)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap tuy chon Menu tuong ung:";
		cin >> stt;
	}
	return stt;
}


// Input : menu = Số thứ tự menu do người chọn,
//Dãy số a
// số nguyên dương n
// Output: Không có.
void XuLyMenu(int menu, DaySo a, int &n)
{
	int x , y;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh.\n";
		break;
	case 1:
		system("CLS");
		cout << endl << "1. Nhap tu dong day a";
		NhapTuDong(a, n);
		system("CLS");
		cout << "\nDay so moi nhap:\n";
		XuatMang(a, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Xem du lieu day a";
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Chen x vao dau day";
		cout << "\nNhap gia tri x can chen: x = ";
		cin >> x;
		cout << "\nKich thuoc mang hien hanh : n = " << n;
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);
		ChenDauDay(a, n, x);
		cout << "\nKich thuoc mang ketQua : n = " << n;
		cout << "\nDay so ket qua sau khi chen " << x << " vao dau day :\n";
		XuatMang(a, n);
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Xoa phan tu dau day";
		cout << "\nKich thuoc mang hien hanh: n =" << n;
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);
		XoaDauDay(a, n);
		cout << "\n\nKich thuoc mang ket qua : n = " << n;
		cout << "\nDay so ket qua sau khi xoa gia tri dau:\n";
		XuatMang(a, n);
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Cat phan tu dau day roi chen vao cuoi day";
		cout << "\nKich thuoc mang hien hanh: n = " << n;
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);
		CatDau_ChenCuoi(a, n);
		cout << "\n\nKich thuoc mang ket qua : n = " << n;
		cout << "\nDay so sau khi cat gia tri dau va chen vao gia tri cuoi day:\n";
		XuatMang(a, n);
		break;
	case 6:
		system("CLS");
		cout << endl << "6. Thay the cac gia tri x trong a bang gia tri y";
		cout << "\nNhap gia tri x can thay the : ";
		cin >> x;
		cout << "\nNhap gia tri thay the y cho x : ";
		cin >> y;
		cout << "\nKich thuoc mang hien hanh : n = " << n;
		cout << "\nDay so hien hanh;\n";
		XuatMang(a, n);
		ThayX_BangY(a, n, x, y);
		cout << "\nKich thuoc mang ket qua : n = " << n;
		cout << "\nDay so ket qua sau khi thay " << x << " bang " << y << " la: ";
		XuatMang(a, n);
		break;
	case 7:
		system("CLS");
		cout << endl << "7. Sap day tang dan";
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);
		SapXepTang(a, n);
		cout << "\nDay so sau khi sap tang:\n";
		XuatMang(a, n);
		break;
	case 8:
		system("CLS");
		cout << endl << "8. Sap day theo yeu cau :Duong Tang - Am Giam - Khong";
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);
		SapTheoYeuCau(a, n);
		cout << "\nDay so sau khi sap theo yeu cau:\n";
		XuatMang(a, n);
		break;
	}
	_getch();
}