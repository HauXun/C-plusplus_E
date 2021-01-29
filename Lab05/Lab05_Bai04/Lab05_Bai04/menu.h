void XuatMenu()
{
	cout << "\n===============BANG CHON CHUC NANG===============";
	cout << "\n0.Thoat chuong trinh";
	cout << "\n1.Nhap mang tu dong";
	cout << "\n2.Xuat mang";
	cout << "\n3.Chen X vao mang a tai viTri cho truoc";
	cout << "\n4.Chen phan tu X vao sao phan tu lon nhat";
	cout << "\n5.Chen phan tu X vao truoc so nguyen to dau tien trong mang";
	cout << "\n6.Chen phan tu X vao sau moi phan tu Y cho truoc";
	cout << "\n7.Thay the gia tri nho nhat bang gia tri X cho truoc";
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

void XuLyMenu(DaySo a, int menu, int &n)
{
	int x, viTri, max;
	switch (menu)
	{
	case 0:
		cout << "\nThoat khoi chuong trinh";
		break;
	case 1:
		cout << "\n1.Nhap mang tu dong";
		NhapMangTuDong(a, n);
		cout << "\nMang sau khi nhap:\n";
		XuatMang(a, n);
		break;
	case 2:
		cout << "\n2.Xuat mang";
		XuatMang(a, n);
		break;
	case 3:
		cout << "\n3.Chen X vao mang a tai viTri cho truoc";
		cout << "\nMang truoc khi chen:\n";
		XuatMang(a, n);
		cout << "\nNhap vao X can chen: ";
		cin >> x;
		cout << "\nNhap vao viTri can chen X: ";
		cin >> viTri;
		ChenViTri(a, n, x, viTri);
		cout << "\nMang sau khi chen " << x << " vao viTri " << viTri << " la:\n";
		XuatMang(a, n);
		break;
	case 4:
		cout << "\n4.Chen phan tu X vao sao phan tu lon nhat";
		cout << "\nMang truoc khi chen:\n";
		XuatMang(a, n);
		cout << "\nNhap X can chen: ";
		cin >> x;
		ChenSauXLonNhat(a, n, x);
		cout << "\nMang sau khi chen:\n";
		XuatMang(a, n);
		break;
	case 5:
		cout << "\n5.Chen phan tu X vao truoc so nguyen to dau tien trong mang";
		cout << "\nMang truoc khi chen:\n";
		XuatMang(a, n);
		cout << "\nNhap X can chen: ";
		cin >> x;
		ChenX_TruocSNT_DauTien(a, n, x);
		cout << "\nMang sau khi chen:\n";
		XuatMang(a, n);
		break;
	case 6:
		cout << "\n6.Chen phan tu X vao sau moi phan tu Y cho truoc";
		cout << "\nMang truoc khi chen:\n";
		XuatMang(a, n);
		cout << "\nNhap vao X can chen: ";
		cin >> x;
		cout << "\nNhap vao Y (Trong mang) can chen X: ";
		cin >> viTri;
		ChenX_SauY_ChoTruoc(a, n, x, viTri);
		cout << "\nMang sau khi chen " << x << " vao viTri " << viTri << " la:\n";
		XuatMang(a, n);
		break;
	case 7:
		cout << "\n7.Thay the gia tri nho nhat bang gia tri X cho truoc";
		cout << "\nMang truoc khi chen:\n";
		XuatMang(a, n);
		cout << "\nNhap X can thay vao min: ";
		cin >> x;
		ThayMin_BangX(a, n, x);
		cout << "\nMang sau khi chen:\n";
		XuatMang(a, n);
		break;
	}
	_getch();
}