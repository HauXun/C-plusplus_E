//void XuatMenu()
//{
//	cout << endl << "\n============== CHON CHUC NANG =============";
//	cout << endl << "\n0. Thoat khoi chuong trinh";
//	cout << endl << "\n1. Nhap tu dong ma tran A";
//	cout << endl << "\n2. Nhap tu dong ma tran B";
//	cout << endl << "\n3. Xuat ma tran A";
//	cout << endl << "\n4. Xuat ma tran B";
//	cout << endl << "\n5. Tinh tong hai ma tran A, B";
//	cout << endl << "\n6. Tinh hieu hai ma tran A, B";
//	cout << endl << "\n7. Tinh tich hai ma tran A, B";
//	cout << endl << "\n==========================================";
//}
//
//int ChonMenu(int soMenu)
//{
//	int stt = -1;
//	while (stt < 0 || stt >= soMenu)
//	{
//		XuatMenu();
//		cout << "\nNhap vao tuy chon menu tuong ung: ";
//		cin >> stt;
//	}
//	return stt;
//}
//
//void XuLyMenu(int menu, MaTranVuong a, MaTranVuong b, MaTranVuong c, int &n)
//{
//	int ketQua;
//	switch (menu)
//	{
//	case 0:
//		system("CLS");
//		cout << endl << "\n0. Thoat khoi chuong trinh\n";
//		break;
//	case 1:
//		system("CLS");
//		cout << endl << "\n1. Nhap tu dong ma tran A";
//		NhapMaTran_TuDong(a, n);
//		cout << "\nMa tran vua nhap:\n";
//		XuatMaTran(a, n);
//		break;
//	case 2:
//		system("CLS");
//		cout << endl << "\n2. Nhap tu dong ma tran B";
//		NhapMaTran_TuDong(b, n);
//		cout << "\nMa tran vua nhap:\n";
//		XuatMaTran(b, n);
//		break;
//	case 3:
//		system("CLS");
//		cout << endl << "\n3. Xuat ma tran A";
//		cout << "\nMa tran A hien hanh:\n";
//		break;
//	case 4:
//		system("CLS");
//		cout << endl << "\n3. Xuat ma tran B";
//		cout << "\nMa tran B hien hanh:\n";
//		break;
//	case 5:
//		system("CLS");
//		cout << endl << "\n5. Tinh tong hai ma tran A, B";
//		ketQua = TinhTong_2_MaTran(a, b, c, n);
//		cout << "\n5. Tong hai ma tran A, B = " << ketQua;
//		break;
//	case 6:
//		system("CLS");
//		cout << endl << "\n6. Tinh hieu hai ma tran A, B";
//		ketQua = TinhHieu_2_MaTran(a, b, c, n);
//		cout << "\n5. Hieu hai ma tran A, B = " << ketQua;
//		break;
//	case 7:
//		system("CLS");
//		cout << endl << "\n7. Tinh tich hai ma tran A, B";
//		ketQua = TinhTich_2_MaTran(a, b, c, n);
//		cout << "\n5. Tich hai ma tran A, B = " << ketQua;
//		break;
//	}
//	_getch();
//}