void XuatMenu()
{
	cout << "\n====================================== BANG CHON CHUC NANG =========================================";
	cout << "\n1. Tao bang diem sinh vien";
	cout << "\n2. Xem bang diem sinh vien";

	cout << "\n3. Xuat bang diem sinh vien theo MSSV";
	cout << "\n4. Xuat bang diem sinh vien theo Ho va ten";
	cout << "\n5. Xuat bang diem sinh vien theo nam sinh";
	cout << "\n6. Xuat bang diem sinh vien theo lop";
	cout << "\n7. Xuat bang diem sinh vien theo dia chi";
	cout << "\n8. Xuat bang diem sinh vien co diem trung binh cao nhat";
	cout << "\n9. Xuat bang diem sinh vien co diem trung binh thap nhat";
	cout << "\n10. Xuat bang diem sinh vien co diem trung binh >= x";
	cout << "\n11. Xuat bang diem sinh vien co diem trung binh <= x";

	cout << "\n12. Sap bang diem sinh vien tang dan theo MSSV";
	cout << "\n13. Sap bang diem sinh vien tang dan theo Ho va ten";
	cout << "\n14. Sap bang diem sinh vien tang dan theo nam sinh";
	cout << "\n15. Sap bang diem sinh vien tang dan theo lop";
	cout << "\n16. Sap bang diem sinh vien tang dan theo dia chi";
	cout << "\n17. Sap bang diem sinh vien tang dan theo diem trung binh";

	cout << "\n18. Sap bang diem sinh vien giam dan theo MSSV";
	cout << "\n19. Sap bang diem sinh vien giam dan theo Ho va ten";
	cout << "\n20. Sap bang diem sinh vien giam dan theo nam sinh";
	cout << "\n21. Sap bang diem sinh vien giam dan theo lop";
	cout << "\n22. Sap bang diem sinh vien giam dan theo dia chi";
	cout << "\n23. Sap bang diem sinh vien giam dan theo diem trung binh";

	cout << "\n24. Sap xep bang diem sinh vien tang dan theo MSSV - Ho va ten - Nam sinh - Lop - Dia chi - DTB";
	cout << "\n25. Sap xep bang diem sinh vien tang dan theo DTB - Dia chi - Lop - Nam sinh - Ho va ten -  MSSV";
	cout << "\n26. Sap xep bang diem sinh vien giam dan theo MSSV - Ho va ten - Nam sinh - Lop - Dia chi - DTB";
	cout << "\n27. Sap xep bang diem sinh vien gjam dan theo DTB - Dia chi - Lop - Nam sinh - Ho va ten -  MSSV";

	cout << "\n28. Xoa sinh vien theo MSSV";
	cout << "\n29. Xoa sinh vien theo Ho va ten";
	cout << "\n30. Xoa sinh vien theo nam sinh";
	cout << "\n31. Xoa sinh vien theo lop";
	cout << "\n32. Xoa sinh vien theo dia chi";
	cout << "\n33. Xoa sinh vien co diem trung binh >= x";
	cout << "\n34. Xoa sinh vien co diem trung binh <= x";
	cout << "\n35. Xoa sinh vien co diem trung binh thap nhat";
	cout << "\n36. Xoa sinh vien co diem trung binh cao nhat";

	cout << "\n37. Sua thong tin sinh vien theo MSSV";
	cout << "\n38. Sua thong tin sinh vien theo Ho va ten";
	cout << "\n39. Sua thong tin sinh vien theo nam sinh";
	cout << "\n40. Sua thong tin sinh vien theo lop";
	cout << "\n41. Sua thong tin sinh vien theo dia chi";
	cout << "\n42. Sua thong tin sinh vien co diem trung binh >= x";
	cout << "\n43. Sua thong tin sinh vien co diem trung binh <= x";
	cout << "\n44. Sua thong tin sinh vien co diem trung binh thap nhat";
	cout << "\n45. Sua thong tin sinh vien co diem trung binh cao nhat";

	cout << "\n46. Xuat danh sach sinh vien theo cung MSSV";
	cout << "\n47. Xuat danh sach sinh vien theo cung Ho";
	cout << "\n48. Xuat danh sach sinh vien theo cung Ho Lot";
	cout << "\n49. Xuat danh sach sinh vien theo cung Ten";
	cout << "\n50. Xuat danh sach sinh vien theo cung nam sinh";
	cout << "\n51. Xuat danh sach sinh vien theo cung dia chi";
	cout << "\n52. Xuat danh sach sinh vien theo cung muc diem trung binh";

	cout << "\n53. Them mot sinh vien vao dau danh sach";
	cout << "\n54. Them mot sinh vien vao cuoi danh sach";
	cout << "\n====================================================================================================";
}

int ChonMenu(int soMenu)
{
	int stt = -1;
	while (stt < 0 || stt > soMenu)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap vao tuy chon chuc nang tuong ung: ";
		cin >> stt;
	}
	return stt;
}

void XuLyMenu(int menu, SinhVien a[MAX], int &n)
{
	SinhVien b;
	int ketQua;
	double min, max, luong, namSinh, x;
	char filename[MAX];
	char maSo[MAX];
	char Ho[MAX];
	char hoLot[MAX];
	char Ten[MAX];
	char diaChi[MAX];
	char Lop[MAX];

	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		system("CLS");
		cout << "\n1. Tao bang diem sinh vien";
		cout << "\nNhap vao ten tep tin de mo: ";
		cin >> filename;

		ketQua = 0;
		for (int i = 0; filename[i] != NULL; i++)
			if (filename[i] == '.')
			{
				ketQua = 1;
				break;
			}
		if (!ketQua)
			strcat_s(filename, ".txt");

		ketQua = TaoDanhSachSinhVien(a, n, filename);
		if (ketQua == 0)
		{
			cout << "\nMo tap tin khong thanh cong... !";
		}
		else
		{
			cout << "\nMo tap tin thanh cong !";
			cout << "\nSo luong sinh vien la: " << n;
			cout << "\nDanh sach bang diem sinh vien hien hanh:\n\n";
			XuatDSSV(a, n);
		}
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem bang diem sinh vien";
		XuatDSSV(a, n);
		break;
	case 3:
		system("CLS");
		cout << "\n3. Xuat bang diem sinh vien theo MSSV";
		cout << "\nDanh sach sinh vien hien hanh";
		XuatDSSV(a, n);
		cout << "\nNhap vao MSNV de thuc hien: ";
		cin >> maSo;
		XuatSinhVien_MaNV(a, n, maSo);
		break;
	case 4:
		system("CLS");
		cout << "\n4. Xuat bang diem sinh vien theo Ho va ten";
		cout << "\nDanh sach sinh vien hien hanh";
		XuatDSSV(a, n);
		cout << "\nNhap vao ho de thuc hien: ";
		cin >> Ho;
		cout << "\nNhap vao ho hoLot thuc hien: ";
		cin >> hoLot;
		cout << "\nNhap vao ten de thuc hien: ";
		cin >> Ten;
		XuatSinhVien_HoVaTen(a, n, Ho, hoLot, Ten);
		break;
	case 5:
		system("CLS");
		cout << "\n5. Xuat bang diem sinh vien theo nam sinh";
		cout << "\nDanh sach sinh vien hien hanh";
		XuatDSSV(a, n);
		cout << "\nNhap vao nam sinh de thuc hien: ";
		cin >> namSinh;
		XuatSinhVien_NamSinh(a, n, namSinh);
		break;
	case 6:
		system("CLS");
		cout << "\n6. Xuat bang diem sinh vien theo lop";
		cout << "\nDanh sach sinh vien hien hanh";
		XuatDSSV(a, n);
		cout << "\nNhap vao lop de thuc hien: ";
		cin >> Lop;
		XuatSinhVien_Lop(a, n, Lop);
		break;
	case 7:
		system("CLS");
		cout << "\n7. Xuat bang diem sinh vien theo dia chi";
		cout << "\nDanh sach sinh vien hien hanh";
		XuatDSSV(a, n);
		cout << "\nNhap vao dia chi de thuc hien: ";
		cin >> diaChi;
		XuatSinhVien_DiaChi(a, n, diaChi);
		break;
	case 8:
		system("CLS");
		cout << "\n8. Xuat bang diem sinh vien co diem trung binh cao nhat";
		max = DTBCaoNhat(a, n);
		cout << "\nDTB cao nhat trong danh sach la: " << max;
		XuatNhanVien_DTBCaoNhat(a, n);
		cout << "\nXem lai danh sach sinh vien hien hanh de kiem tra";
		XuatDSSV(a, n);
		break;
	case 9:
		system("CLS");
		cout << "\n9. Xuat bang diem sinh vien co diem trung binh thap nhat";
		min = DTBThapNhat(a, n);
		cout << "\nDTB cao nhat trong danh sach la: " << min;
		XuatNhanVien_DTBThapNhat(a, n);
		cout << "\nXem lai danh sach sinh vien hien hanh de kiem tra";
		XuatDSSV(a, n);
		break;
	case 10:
		system("CLS");
		cout << "\n10. Xuat bang diem sinh vien co diem trung binh >= x";
		cout << "\nDanh sach sinh vien hien hanh";
		XuatDSSV(a, n);
		do
		{
			system("CLS");
			cout << "\nNhap vao muc DTB 0 ... 10 de thuc hien: ";
			cin >> x;
		} while (x < 0 || x >= 10);
		XuatSinhVien_DTB_LonHon_X(a, n, x);
		break;
	case 11:
		system("CLS");
		cout << "\n11. Xuat bang diem sinh vien co diem trung binh <= x";
		cout << "\nDanh sach sinh vien hien hanh";
		XuatDSSV(a, n);
		do
		{
			system("CLS");
			cout << "\nNhap vao muc DTB 0 ... 10 de thuc hien: ";
			cin >> x;
		} while (x < 0 || x >= 10);
		XuatSinhVien_DTB_NhoHon_X(a, n, x);
		break;
	case 12:
		system("CLS");
		cout << "\n12. Sap bang diem sinh vien tang dan theo MSSV";
		cout << "\nDanh sach sinh vien truoc khi sap";
		XuatDSSV(a, n);
		SapTang_MSSV(a, n);
		cout << "\nDanh sach sinh vien hien hanh sau khi sap sep";
		XuatDSSV(a, n);
		break;
	case 13:
		system("CLS");
		cout << "\n13. Sap bang diem sinh vien tang dan theo Ho va ten";
		cout << "\nDanh sach sinh vien truoc khi sap";
		XuatDSSV(a, n);
		SapTang_HoVaTen(a, n);
		cout << "\nDanh sach sinh vien hien hanh sau khi sap sep";
		XuatDSSV(a, n);
		break;	
	case 14:
		system("CLS");
		cout << "\n14. Sap bang diem sinh vien tang dan theo nam sinh";
		cout << "\nDanh sach sinh vien truoc khi sap";
		XuatDSSV(a, n);
		SapTang_NamSinh(a, n);
		cout << "\nDanh sach sinh vien hien hanh sau khi sap sep";
		XuatDSSV(a, n);
		break;
	case 15:
		system("CLS");
		cout << "\n15. Sap bang diem sinh vien tang dan theo lop";
		cout << "\nDanh sach sinh vien truoc khi sap";
		XuatDSSV(a, n);
		SapTang_Lop(a, n);
		cout << "\nDanh sach sinh vien hien hanh sau khi sap sep";
		XuatDSSV(a, n);
		break;
	case 16:
		system("CLS");
		cout << "\n16. Sap bang diem sinh vien tang dan theo dia chi";
		cout << "\nDanh sach sinh vien truoc khi sap";
		XuatDSSV(a, n);
		SapTang_DiaChi(a, n);
		cout << "\nDanh sach sinh vien hien hanh sau khi sap sep";
		XuatDSSV(a, n);
		break;
	case 17:
		system("CLS");
		cout << "\n17. Sap bang diem sinh vien tang dan theo diem trung binh";
		cout << "\nDanh sach sinh vien truoc khi sap";
		XuatDSSV(a, n);
		SapTang_DTB(a, n);
		cout << "\nDanh sach sinh vien hien hanh sau khi sap sep";
		XuatDSSV(a, n);
		break;
	case 18:
		system("CLS");
		cout << "\n18. Sap bang diem sinh vien giam dan theo MSSV";
		cout << "\nDanh sach sinh vien truoc khi sap";
		XuatDSSV(a, n);
		SapGiam_MSSV(a, n);
		cout << "\nDanh sach sinh vien hien hanh sau khi sap sep";
		XuatDSSV(a, n);
		break;
	case 19:
		system("CLS");
		cout << "\n19. Sap bang diem sinh vien giam dan theo Ho va ten";
		cout << "\nDanh sach sinh vien truoc khi sap";
		XuatDSSV(a, n);
		SapGiam_HoVaTen(a, n);
		cout << "\nDanh sach sinh vien hien hanh sau khi sap sep";
		XuatDSSV(a, n);
		break;
	case 20:
		system("CLS");
		cout << "\n20. Sap bang diem sinh vien giam dan theo nam sinh";
		cout << "\nDanh sach sinh vien truoc khi sap";
		XuatDSSV(a, n);
		SapGiam_NamSinh(a, n);
		cout << "\nDanh sach sinh vien hien hanh sau khi sap sep";
		XuatDSSV(a, n);
		break;
	case 21:
		system("CLS");
		cout << "\n21. Sap bang diem sinh vien giam dan theo lop";
		cout << "\nDanh sach sinh vien truoc khi sap";
		XuatDSSV(a, n);
		SapGiam_Lop(a, n);
		cout << "\nDanh sach sinh vien hien hanh sau khi sap sep";
		XuatDSSV(a, n);
		break;
	case 22:
		system("CLS");
		cout << "\n22. Sap bang diem sinh vien giam dan theo dia chi";
		cout << "\nDanh sach sinh vien truoc khi sap";
		XuatDSSV(a, n);
		SapGiam_DiaChi(a, n);
		cout << "\nDanh sach sinh vien hien hanh sau khi sap sep";
		XuatDSSV(a, n);
		break;
	case 23:
		system("CLS");
		cout << "\n23. Sap bang diem sinh vien giam dan theo diem trung binh";
		cout << "\nDanh sach sinh vien truoc khi sap";
		XuatDSSV(a, n);
		SapGiam_DTB(a, n);
		cout << "\nDanh sach sinh vien hien hanh sau khi sap sep";
		XuatDSSV(a, n);
		break;
	case 24:
		system("CLS");
		cout << "\n24. Sap xep bang diem sinh vien tang dan theo MSSV - Ho va ten - Nam sinh - Lop - Dia chi - DTB";
		cout << "\nDanh sach sinh vien truoc khi sap";
		XuatDSSV(a, n);
		SapTang_Chuan(a, n);
		cout << "\nDanh sach sinh vien hien hanh sau khi sap sep";
		XuatDSSV(a, n);
		break;
	case 25:
		system("CLS");
		cout << "\n25. Sap xep bang diem sinh vien tang dan theo DTB - Dia chi - Lop - Nam sinh - Ho va ten -  MSSV";
		cout << "\nDanh sach sinh vien truoc khi sap";
		XuatDSSV(a, n);
		SapTang_NguocChuan(a, n);
		cout << "\nDanh sach sinh vien hien hanh sau khi sap sep";
		XuatDSSV(a, n);
		break;
	case 26:
		system("CLS");
		cout << "\n26. Sap xep bang diem sinh vien giam dan theo MSSV - Ho va ten - Nam sinh - Lop - Dia chi - DTB";
		cout << "\nDanh sach sinh vien truoc khi sap";
		XuatDSSV(a, n);
		SapGiam_Chuan(a, n);
		cout << "\nDanh sach sinh vien hien hanh sau khi sap sep";
		XuatDSSV(a, n);
		break;
	case 27:
		system("CLS");
		cout << "\n27. Sap xep bang diem sinh vien gjam dan theo DTB - Dia chi - Lop - Nam sinh - Ho va ten -  MSSV";
		cout << "\nDanh sach sinh vien truoc khi sap";
		XuatDSSV(a, n);
		SapGiam_NguocChuan(a, n);
		cout << "\nDanh sach sinh vien hien hanh sau khi sap sep";
		XuatDSSV(a, n);
		break;
	case 28:
		system("CLS");
		cout << "\n28. Xoa sinh vien theo MSSV";
		cout << "\nDanh sach sinh vien hien hanh:\n\n";
		XuatDSSV(a, n);
		cout << "\nNhap MSSV cua sinh vien can xoa: ";
		cin >> maSo;
		cout << "\nSo nhan vien trong danh sach: n = " << n;
		ketQua = XoaSinhVien_MSSV(a, n, maSo);
		if (ketQua == 0)
			cout << "\nKhong tim thay sinh vien nao co MSSV la " << maSo << " trong danh sach";
		else
		{
			cout << "\nDanh sach sau khi xoa:\n";
			XuatDSSV(a, n);
		}
		break;
	case 29:
		system("CLS");
		cout << "\n29. Xoa sinh vien theo Ho va ten";
		cout << "\nDanh sach sinh vien hien hanh:\n\n";
		XuatDSSV(a, n);
		cout << "\nNhap Ho cua sinh vien can xoa: ";
		cin >> Ho;
		cout << "\nNhap hoLot cua sinh vien can xoa: ";
		cin >> hoLot;
		cout << "\nNhap Ten cua sinh vien can xoa: ";
		cin >> Ten;
		cout << "\nSo sinh vien trong danh sach: n = " << n;
		ketQua = XoaSinhVien_HoVaTen(a, n, Ho, hoLot, Ten);
		if (ketQua == 0)
			cout << "\nKhong tim thay sinh vien nao co Ho Va Ten la " << Ho << hoLot << Ten << " trong danh sach";
		else
		{
			cout << "\nDanh sach sau khi xoa:\n";
			XuatDSSV(a, n);
		}
		break;
	case 30:
		system("CLS");
		cout << "\n30. Xoa sinh vien theo nam sinh";
		cout << "\nDanh sach sinh vien hien hanh:\n\n";
		XuatDSSV(a, n);
		cout << "\nNhap mam sinh cua sinh vien can xoa: ";
		cin >> namSinh;
		cout << "\nSo sinh vien trong danh sach: n = " << n;
		ketQua = XoaSinhVien_NamSinh(a, n, namSinh);
		if (ketQua == 0)
			cout << "\nKhong tim thay sinh vien nao co namSinh la " << namSinh << " trong danh sach";
		else
		{
			cout << "\nDanh sach sau khi xoa:\n";
			XuatDSSV(a, n);
		}
		break;
	case 31:
		system("CLS");
		cout << "\n31. Xoa sinh vien theo lop";
		cout << "\nDanh sach sinh vien hien hanh:\n\n";
		XuatDSSV(a, n);
		cout << "\nNhap lop sinh vien can xoa: ";
		cin >> Lop;
		cout << "\nSo sinh vien trong danh sach: n = " << n;
		ketQua = XoaSinhVien_Lop(a, n, Lop);
		if (ketQua == 0)
			cout << "\nKhong tim thay sinh vien nao co lop la " << Lop << " trong danh sach";
		else
		{
			cout << "\nDanh sach sau khi xoa:\n";
			XuatDSSV(a, n);
		}
		break;
	case 32:
		system("CLS");
		cout << "\n32. Xoa sinh vien theo dia chi";
		cout << "\nDanh sach sinh vien hien hanh:\n\n";
		XuatDSSV(a, n);
		cout << "\nNhap que quan sinh vien can xoa: ";
		cin >> diaChi;
		cout << "\nSo sinh vien trong danh sach: n = " << n;
		ketQua = XoaSinhVien_DiaChi(a, n, diaChi);
		if (ketQua == 0)
			cout << "\nKhong tim thay sinh vien nao co que quan la " << diaChi << " trong danh sach";
		else
		{
			cout << "\nDanh sach sau khi xoa:\n";
			XuatDSSV(a, n);
		}
		break;
	case 33:
		system("CLS");
		cout << "\n33. Xoa sinh vien co diem trung binh >= x";
		cout << "\nDanh sach sinh vien hien hanh:\n\n";
		XuatDSSV(a, n);
		cout << "\nNhap muc Luong nhan vien can xoa de xet: ";
		cin >> x;
		cout << "\nSo nhan vien trong danh sach: n = " << n;
		XoaSinhVien_DTB_LonHonBang_X(a, n, x);
		cout << "\nDanh sach sau khi xoa cac sinh vien co muc DTB >= " << x;
		XuatDSSV(a, n);
		break;
	case 34:
		system("CLS");
		cout << "\n34. Xoa sinh vien co diem trung binh <= x";
		cout << "\nDanh sach sinh vien hien hanh:\n\n";
		XuatDSSV(a, n);
		cout << "\nNhap muc Luong nhan vien can xoa de xet: ";
		cin >> x;
		cout << "\nSo nhan vien trong danh sach: n = " << n;
		XoaSinhVien_DTB_NhoHonBang_X(a, n, x);
		cout << "\nDanh sach sau khi xoa cac sinh vien co muc DTB <= " << x;
		XuatDSSV(a, n);
		break;
	case 35:
		system("CLS");
		cout << "\n35. Xoa sinh vien co diem trung binh thap nhat";
		cout << "\nDanh sach sinh vien hien hanh:\n\n";
		XuatDSSV(a, n);
		ketQua = DTBThapNhat(a, n);
		cout << "\nMuc DTB sinh vien thap nhat la: " << ketQua;
		cout << "\nSo sinh vien trong danh sach: n = " << n;
		XoaSinhVien_DTBThapNhat(a, n);
		cout << "\nDanh sach sau khi xoa cac sinh vien co muc DTB thap nhat";
		XuatDSSV(a, n);
		break;
	case 36:
		system("CLS");
		cout << "\n36. Xoa sinh vien co diem trung binh cao nhat";
		cout << "\nDanh sach sinh vien hien hanh:\n\n";
		XuatDSSV(a, n);
		ketQua = DTBCaoNhat(a, n);
		cout << "\nMuc DTB sinh vien cao nhat la: " << ketQua;
		cout << "\nSo sinh vien trong danh sach: n = " << n;
		XoaSinhVien_DTBCaoNhat(a, n);
		cout << "\nDanh sach sau khi xoa cac sinh vien co muc DTB cao nhat";
		XuatDSSV(a, n);
		break;
	case 37:
		system("CLS");
		cout << "\n37. Sua thong tin sinh vien theo MSSV";
		cout << "\nDanh sach sinh vien hien hanh:\n\n";
		XuatDSSV(a, n);
		cout << "\nNhap ma sinh vien can sua: ";
		cin >> maSo;
		SuaSinhVien_MSSV(a, n, maSo);
		cout << "\nDanh sach sinh vien sau khi sua:\n\n";
		XuatDSSV(a, n);
		break;
	case 38:
		system("CLS");
		cout << "\n38. Sua thong tin sinh vien theo Ho va ten";
		cout << "\nDanh sach nhan vien hien hanh:\n\n";
		XuatDSSV(a, n);
		cout << "\nNhap Ho sinh vien can sua: ";
		cin >> Ho;
		cout << "\nNhap Ho Lot sinh vien can sua: ";
		cin >> hoLot;
		cout << "\nNhap Ten sinh vien can sua: ";
		cin >> Ten;
		SuaSinhVien_HoVaTen(a, n, Ho, hoLot, Ten);
		cout << "\nDanh sach sinh vien sau khi sua:\n\n";
		XuatDSSV(a, n);
		break;
	case 39:
		system("CLS");
		cout << "\n39. Sua thong tin sinh vien theo nam sinh";
		cout << "\nDanh sach sinh vien hien hanh:\n\n";
		XuatDSSV(a, n);
		cout << "\nNhap nam sinh sinh vien can sua: ";
		cin >> namSinh;
		SuaSinhVien_NamSinh(a, n, namSinh);
		cout << "\nDanh sach sinh vien sau khi sua:\n\n";
		XuatDSSV(a, n);
		break;
	case 40:
		system("CLS");
		cout << "\n40. Sua thong tin sinh vien theo lop";
		cout << "\nDanh sach sinh vien hien hanh:\n\n";
		XuatDSSV(a, n);
		cout << "\nNhap lop sinh sinh vien can sua: ";
		cin >> Lop;
		SuaSinhVien_Lop(a, n, Lop);
		cout << "\nDanh sach sinh vien sau khi sua:\n\n";
		XuatDSSV(a, n);
		break;
	case 41:
		system("CLS");
		cout << "\n41. Sua thong tin sinh vien theo dia chi";
		cout << "\nDanh sach sinh vien hien hanh:\n\n";
		XuatDSSV(a, n);
		cout << "\nNhap dia chi sinh sinh vien can sua: ";
		cin >> diaChi;
		SuaSinhVien_DiaChi(a, n, diaChi);
		cout << "\nDanh sach sinh vien sau khi sua:\n\n";
		XuatDSSV(a, n);
		break;
	case 42:
		system("CLS");
		cout << "\n42. Sua thong tin sinh vien co diem trung binh >= x";
		cout << "\nDanh sach sinh vien hien hanh:\n\n";
		XuatDSSV(a, n);
		cout << "\nNhap muc DTB sinh vien can xoa de sua: ";
		cin >> x;
		cout << "\nSo sinh vien trong danh sach: n = " << n;
		SuaSinhVien_DTB_LonHonBang_X(a, n, x);
		cout << "\nDanh sach nhan vien sau khi sua:\n\n";
		XuatDSSV(a, n);
		break;
	case 43:
		system("CLS");
		cout << "\n43. Sua thong tin sinh vien co diem trung binh <= x";
		cout << "\nDanh sach sinh vien hien hanh:\n\n";
		XuatDSSV(a, n);
		cout << "\nNhap muc DTB sinh vien can xoa de sua: ";
		cin >> x;
		cout << "\nSo sinh vien trong danh sach: n = " << n;
		SuaSinhVien_DTB_NhoHonBang_X(a, n, x);
		cout << "\nDanh sach nhan vien sau khi sua:\n\n";
		XuatDSSV(a, n);
		break;
	case 44:
		system("CLS");
		cout << "\n44. Sua thong tin sinh vien co diem trung binh thap nhat";
		cout << "\nDanh sach sinh vien hien hanh:\n\n";
		XuatDSSV(a, n);
		ketQua = DTBThapNhat(a, n);
		cout << "\nMuc DTB sinh vien thap nhat la: " << ketQua;
		cout << "\nSo sinh vien trong danh sach: n = " << n;
		SuaSinhVien_DTBThapNhat(a, n);
		cout << "\nDanh sach nhan vien sau khi sua:\n\n";
		XuatDSSV(a, n);
		break;
	case 45:
		system("CLS");
		cout << "\n45. Sua thong tin sinh vien co diem trung binh cao nhat";
		cout << "\nDanh sach sinh vien hien hanh:\n\n";
		XuatDSSV(a, n);
		ketQua = DTBCaoNhat(a, n);
		cout << "\nMuc DTB sinh vien cao nhat la: " << ketQua;
		cout << "\nSo sinh vien trong danh sach: n = " << n;
		SuaSinhVien_DTBCaoNhat(a, n);
		cout << "\nDanh sach nhan vien sau khi sua:\n\n";
		XuatDSSV(a, n);
		break;
	case 46:
		system("CLS");
		cout << "\n46. Xuat danh sach sinh vien theo cung MSSV";
		XuatDSSV_CungMSSV(a, n);
		break;
	case 47:
		system("CLS");
		cout << "\n47. Xuat danh sach sinh vien theo cung Ho";
		XuatDSSV_CungHo(a, n);
		break;
	case 48:
		system("CLS");
		cout << "\n48. Xuat danh sach sinh vien theo cung Ho Lot";
		XuatDSSV_CungHoLot(a, n);
		break;
	case 49:
		system("CLS");
		cout << "\n49. Xuat danh sach sinh vien theo cung Ten";
		XuatDSSV_CungTen(a, n);
		break;
	case 50:
		system("CLS");
		cout << "\n50. Xuat danh sach sinh vien theo cung nam sinh";
		XuatDSSV_CungNamSinh(a, n);
		break;
	case 51:
		system("CLS");
		cout << "\n51. Xuat danh sach sinh vien theo cung dia chi";
		XuatDSSV_CungDiaChi(a, n);
		break;
	case 52:
		system("CLS");
		cout << "\n52. Xuat danh sach sinh vien theo cung muc diem trung binh";
		XuatDSSV_CungMucDTB(a, n);
		break;
	case 53:
		system("CLS");
		cout << "\n56. Them mot sinh vien vao dau danh sach";
		cout << "\nNhap thong tin sinh vien can chen vao dau danh sach:\n";
		Nhap_1_SinhVien(b);
		XuatDSSV(a, n);
		cout << "\nSo nhan sinh trong danh sach, n = " << n;
		ThemSinhVien_Dau(a, n, b);
		cout << "\nDanh sach ket qua:\n";
		XuatDSSV(a, n);
		cout << "\nSo nhan vien trong danh sach sau khi them: n = " << n;
		break;
	case 54:
		system("CLS");
		cout << "\n57. Them mot sinh vien vao cuoi danh sach";
		cout << "\nNhap thong tin sinh vien can chen vao cuoi danh sach:\n";
		Nhap_1_SinhVien(b);
		XuatDSSV(a, n);
		cout << "\nSo nhan sinh trong danh sach, n = " << n;
		ThemSinhVien_Cuoi(a, n, b);
		cout << "\nDanh sach ket qua:\n";
		XuatDSSV(a, n);
		cout << "\nSo nhan vien trong danh sach sau khi them: n = " << n;
		break;
	}
	_getch();
}