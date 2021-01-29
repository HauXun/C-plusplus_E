
void XuatMenu()
{
	cout << "\n======================HE THONG CHUC NANG======================";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap danh sach thue bao";
	cout << "\n2. Xem danh sach thue bao";
	cout << "\n3. Tim so dien thoai khi biet ten";
	cout << "\n4. Tim thong tin thue bao khi biet so dien thoai";
	cout << "\n5. Xuat cac thue bao co cung dia chi";
	cout << "\n6. Sap xep cac thue bao tang dan theo ma vung";
	cout << "\n==============================================================";
	cout << "\n(Du lieu da duoc khoi tao, nhan 1 neu muon tao lai bo du lieu)";
	cout << "\n==============================================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang [0,...," << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, ThueBao a[MAX], int n)
{
	char ten[8], soDT[12];
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\nThoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << "\n1. Nhap danh sach thue bao\n";
		NhapDS(a, n);
		system("CLS");
		XuatDS(a, n);
		cout << "\nSo luong thue bao trong danh sach, n =  " << n;
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem danh sach thue bao\n";
		XuatDS(a, n);
		break;
	case 3:
		system("CLS");
		cout << "\n3. Tim so dien thoai khi biet ten\n";
		cout << "\nNhap ten can tim : ";
		cin >> ten;
		Tim_SoDT_Ten(a, n, ten);
		break;
	case 4:
		system("CLS");
		cout << "\n4. Tim thong tin thue bao khi biet so dien thoai\n";
		cout << "\nNhap so dien thoai can tim : ";
		cin >> soDT;
		Tim_TT_SoDT(a, n, soDT);
		break;
	case 5:
		system("CLS");
		cout << "\n5. Xuat cac thue bao co cung dia chi\n";
		XuatTB_CungDiaChi(a, n);
		break;
	case 6:
		system("CLS");
		cout << "\n6. Sap xep cac thue bao tang dan theo ma vung\n";
		SapXep_MaVung_Tang(a, n);
		XuatDS(a, n);
		break;
	}
	_getch();
}