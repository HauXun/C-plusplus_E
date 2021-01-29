void XuatMenu(unsigned int n);
int ChonMenu(int soMenu, int n);
void XuLyMenu(int menu, unsigned int n);



void XuatMenu(unsigned int n)
{
	cout << endl << "============= CHUONG TRINH SO NGUYEN TO =============";
	cout << endl << "0. Thoat chuong trinh";
	cout << endl << "1. Kiem tra so nguyen to";
	cout << endl << "2. Xuat cac so nguyen to tu 1..." << n;
	cout << endl << "3. Dem so luong nguyen to tu 1..." << n;
	cout << endl << "4. Tinh tong cac uoc so cua " << n;
	cout << endl << "5. Phân tích " << n << " thanh tich thua so cac nguyen to";
}
int ChonMenu(int soMenu, int n)
{
	int stt = -1;
	while (stt < 0 || stt > soMenu)
	{
		system("cls");
		XuatMenu(n);
		cout << endl << "Nhap stt Menu tuong ung: ";
		cin >> stt;
	}
	return stt;
}

void XuLyMenu(int menu, unsigned int n)
{
	switch (menu)
	{
	case 0:
		cout << endl << "Thoat chuong trinh";
		break;
	case 1:
		cout << endl << "1. Kiem tra so nguyen to";
		if (KiemTraNguyenTo(n))
			cout << "\n" << n << " la so nguyen to";
		else
			cout << "\n" << n << " khong phai la so nguyen to";
		break;
	case 2:
		cout << endl << "2. Xuat cac so nguyen to tu 1..." << n << endl;
		XuatSoNguyenTo(n);
		break;
	case 3:
		cout << endl << "3. Dem so luong nguyen to tu 1..." << n << endl;
		cout << "\nCo " << DemSoNguyenTo(n) << " so nguyen to trong pham vi [1.." << n << "].";
		break;
	case 4:
		cout << endl << "4. Tinh tong cac uoc so cua " << n << endl;
		cout << "\nTong cac uoc so nguyen to cua " << n << " la : " << TinhTongUocSNT(n);
		break;
	case 5:
		cout << endl << "5. Phân tich " << n << " thanh tich thua so cac nguyen to";
		PhanTichThuaSo(n);
		break;
	}
	_getch();
}