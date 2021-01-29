void XuatMenu()
{
	cout << "\n========================HE THONG CHUC NANG========================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Nhap danh sach tai lieu";
	cout << "\n2. Xem danh sach tai lieu";
	cout << "\n3. Tinh tong gia tat ca cac tai lieu";
	cout << "\n4. Tim danh muc sach duoc xuat ban boi nhaXb vao namXb cho truoc";
	cout << "\n5. Tim nhung bai bao khoa hoc co su tham gia cua tac gia tacGia cho truoc";
	cout << "\n6. Thong ke so luong tai lieu theo moi loai";
	cout << "\n7. Liet ke cac tai lieu theo tung nam xuat ban";
	cout << "\n8. Xem thong tin tai lieu theo ma so tai lieu maTl cho truoc";
	cout << "\n9. Sap xep cac tai lieu tang dan theo tua de";
	cout << "\n===================================================================";
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

void XuLyMenu(int menu, TaiLieu *ds, int &n)
{
	double ketQua;

	char nhaXB[15];
	int namXB;

	HoTen hoTen;

	char maTL[10];
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << "\n1. Nhap danh sach tai lieu\n";
		Tao_DS_TaiLieu(ds, n);
		system("CLS");
		cout << "\n\t\t\t\t\t\t DANH SACH TAI LIEU\n";
		Xuat_DS_TaiLieu(ds, n);
		cout << "\nSo tai lieu trong danh sach la : " << n;
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem danh sach tai lieu\n";
		cout << "\n\t\t\t\t DANH SACH TAI LIEU\n";
		Xuat_DS_TaiLieu(ds, n);
		cout << "\nSo tai lieu trong danh sach la : " << n;
		break;
	case 3:
		system("CLS");
		cout << "\n3. Tinh tong gia tat ca cac tai lieu\n";
		cout << "\n\t\t\t\t DANH SACH TAI LIEU\n";
		Xuat_DS_TaiLieu(ds, n);
		ketQua = TinhTong_Gia_TaiLieu(ds, n);
		cout << "\nTong gia cua tat ca tai lieu la: " << ketQua;
		break;
	case 4:
		system("CLS");
		cout << "\n4. Tim danh muc sach duoc xuat ban boi nhaXB vao namXB cho truoc\n";
		cout << "\nDanh sach hien hanh:\n";
		Xuat_DS_TaiLieu(ds, n);

		cout << "\nNhap vao ten NXB can tim: ";
		_flushall();
		gets_s(nhaXB, 15);

		cout << "\nNhap vao namXB: ";
		cin >> namXB;
		TimThongTinTheo_nhaXB_namXB(ds, n, nhaXB, namXB);
		break;
	case 5:
		system("CLS");
		cout << "\n5. Tim nhung bai bao khoa hoc co su tham gia cua tac gia tacGia cho truoc\n";
		cout << "\nDanh sach hien hanh:\n";
		Xuat_DS_TaiLieu(ds, n);
		cout << "\nNhap ho va ten lot cua tac gia: ";
		_flushall();
		gets_s(hoTen.hoLot, 20);
		
		cout << "\nNhap ten cua tac gia: ";
		cin >> hoTen.ten;
		TimTaiLieuTheo_TenTacGia(ds, n, hoTen);
		break;
	case 6:
		system("CLS");
		cout << "\n6. Thong ke so luong tai lieu theo moi loai\n";
		cout << "\nDanh sach hien hanh:\n";
		Xuat_DS_TaiLieu(ds, n);

		ketQua = ThongKe_TaiLieu_TheoLoai(ds, n, "Sach");
		cout << "\n\nSo luong tai lieu thuoc loai -Sach- la: " << ketQua << endl;

		ketQua = ThongKe_TaiLieu_TheoLoai(ds, n, "Bao KH");
		cout << "\nSo luong tai lieu thuoc loai -Bao KH- la: " << ketQua << endl;

		ketQua = ThongKe_TaiLieu_TheoLoai(ds, n, "Tap Chi");
		cout << "\nSo luong tai lieu thuoc loai -Tap Chi- la: " << ketQua << endl;

		ketQua = ThongKe_TaiLieu_TheoLoai(ds, n, "Luan Van");
		cout << "\nSo luong tai lieu thuoc loai -Luan Van- la: " << ketQua;
		break;
	case 7:
		system("CLS");
		cout << "\n7. Liet ke cac tai lieu theo tung nam xuat ban\n";
		/*cout << "\n\t\t\t\tDANH SACH THONG KE TAI LIEU THEO namXB TU DU LIEU CHO TRUOC";
		LietKe_TaiLieu_TheoNamXB(ds, n, 2013);
		LietKe_TaiLieu_TheoNamXB(ds, n, 2014);
		LietKe_TaiLieu_TheoNamXB(ds, n, 2015);
		LietKe_TaiLieu_TheoNamXB(ds, n, 2016);
		LietKe_TaiLieu_TheoNamXB(ds, n, 2018);
		LietKe_TaiLieu_TheoNamXB(ds, n, 2019);*/
		LietKe_TaiLieu_TheoNamXB(ds, n);
		break;
	case 8:
		system("CLS");
		cout << "\n8. Xem thong tin tai lieu theo ma so tai lieu maTl cho truoc\n";
		cout << "\nDanh sach hien hanh:\n";
		Xuat_DS_TaiLieu(ds, n);

		cout << "\nNhap vao maTL cua tai lieu: ";
		_flushall();
		gets_s(maTL, 15);

		XemTaiLieuTheo_maTL(ds, n, maTL);
		break;
	case 9:
		system("CLS");
		cout << "\n9. Sap xep cac tai lieu tang dan theo tua de\n";
		cout << "\nDanh sach hien hanh:\n";
		Xuat_DS_TaiLieu(ds, n);

		SapTangTheo_tuaDe(ds, n);
		cout << "\nDanh sach sau khi sap sep:\n";
		Xuat_DS_TaiLieu(ds, n);
		break;
	}
	_getch();
}