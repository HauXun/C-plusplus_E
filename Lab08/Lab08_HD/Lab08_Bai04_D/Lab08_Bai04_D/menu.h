void XuatMenu()
{
	cout << "\n============== He thong chuc nang =============\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap da thuc";
	cout << "\n2. Xuat da thuc";
	cout << "\n3. Cong 2 da thuc";
	cout << "\n4. Tru 2 da thuc";
	cout << "\n5. Nhan 2 da thuc";
	cout << "\n6. Tinh gia tri cua da thuc tai X";
	cout << "\n===============================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "\n\nNhap 1 so trong khoang [0.." << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, DaThuc &a, int m, DaThuc &b, int n)
{
	int k;
	double x, kq1, kq2;
	DaThuc c;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << "\n1. Nhap da thuc\n";
		cout << "\nNhap da thuc dau tien : ";
		NhapDaThuc(a, m);
		cout << "\nNhap da thuc thu hai : ";
		NhapDaThuc(b, n);
		cout << "\nDa thuc dau tien da nhap: ";
		XuatDaThuc(a, m);
		cout << "\nDa thuc thu hai da nhap : ";
		XuatDaThuc(b, n);
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xuat da thuc\n";
		cout << "\nDa thuc dau tien : ";
		XuatDaThuc(a, m);
		cout << "\nDa thuc thu hai : ";
		XuatDaThuc(b, n);
		break;
	case 3:
		system("CLS");
		cout << "\n3. Cong 2 da thuc\n";
		Tong2DaThuc(a, m, b, n, c, k);
		cout << "\nDa thuc dau tien : ";
		XuatDaThuc(a, m);
		cout << "\nDa thuc thu hai : ";
		XuatDaThuc(b, n);
		cout << "\nKet qua : ";
		XuatDaThuc(c, k);
		break;
	case 4:
		system("CLS");
		cout << "\n4. Tru 2 da thuc\n";
		Hieu2DaThuc(a, m, b, n, c, k);
		cout << "\nDa thuc dau tien : ";
		XuatDaThuc(a, m);
		cout << "\nDa thuc thu hai : ";
		XuatDaThuc(b, n);
		cout << "\nKet qua : ";
		XuatDaThuc(c, k);
		break;
	case 5:
		system("CLS");
		cout << "\n5. Nhan 2 da thuc\n";
		NhanDaThuc(a, m, b, n, c, k);
		cout << "\nDa thuc dau tien : ";
		XuatDaThuc(a, m);
		cout << "\nDa thuc thu hai : ";
		XuatDaThuc(b, n);
		cout << "\nKet qua : ";
		XuatDaThuc(c, k);
		break;
	case 6:
		system("CLS");
		cout << "\n6. Tinh gia tri cua da thuc tai x\n";
		cout << "\nNhap gia tri x = ";
		cin >> x;
		kq1 = A_x(a, m, x);
		kq2 = A_x(b, n, x);
		cout << "\nDa thuc dau tien : ";
		XuatDaThuc(a, m);
		cout << "\nGia tri cua da thuc dau tien tai x = " << x << " la : " << kq1;
		cout << "\nDa thuc thu hai : ";
		XuatDaThuc(b, n);
		cout << "\nGia tri cua da thuc thu hai tai x = " << x << " la : " << kq2;
		break;
	}
	_getch();
}