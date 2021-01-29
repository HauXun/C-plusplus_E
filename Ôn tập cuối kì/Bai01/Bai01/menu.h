void XuatMenu()
{
	cout << "\n====================================== BANG CHON CHUC NANG =========================================";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Tao danh sach nhan vien";
	cout << "\n2. Xuat danh sach nhan vien";

	cout << "\n3. (Tim) Xuat danh sach nhan vien theo MSNV";
	cout << "\n4. (Tim) Xuat danh sach nhan vien theo Ho va ten";
	cout << "\n5. (Tim) Xuat danh sach nhan vien theo nam sinh";
	cout << "\n6. (Tim) Xuat danh sach nhan vien theo dia chi";
	cout << "\n7. (Tim) Xuat danh sach nhan vien co luong thap nhat";
	cout << "\n8. (Tim) Xuat danh sach nhan vien co luong cao nhat";
	cout << "\n9. (Tim) Xuat danh sach cac nhan vien co luong >= x (nhap tu ban phim)";
	cout << "\n10. (Tim) Xuat danh sach cac nhan vien co luong <= x (nhap tu ban phim)";
	cout << "\n11. (Tim) Xuat danh sach cac nhan vien co nam sinh trong khoang [u,v]";

	cout << "\n12. Sap danh sach nhan vien tang dan theo MSNV";
	cout << "\n13. Sap xep danh sach nhan vien tang dan theo Ho va ten";
	cout << "\n14. Sap xep danh sach nhan vien tang dan theo nam sinh";
	cout << "\n15. Sap xep danh sach nhan vien tang dan theo dia chi";
	cout << "\n16. Sap xep danh sach nhan vien tang dan theo luong";

	cout << "\n17. Sap danh sach nhan vien giam dan theo MSNV";
	cout << "\n18. Sap xep danh sach nhan vien giam dan theo Ho va ten";
	cout << "\n19. Sap xep danh sach nhan vien giam dan theo nam sinh";
	cout << "\n20. Sap xep danh sach nhan vien giam dan theo dia chi";
	cout << "\n21. Sap xep danh sach nhan vien giam dan theo luong";

	cout << "\n22. Sap xep danh sach nhan vien tang dan theo MSNV - Ho va ten - Nam sinh - Dia chi - Luong";
	cout << "\n23. Sap xep danh sach nhan vien tang dan theo Luong - Dia chi - Nam sinh - Ho va ten -  MSNV";
	cout << "\n24. Sap xep danh sach nhan vien giam dan theo MSNV - Ho va ten - Nam sinh - Dia chi - Luong";
	cout << "\n25. Sap xep danh sach nhan vien giam dan theo Luong - Dia chi - Nam sinh - Ho va ten -  MSNV";

	cout << "\n26. Xoa nhan vien theo MSNV";
	cout << "\n27. Xoa nhan vien theo Ho va ten";
	cout << "\n28. Xoa nhan vien theo nam sinh";
	cout << "\n29. Xoa nhan vien theo dia chi";
	cout << "\n30. Xoa nhan vien co luong >= x";
	cout << "\n31. Xoa nhan vien co luong <= x";
	cout << "\n32. Xoa nhan vien co luong thap nhat";
	cout << "\n33. Xoa nhan vien co luong cao nhat";

	cout << "\n34. Sua thong tin nhan vien theo MSNV";
	cout << "\n35. Sua thong tin nhan vien theo Ho va ten";
	cout << "\n36. Sua thong tin nhan vien theo nam sinh";
	cout << "\n37. Sua thong tin nhan vien theo dia chi";
	cout << "\n38. Sua thong tin mot nhan vien co luong >= x";
	cout << "\n39. Sua thong tin mot nhan vien co luong <= x";
	cout << "\n40. Sua thong tin nhan vien co luong thap nhat";
	cout << "\n41. Sua thong tin nhan vien co luong cao nhat";

	cout << "\n42. Xuat danh sach nhan vien theo cung MSNV";
	cout << "\n43. Xuat danh sach nhan vien theo cung Ho";
	cout << "\n44. Xuat danh sach nhan vien theo cung Ho Lot";
	cout << "\n45. Xuat danh sach nhan vien theo cung Ten";
	cout << "\n46. Xuat danh sach nhan vien theo cung nam sinh";
	cout << "\n47. Xuat danh sach nhan vien theo cung dia chi";
	cout << "\n48. Xuat danh sach nhan vien theo cung muc luong";

	cout << "\n49. Them mot nhan vien vao dau danh sach";
	cout << "\n50. Them mot nhan vien vao cuoi danh sach";

	cout << "\n51. Tinh tong tat ca luong cua nhan vien";
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

void XuLyMenu(int menu, NhanVien a[MAX], int &n)
{
	NhanVien b;
	int ketQua, x;
	double min, max, luong, namSinh;
	char filename[MAX];
	char maSo[MAX];
	char Ho[MAX];
	char hoLot[MAX];
	char Ten[MAX];
	char diaChi[MAX];

	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		system("CLS");
		cout << "\n1. Tao danh sach nhan vien";
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

		ketQua = TaoDanhSachNhanVien(a, n, filename);
		if (ketQua == 0)
		{
			cout << "\nMo tap tin khong thanh cong... !";
		}
		else
		{
			cout << "\nMo tap tin thanh cong !";
			cout << "\nSo luong nhan vien la: " << n;
			cout << "\nDanh sach nhan vien hien hanh:\n\n";
			XuatDSNV(a, n);
		}
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xuat danh sach ra man hinh\n";
		XuatDSNV(a, n);
		break;
	case 3:
		system("CLS");
		cout << "\n3. (Tim) Xuat danh sach nhan vien theo MSNV";
		cout << "\nDanh sach nhan vien hien hanh";
		XuatDSNV(a, n);
		cout << "\nNhap vao MSNV de thuc hien: ";
		cin >> maSo;
		XuatNhanVien_MaNV(a, n, maSo);
		break;
	case 4:
		system("CLS");
		cout << "\n4. (Tim) Xuat danh sach nhan vien theo Ho va ten";
		cout << "\nDanh sach nhan vien hien hanh";
		XuatDSNV(a, n);
		cout << "\nNhap vao ho de thuc hien: ";
		cin >> Ho;
		cout << "\nNhap vao ho hoLot thuc hien: ";
		cin >> hoLot;
		cout << "\nNhap vao ten de thuc hien: ";
		cin >> Ten;
		XuatNhanVien_HoVaTen(a, n, Ho, hoLot, Ten);
		break;
	case 5:
		system("CLS");
		cout << "\n5. (Tim) Xuat danh sach nhan vien theo nam sinh";
		cout << "\nDanh sach nhan vien hien hanh";
		XuatDSNV(a, n);
		cout << "\nNhap vao nam sinh de thuc hien: ";
		cin >> namSinh;
		XuatNhanVien_NamSinh(a, n, namSinh);
		break;
	case 6:
		system("CLS");
		cout << "\n6. (Tim) Xuat danh sach nhan vien theo dia chi";
		cout << "\nDanh sach nhan vien hien hanh";
		XuatDSNV(a, n);
		cout << "\nNhap vao dia chi de thuc hien: ";
		cin >> diaChi;
		XuatNhanVien_DiaChi(a, n, diaChi);
		break;
	case 7:
		system("CLS");
		cout << "\n7. (Tim) Xuat danh sach nhan vien co luong thap nhat";
		min = LuongThapNhat(a, n);
		cout << "\nLuong thap nhat trong danh sach la: " << min;
		XuatNhanVien_LuongThapNhat(a, n);
		cout << "\nXem lai danh sach nhan vien hien hanh de kiem tra";
		XuatDSNV(a, n);
		break;
	case 8:
		system("CLS");
		cout << "\n8. (Tim) Xuat danh sach nhan vien co luong cao nhat";
		max = LuongCaoNhat(a, n);
		cout << "\nLuong cao nhat trong danh sach la: " << max;
		XuatNhanVien_LuongCaoNhat(a, n);
		cout << "\nXem lai danh sach nhan vien hien hanh de kiem tra";
		XuatDSNV(a, n);
		break;
	case 9:
		system("CLS");
		cout << "\n9. (Tim) Xuat danh sach cac nhan vien co luong >= x (nhap tu ban phim)";
		cout << "\nDanh sach nhan vien hien hanh";
		XuatDSNV(a, n);
		cout << "\nNhap vao muc luong bat ky de thuc hien: ";
		cin >> x;
		XuatNhanVien_Luong_LonHon_X(a, n, x);
		break;
	case 10:
		system("CLS");
		cout << "\n10. (Tim) Xuat danh sach cac nhan vien co luong <= x (nhap tu ban phim)";
		cout << "\nDanh sach nhan vien hien hanh";
		XuatDSNV(a, n);
		cout << "\nNhap vao muc luong bat ky de thuc hien: ";
		cin >> x;
		XuatNhanVien_Luong_NhoHon_X(a, n, x);
		break;
	case 11:
		system("CLS");
		cout << "\n11. (Tim) Xuat danh sach cac nhan vien co nam sinh trong khoang [u,v]";
		cout << "\nDanh sach nhan vien hien hanh";
		XuatDSNV(a, n);
		cout << "\nNhap khoang min: ";
		cin >> min;
		cout << "\nNhap khoang max: ";
		cin >> max;
		XuatNhanVien_MinToMAX(a, n, min, max);
		break;
	case 12:
		system("CLS");
		cout << "\n12. Sap danh sach nhan vien tang dan theo MSNV";
		cout << "\nDanh sach nhan vien truoc khi sap";
		XuatDSNV(a, n);
		SapTang_MSNV(a, n);
		cout << "\nDanh sach nhan vien hien hanh sau khi sap sep";
		XuatDSNV(a, n);
		break;
	case 13:
		system("CLS");
		cout << "\n13. Sap xep danh sach nhan vien tang dan theo Ho va ten";
		cout << "\nDanh sach nhan vien truoc khi sap";
		XuatDSNV(a, n);
		SapTang_HoVaTen(a, n);
		cout << "\nDanh sach nhan vien hien hanh sau khi sap sep";
		XuatDSNV(a, n);
		break;
	case 14:
		system("CLS");
		cout << "\n14. Sap xep danh sach nhan vien tang dan theo nam sinh";
		cout << "\nDanh sach nhan vien truoc khi sap";
		XuatDSNV(a, n);
		SapTang_NamSinh(a, n);
		cout << "\nDanh sach nhan vien hien hanh sau khi sap sep";
		XuatDSNV(a, n);
		break;
	case 15:
		system("CLS");
		cout << "\n15. Sap xep danh sach nhan vien tang dan theo dia chi";
		cout << "\nDanh sach nhan vien truoc khi sap";
		XuatDSNV(a, n);
		SapTang_DiaChi(a, n);
		cout << "\nDanh sach nhan vien hien hanh sau khi sap sep";
		XuatDSNV(a, n);
		break;
	case 16:
		system("CLS");
		cout << "\n16. Sap xep danh sach nhan vien tang dan theo luong";
		cout << "\nDanh sach nhan vien truoc khi sap";
		XuatDSNV(a, n);
		SapTang_Luong(a, n);
		cout << "\nDanh sach nhan vien hien hanh sau khi sap sep";
		XuatDSNV(a, n);
		break;
	case 17:
		system("CLS");
		cout << "\n17. Sap danh sach nhan vien giam dan theo MSNV";
		cout << "\nDanh sach nhan vien truoc khi sap";
		XuatDSNV(a, n);
		SapGiam_MSNV(a, n);
		cout << "\nDanh sach nhan vien hien hanh sau khi sap sep";
		XuatDSNV(a, n);
		break;
	case 18:
		system("CLS");
		cout << "\n18. Sap xep danh sach nhan vien giam dan theo Ho va ten";
		cout << "\nDanh sach nhan vien truoc khi sap";
		XuatDSNV(a, n);
		SapGiam_HoVaTen(a, n);
		cout << "\nDanh sach nhan vien hien hanh sau khi sap sep";
		XuatDSNV(a, n);
		break;
	case 19:
		system("CLS");
		cout << "\n19. Sap xep danh sach nhan vien giam dan theo nam sinh";
		cout << "\nDanh sach nhan vien truoc khi sap";
		XuatDSNV(a, n);
		SapGiam_NamSinh(a, n);
		cout << "\nDanh sach nhan vien hien hanh sau khi sap sep";
		XuatDSNV(a, n);
		break;
	case 20:
		system("CLS");
		cout << "\n20. Sap xep danh sach nhan vien giam dan theo dia chi";
		cout << "\nDanh sach nhan vien truoc khi sap";
		XuatDSNV(a, n);
		SapGiam_DiaChi(a, n);
		cout << "\nDanh sach nhan vien hien hanh sau khi sap sep";
		XuatDSNV(a, n);
		break;
	case 21:
		system("CLS");
		cout << "\n21. Sap xep danh sach nhan vien giam dan theo luong";
		cout << "\nDanh sach nhan vien truoc khi sap";
		XuatDSNV(a, n);
		SapGiam_Luong(a, n);
		cout << "\nDanh sach nhan vien hien hanh sau khi sap sep";
		XuatDSNV(a, n);
		break;
	case 22:
		system("CLS");
		cout << "\n22. Sap xep danh sach nhan vien tang dan theo MSNV - Ho va ten - Nam sinh - Dia chi - Luong";
		cout << "\nDanh sach nhan vien truoc khi sap";
		XuatDSNV(a, n);
		SapTang_Chuan(a, n);
		cout << "\nDanh sach nhan vien hien hanh sau khi sap sep";
		XuatDSNV(a, n);
		break;
	case 23:
		system("CLS");
		cout << "\n23. Sap xep danh sach nhan vien tang dan theo Luong - Dia chi - Nam sinh - Ho va ten -  MSNV";
		cout << "\nDanh sach nhan vien truoc khi sap";
		XuatDSNV(a, n);
		SapTang_NguocChuan(a, n);
		cout << "\nDanh sach nhan vien hien hanh sau khi sap sep";
		XuatDSNV(a, n);
		break;
	case 24:
		system("CLS");
		cout << "\n24. Sap xep danh sach nhan vien giam dan theo MSNV - Ho va ten - Nam sinh - Dia chi - Luong";
		cout << "\nDanh sach nhan vien truoc khi sap";
		XuatDSNV(a, n);
		SapGiam_Chuan(a, n);
		cout << "\nDanh sach nhan vien hien hanh sau khi sap sep";
		XuatDSNV(a, n);
		break;
	case 25:
		system("CLS");
		cout << "\n25. Sap xep danh sach nhan vien giam dan theo Luong - Dia chi - Nam sinh - Ho va ten -  MSNV";
		cout << "\nDanh sach nhan vien truoc khi sap";
		XuatDSNV(a, n);
		SapGiam_NguocChuan(a, n);
		cout << "\nDanh sach nhan vien hien hanh sau khi sap sep";
		XuatDSNV(a, n);
		break;
	case 26:
		system("CLS");
		cout << "\n26. Xoa nhan vien theo MSNV";
		cout << "\nDanh sach nhan vien hien hanh:\n\n";
		XuatDSNV(a, n);
		cout << "\nNhap MSNV cua nhan vien can xoa: ";
		cin >> maSo;
		cout << "\nSo nhan vien trong danh sach: n = " << n;
		ketQua = XoaNhanVien_MSNV(a, n, maSo);
		if (ketQua == 0)
			cout << "\nKhong tim thay nhan vien nao co MSNV la " << maSo << " trong danh sach";
		else
		{
			cout << "\nDanh sach sau khi xoa:\n";
			XuatDSNV(a, n);
		}
		break;
	case 27:
		system("CLS");
		cout << "\n27. Xoa nhan vien theo Ho va ten";
		cout << "\nDanh sach nhan vien hien hanh:\n\n";
		XuatDSNV(a, n);
		cout << "\nNhap Ho cua nhan vien can xoa: ";
		cin >> Ho;
		cout << "\nNhap hoLot cua nhan vien can xoa: ";
		cin >> hoLot;
		cout << "\nNhap Ten cua nhan vien can xoa: ";
		cin >> Ten;
		cout << "\nSo nhan vien trong danh sach: n = " << n;
		ketQua = XoaNhanVien_HoVaTen(a, n, Ho, hoLot, Ten);
		if (ketQua == 0)
			cout << "\nKhong tim thay nhan vien nao co Ho Va Ten la " << Ho << hoLot << Ten << " trong danh sach";
		else
		{
			cout << "\nDanh sach sau khi xoa:\n";
			XuatDSNV(a, n);
		}
		break;
	case 28:
		system("CLS");
		cout << "\n28. Xoa nhan vien theo nam sinh";
		cout << "\nDanh sach nhan vien hien hanh:\n\n";
		XuatDSNV(a, n);
		cout << "\nNhap mam sinh cua nhan vien can xoa: ";
		cin >> namSinh;
		cout << "\nSo nhan vien trong danh sach: n = " << n;
		ketQua = XoaNhanVien_NamSinh(a, n, namSinh);
		if (ketQua == 0)
			cout << "\nKhong tim thay nhan vien nao co namSinh la " << namSinh << " trong danh sach";
		else
		{
			cout << "\nDanh sach sau khi xoa:\n";
			XuatDSNV(a, n);
		}
		break;
	case 29:
		system("CLS");
		cout << "\n29. Xoa nhan vien theo dia chi";
		cout << "\nDanh sach nhan vien hien hanh:\n\n";
		XuatDSNV(a, n);
		cout << "\nNhap que quan nhan vien can xoa: ";
		cin >> diaChi;
		cout << "\nSo nhan vien trong danh sach: n = " << n;
		ketQua = XoaNhanVien_DiaChi(a, n, diaChi);
		if (ketQua == 0)
			cout << "\nKhong tim thay nhan vien nao co que quan la " << diaChi << " trong danh sach";
		else
		{
			cout << "\nDanh sach sau khi xoa:\n";
			XuatDSNV(a, n);
		}
		break;
	case 30:
		system("CLS");
		cout << "\n30. Xoa nhan vien co luong >= x";
		cout << "\nDanh sach nhan vien hien hanh:\n\n";
		XuatDSNV(a, n);
		cout << "\nNhap muc Luong nhan vien can xoa de xet: ";
		cin >> x;
		cout << "\nSo nhan vien trong danh sach: n = " << n;
		XoaNhanVien_Luong_LonHonBang_X(a, n, x);
		cout << "\nDanh sach sau khi xoa cac nhan vien co muc luong >= " << x;
		XuatDSNV(a, n);
		break;
	case 31:
		system("CLS");
		cout << "\n31. Xoa nhan vien co luong <= x";
		cout << "\nDanh sach nhan vien hien hanh:\n\n";
		XuatDSNV(a, n);
		cout << "\nNhap muc Luong nhan vien can xoa de xet: ";
		cin >> x;
		cout << "\nSo nhan vien trong danh sach: n = " << n;
		XoaNhanVien_Luong_NhoHonBang_X(a, n, x);
		cout << "\nDanh sach sau khi xoa cac nhan vien co muc luong <= " << x;
		XuatDSNV(a, n);
		break;
	case 32:
		system("CLS");
		cout << "\n32. Xoa nhan vien co luong thap nhat";
		cout << "\nDanh sach nhan vien hien hanh:\n\n";
		XuatDSNV(a, n);
		ketQua = LuongThapNhat(a, n);
		cout << "\nMuc Luong nhan vien thap nhat la: " << ketQua;
		cout << "\nSo nhan vien trong danh sach: n = " << n;
		XoaNhanVien_LuongThapNhat(a, n);
		cout << "\nDanh sach sau khi xoa cac nhan vien co muc luong thap nhat";
		XuatDSNV(a, n);
		break;
	case 33:
		system("CLS");
		cout << "\n33. Xoa nhan vien co luong cao nhat";
		cout << "\nDanh sach nhan vien hien hanh:\n\n";
		XuatDSNV(a, n);
		ketQua = LuongCaoNhat(a, n);
		cout << "\nMuc Luong nhan vien cao nhat la: " << ketQua;
		cout << "\nSo nhan vien trong danh sach: n = " << n;
		XoaNhanVien_LuongCaoNhat(a, n);
		cout << "\nDanh sach sau khi xoa cac nhan vien co muc luong cao nhat";
		XuatDSNV(a, n);
		break;
	case 34:
		system("CLS");
		cout << "\n34. Sua thong tin nhan vien theo MSNV";
		cout << "\nDanh sach nhan vien hien hanh:\n\n";
		XuatDSNV(a, n);
		cout << "\nNhap ma nhan vien can sua: ";
		cin >> maSo;
		SuaNhanVien_MSNV(a, n, maSo);
		cout << "\nDanh sach nhan vien sau khi sua:\n\n";
		XuatDSNV(a, n);
		break;
	case 35:
		system("CLS");
		cout << "\n35. Sua thong tin nhan vien theo Ho va ten";
		cout << "\nDanh sach nhan vien hien hanh:\n\n";
		XuatDSNV(a, n);
		cout << "\nNhap Ho nhan vien can sua: ";
		cin >> Ho;
		cout << "\nNhap Ho Lot nhan vien can sua: ";
		cin >> hoLot;
		cout << "\nNhap Ten nhan vien can sua: ";
		cin >> Ten;
		SuaNhanVien_HoVaTen(a, n, Ho, hoLot, Ten);
		cout << "\nDanh sach nhan vien sau khi sua:\n\n";
		XuatDSNV(a, n);
		break;
	case 36:
		system("CLS");
		cout << "\n36. Sua thong tin nhan vien theo nam sinh";
		cout << "\nDanh sach nhan vien hien hanh:\n\n";
		XuatDSNV(a, n);
		cout << "\nNhap nam sinh nhan vien can sua: ";
		cin >> namSinh;
		SuaNhanVien_NamSinh(a, n, namSinh);
		cout << "\nDanh sach nhan vien sau khi sua:\n\n";
		XuatDSNV(a, n);
		break;
	case 37:
		system("CLS");
		cout << "\n37. Sua thong tin nhan vien theo dia chi";
		cout << "\nDanh sach nhan vien hien hanh:\n\n";
		XuatDSNV(a, n);
		cout << "\nNhap dia chi nhan vien can sua: ";
		cin >> diaChi;
		SuaNhanVien_DiaChi(a, n, diaChi);
		cout << "\nDanh sach nhan vien sau khi sua:\n\n";
		XuatDSNV(a, n);
		break;
	case 38:
		system("CLS");
		cout << "\n38. Sua thong tin mot nhan vien co luong >= x";
		cout << "\nDanh sach nhan vien hien hanh:\n\n";
		XuatDSNV(a, n);
		cout << "\nNhap muc Luong nhan vien can xoa de sua: ";
		cin >> x;
		cout << "\nSo nhan vien trong danh sach: n = " << n;
		SuaNhanVien_Luong_LonHonBang_X(a, n, x);
		cout << "\nDanh sach nhan vien sau khi sua:\n\n";
		XuatDSNV(a, n);
		break;
	case 39:
		system("CLS");
		cout << "\n39. Sua thong tin mot nhan vien co luong <= x";
		cout << "\nDanh sach nhan vien hien hanh:\n\n";
		XuatDSNV(a, n);
		cout << "\nNhap muc Luong nhan vien can xoa de sua: ";
		cin >> x;
		cout << "\nSo nhan vien trong danh sach: n = " << n;
		SuaNhanVien_Luong_NhoHonBang_X(a, n, x);
		cout << "\nDanh sach nhan vien sau khi sua:\n\n";
		XuatDSNV(a, n);
		break;
	case 40:
		system("CLS");
		cout << "\n40. Sua thong tin nhan vien co luong thap nhat";
		cout << "\nDanh sach nhan vien hien hanh:\n\n";
		XuatDSNV(a, n);
		ketQua = LuongThapNhat(a, n);
		cout << "\nMuc Luong nhan vien thap nhat la: " << ketQua;
		cout << "\nSo nhan vien trong danh sach: n = " << n;
		SuaNhanVien_LuongThapNhat(a, n);
		cout << "\nDanh sach nhan vien sau khi sua:\n\n";
		XuatDSNV(a, n);
		break;
	case 41:
		system("CLS");
		cout << "\n41. Sua thong tin nhan vien co luong cao nhat";
		cout << "\nDanh sach nhan vien hien hanh:\n\n";
		XuatDSNV(a, n);
		ketQua = LuongCaoNhat(a, n);
		cout << "\nMuc Luong nhan vien cao nhat la: " << ketQua;
		cout << "\nSo nhan vien trong danh sach: n = " << n;
		SuaNhanVien_LuongCaoNhat(a, n);
		cout << "\nDanh sach nhan vien sau khi sua:\n\n";
		XuatDSNV(a, n);
		break;
	case 42:
		system("CLS");
		cout << "\n42. Xuat danh sach nhan vien theo cung MSNV";
		XuatDSNV_CungMSNV(a, n);
		break;
	case 43:
		system("CLS");
		cout << "\n43. Xuat danh sach nhan vien theo cung Ho";
		XuatDSNV_CungHo(a, n);
		break;
	case 44:
		system("CLS");
		cout << "\n44. Xuat danh sach nhan vien theo cung Ho Lot";
		XuatDSNV_CungHoLot(a, n);
		break;
	case 45:
		system("CLS");
		cout << "\n45. Xuat danh sach nhan vien theo cung Ten";
		XuatDSNV_CungTen(a, n);
		break;
	case 46:
		system("CLS");
		cout << "\n46. Xuat danh sach nhan vien theo cung nam sinh";
		XuatDSNV_CungNamSinh(a, n);
		break;
	case 47:
		system("CLS");
		cout << "\n47. Xuat danh sach nhan vien theo cung dia chi";
		XuatDSNV_CungDiaChi(a, n);
		break;
	case 48:
		system("CLS");
		cout << "\n48. Xuat danh sach nhan vien theo cung muc luong";
		XuatDSNV_CungMucLuong(a, n);
		break;
	case 49:
		system("CLS");
		cout << "\n49. Them mot nhan vien vao dau danh sach";
		cout << "\nNhap thong tin nhan vien can chen vao dau danh sach:\n";
		Nhap_1_NhanVien(b);
		XuatDSNV(a, n);
		cout << "\nSo nhan vien trong danh sach, n = " << n;
		ThemNhanVien_Dau(a, n, b);
		cout << "\nDanh sach ket qua:\n";
		XuatDSNV(a, n);
		cout << "\nSo nhan vien trong danh sach sau khi them: n = " << n;
		break;
	case 50:
		system("CLS");
		cout << "\n50. Them mot nhan vien vao cuoi danh sach";
		cout << "\nNhap thong tin nhan vien can chen vao cuoi danh sach:\n";
		Nhap_1_NhanVien(b);
		XuatDSNV(a, n);
		cout << "\nSo nhan vien trong danh sach, n = " << n;
		ThemNhanVien_Cuoi(a, n, b);
		cout << "\nDanh sach ket qua:\n";
		XuatDSNV(a, n);
		cout << "\nSo nhan vien trong danh sach sau khi them: n = " << n;
		break;
	case 51:
		system("CLS");
		cout << "\n51. Tinh tong tat ca luong cua nhan vien";
		cout << "\nDanh sach hien hanh:\n";
		XuatDSNV(a, n);
		cout << "\nTong luong thang: tong = " << TinhTongLuong(a, n);
		break;
	}
	_getch();
}