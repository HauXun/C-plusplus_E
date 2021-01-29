void XuatMenu()
{
	cout << "\n===================== HE THONG CHUC NANG =====================";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap chuoi";
	cout << "\n2. Xem chuoi";
	cout << "\n3. Tinh chieu dai chuoi";
	cout << "\n4. Chen ky tu x vao dau chuoi";
	cout << "\n5. Chen ky tu x vao cuoi chuoi";
	cout << "\n6. Chen ky tu x vao chuoi tai vi tri cho truoc";
	cout << "\n7. Xoa ky tu dau chuoi";
	cout << "\n8. Xoa ky tu cuoi chuoi";
	cout << "\n9. Xoa ky tu tai vi tri cho truoc";
	cout << "\n10. Cat ky tu dau chuoi roi chen vao vi tri cuoi chuoi";
	cout << "\n11. Cat ky tu cuoi chuoi roi chen vao vi tri dau chuoi";
	cout << "\n12. Xoa tat ca ky tu x cho truoc khoi chuoi";
	cout << "\n13. Thay the tat ca ky tu x trong chuoi thanh ky tu y";
	cout << "\n=============================================================\n\n";
}

int ChonMenu(int soMenu)
{
	int stt;

	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "\nChon chuc nang : ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}

	return stt;
}

void XuLyMenu(int menu, String a)
{

	int kq, vt;
	char x, y;

	system("cls");
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Nhap chuoi";
		NhapChuoi(a);
		cout << "\nChuoi vua nhap: ";
		XuatChuoi(a);
		break;
	case 2:
		cout << "\n2. Xem chuoi: ";
		XuatChuoi(a);
		break;
	case 3:
		cout << "\n3.  Tinh chieu dai chuoi";
		kq = TinhChieuDaiChuoi(a);
		cout << "\nChuoi vua nhap: ";
		XuatChuoi(a);
		cout << "\nDo dai chuoi vua nhap la: " << kq << endl;
		break;
	case 4:
		cout << "\n4. Chen ky tu x vao dau chuoi";
		cout << "\nNhap vao 1 ky tu de chen: ";
		cin >> x;
		cout << "\nChuoi ban dau: ";
		XuatChuoi(a);
		ChenDauChuoi(a, x);
		cout << "\nChuoi sau khi chen x vao dau: ";
		XuatChuoi(a);
		break;
	case 5:
		cout << "\n5. Chen ky tu x vao cuoi chuoi";
		cout << "\nNhap vao 1 ky tu de chen: ";
		cin >> x;
		cout << "\nChuoi ban dau: ";
		XuatChuoi(a);
		ChenCuoiChuoi(a, x);
		cout << "\nChuoi sau khi chen x vao cuoi: ";
		XuatChuoi(a);
		break;
	case 6:
		cout << "\n6. Chen ky tu x vao chuoi tai vi tri cho truoc";
		cout << "\nChuoi ban dau: ";
		XuatChuoi(a);
		cout << "\nNhap vao 1 ky tu de chen: ";
		cin >> x;
		do
		{
			cout << "\nNhap vao vi tri can chen: ";
			cin >> vt;
		} while (vt < 0 || vt > TinhChieuDaiChuoi(a));

		ChenKT_VT(a, x, vt);
		cout << "\nChuoi sau khi chen: ";
		XuatChuoi(a);
		break;
	case 7:
		cout << "\n7. Xoa ky tu dau chuoi";
		cout << "\nChuoi ban dau: ";
		XuatChuoi(a);
		XoaDauChuoi(a);
		cout << "\nChuoi sau khi xoa: ";
		XuatChuoi(a);
		break;
	case 8:
		cout << "\n8. Xoa ky tu cuoi chuoi";
		cout << "\nChuoi ban dau: ";
		XuatChuoi(a);
		XoaCuoiChuoi(a);
		cout << "\nChuoi sau khi xoa: ";
		XuatChuoi(a);
		break;
	case 9:
		cout << "\n9. Xoa ky tu tai vi tri cho truoc";
		cout << "\nChuoi ban dau: ";
		XuatChuoi(a);
		do
		{
			cout << "\nNhap vao vi tri can xoa: ";
			cin >> vt;
		} while (vt < 0 || vt >= TinhChieuDaiChuoi(a));
		XoaKT_VT(a, vt);
		cout << "\nChuoi sau khi xoa: ";
		XuatChuoi(a);
		break;

	case 10:
		cout << "\n10. Cat ky tu dau chuoi roi chen vao vi tri cuoi chuoi";
		cout << "\nChuoi ban dau: ";
		XuatChuoi(a);
		CatDauChenCuoi(a);
		cout << "\nChuoi sau khi chen: ";
		XuatChuoi(a);
		break;
	case 11:
		cout << "\n11. Cat ky tu cuoi chuoi roi chen vao vi tri dau chuoi";
		cout << "\nChuoi ban dau: ";
		XuatChuoi(a);
		CatCuoiChenDau(a);
		cout << "\nChuoi sau khi chen: ";
		XuatChuoi(a);
		break;
	case 12:
		cout << "\n12. Xoa tat ca ky tu x cho truoc khoi chuoi";
		cout << "\nChuoi ban dau: ";
		XuatChuoi(a);
		cout << "\nNhap vao ky tu bat ky: ";
		cin >> x;
		Xoa_X_TrongChuoi(a, x);
		cout << "\nChuoi sau khi xoa: ";
		XuatChuoi(a);
		break;
	case 13:
		cout << "\n13. Thay the tat ca ky tu x trong chuoi thanh ky tu y";
		cout << "\nChuoi ban dau: ";
		XuatChuoi(a);
		cout << "\nNhap vao ky can thay the: ";
		cin >> x;
		cout << "\nNhap vao ky thay the: ";
		cin >> y;
		ThayX_BangY(a, x, y);
		cout << "\nChuoi sau khi xoa: ";
		XuatChuoi(a);
		break;
	}
	_getch();
}
