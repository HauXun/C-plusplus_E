
void XuatMenu()
{
	cout << "\n======================HE THONG CHUC NANG======================";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap 2 vector";
	cout << "\n2. Xem 2 vector";
	cout << "\n3. Tinh do dai vector";
	cout << "\n4. Kiem tra 2 vector u va v co bang nhau khong?";
	cout << "\n5. Tinh tong 2 vector u va v";
	cout << "\n6. Tinh hieu 2 vector u va v";
	cout << "\n7. Tinh tich cua mot so thuc voi mot vector";
	cout << "\n8. Tinh tich vo huong 2 vector u va v";
	cout << "\n9. Kiem tra 2 vector u va v co vuong goc voi nhau hay khong?";
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

void XuLyMenu(int menu, Vector &u, Vector &v)
{
	int kq_KT; //Biến dùng để kiểm tra đúng sai
	double kq_TT; //Biến dùng để lưu kết quả tính toán
	double k;
	Vector kq;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\nThoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << "\n1. Nhap 2 vector\n";

		cout << "\nNhap toa do vector u : \n";
		NhapVector(u);
		cout << "\nNhap toa do vector v : \n";
		NhapVector(v);

		system("CLS");
		cout << "\nHai vector da nhap : \n";
		cout << "\nVector u = ";
		XuatVector(u);
		cout << "\nVector v = ";
		XuatVector(v);
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem 2 vector\n";
		cout << "\nVector u = ";
		XuatVector(u);
		cout << "\nVector v = ";
		XuatVector(v);
		break;
	case 3:
		system("CLS");
		cout << "\n3. Tinh do dai vector\n";
		kq_TT = DoDaiVector(u);
		cout << "\nVector u = ";
		XuatVector(u);
		cout << "\nDo dai vector u = " << kq_TT;
		cout << endl;
		kq_TT = DoDaiVector(v);
		cout << "\nVector v = ";
		XuatVector(v);
		cout << "\nDo dai vector v = " << kq_TT;
		break;
	case 4:
		system("CLS");
		cout << "\n4. Kiem tra 2 vector u va v co bang nhau khong?\n";
		cout << "\nVector u = ";
		XuatVector(u);
		cout << "\nVector v = ";
		XuatVector(v);
		cout << endl;
		kq_KT = KT_BangNhau(u, v);
		if (kq_KT == 0)
			cout << "\nHai vector u va v khong bang nhau";
		else 
			cout << "\nHai vector u va v bang nhau";
		break;
	case 5:
		system("CLS");
		cout << "\n5. Tinh tong 2 vector u va v\n";
		cout << "\nVector u = ";
		XuatVector(u);
		cout << "\nVector v = ";
		XuatVector(v);
		kq = Tong(u, v);
		cout << "\nTong 2 vector = ";
		XuatVector(kq);
		break;
	case 6:
		system("CLS");
		cout << "\n6. Tinh hieu 2 vector u va v\n";
		cout << "\nVector u = ";
		XuatVector(u);
		cout << "\nVector v = ";
		XuatVector(v);
		kq = Hieu(u, v);
		cout << "\nHieu 2 vector = ";
		XuatVector(kq);
		break;
	case 7:
		system("CLS");
		cout << "\n7. Tinh tich cua mot so thuc voi mot vector\n";
		cout << "\nNhap so thuc k = ";
		cin >> k;
		cout << "\nVector u = ";
		XuatVector(u);
		kq = Tich_k(u, k);
		cout << "\nk . vector u = ";
		XuatVector(kq);
		cout << endl;
		cout << "\nVector v = ";
		XuatVector(v);
		kq = Tich_k(v, k);
		cout << "\nk . vector v = ";
		XuatVector(kq);
		break;
	case 8:
		system("CLS");
		cout << "\n8. Tinh tich vo huong 2 vector u va v\n";
		cout << "\nVector u = ";
		XuatVector(u);
		cout << "\nVector v = ";
		XuatVector(v);
		kq_TT = TichVoHuong(u, v);
		cout << "\nKet qua tich vo huong = " << kq_TT;
		break;
	case 9:
		system("CLS");
		cout << "\n9. Kiem tra 2 vector u va v co vuong goc voi nhau hay khong?\n";
		cout << "\nVector u = ";
		XuatVector(u);
		cout << "\nVector v = ";
		XuatVector(v);
		kq_KT = KT_VuongGoc(u, v);
		if (kq_KT == 0)
			cout << "\nHai vector u va v khong vuong goc voi nhau";
		else cout << "\nHai vector u va v vuong goc voi nhau";
		break;
	}
	_getch();
}