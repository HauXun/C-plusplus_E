void XuatMenu()
{
	cout << "\n====================================== BANG CHON CHUC NANG =========================================";
	cout << "\n1. Tao danh sach tai lieu";
	cout << "\n2. Xem danh sach tai lieu";

	cout << "\n3. Xuat thong tin sach theo ma tai lieu";
	cout << "\n4. Xuat thong tin sach theo tieu de tai lieu";
	cout << "\n5. Xuat thong tin sach theo loai tai lieu";
	cout << "\n6. Xuat thong tin sach theo nam xuat ban";
	cout << "\n7. Xuat thong tin sach theo nha xuat ban";
	cout << "\n8. Xuat thong tin sach theo Ho va ten cua tac gia";
	cout << "\n9. Xuat thong tin sach co gia tien >= x";
	cout << "\n10. Xuat thong tin sach co gia tien <= x";

	cout << "\n11. Sap danh sach tai lieu tang dan theo ma tai lieu";
	cout << "\n12. Sap danh sach tai lieu tang dan theo tieu de tai lieu";
	cout << "\n13. Sap danh sach lieu tang dan theo loai tai lieu";
	cout << "\n14. Sap danh sach tai lieu tang dan theo nam xuat ban";
	cout << "\n15. Sap danh sach tai lieu tang dan theo nha xuat ban";
	cout << "\n16. Sap danh sach tai lieu tang dan theo Ho va ten tac gia";
	cout << "\n17. Sap danh sach tai lieu tang dan theo gia tien";
	cout << "\n18. Sap danh sach tai lieu giam dan theo gia tien";

	cout << "\n19. Sap xep danh sach tai lieu tang dan theo maTL - tieuDe - Loai - namXB - nhaXB - hoTen - giaTien";
	cout << "\n20. Sap xep danh sach tai lieu tang dan theo giaTien - hoTen - nhaXB - namXB - Loai - tieuDe - maTL";
	cout << "\n21. Sap xep danh sach tai lieu giam dan theo maTL - tieuDe - Loai - namXB - nhaXB - hoTen - giaTien";
	cout << "\n22. Sap xep danh sach tai lieu giam dan theo giaTien - hoTen - nhaXB - namXB - Loai - tieuDe - maTL";

	cout << "\n23. Xoa danh sach tai lieu theo ma tai lieu";
	cout << "\n24. Xoa danh sach tai lieu theo tieu de tai lieu";
	cout << "\n25. Xoa danh sach tai lieu theo loai tai lieu";
	cout << "\n26. Xoa danh sach tai lieu theo nam xuat ban";
	cout << "\n27. Xoa danh sach tai lieu theo nha xuat ban";
	cout << "\n28. Xoa danh sach tai lieu theo Ho va ten cua tac gia";
	cout << "\n29. Xoa danh sach tai lieu theo gia tien";


	cout << "\n30. Sua thong tin danh sach tai lieu theo ma tai lieu";
	cout << "\n31. Sua thong tin danh sach tai lieu theo tieu de tai lieu";
	cout << "\n32. Sua thong tin danh sach tai lieu theo loai tai lieu";
	cout << "\n33. Sua thong tin danh sach tai lieu theo nam xuat ban";
	cout << "\n34. Sua thong tin danh sach tai lieu theo nha xuat ban";
	cout << "\n35. Sua thong tin danh sach tai lieu theo Ho va ten cua tac gia";
	cout << "\n36. Sua thong tin danh sach tai lieu theo gia tien";

	cout << "\n37. Xuat danh sach sinh vien theo cung Ma tai lieu";
	cout << "\n38. Xuat danh sach sinh vien theo cung Tieu de";
	cout << "\n39. Xuat danh sach sinh vien theo cung Loai tai lieu";
	cout << "\n40. Xuat danh sach sinh vien theo cung Nam xuat ban";
	cout << "\n41. Xuat danh sach sinh vien theo cung Nha xuat ban";
	cout << "\n42. Xuat danh sach sinh vien theo cung Ho cua tac gia";
	cout << "\n43. Xuat danh sach sinh vien theo cung Ten cua tac gia";
	cout << "\n44. Xuat danh sach sinh vien theo cung muc gia tien";

	cout << "\n45. Them mot danh sach tai lieu vao dau danh sach";
	cout << "\n46. Them mot danh sach tai lieu vao cuoi danh sach";

	cout << "\n47. Tinh tong gia tat ca cac tai lieu";
	cout << "\n48. Thong ke so luong tai lieu theo moi loai";
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
	int ketQua;
	double min;
	char filename[MAX];

	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		system("CLS");
		cout << "\n1. Tao danh sach tai lieu";
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
			cout << "\nSo luong tai lieu la: " << n;
			cout << "\nDanh sach tai lieu hien hanh:\n\n";
			XuatDSNV(a, n);
		}
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem danh sach tai lieu";
		XuatDSNV(a, n);
		break;
	case 3:
		system("CLS");
		cout << "\n3. Xuat thong tin sach theo ma tai lieu";
		break;
	case 4:
		system("CLS");
		cout << "\n4. Xuat thong tin sach theo tieu de tai lieu";
		break;
	case 5:
		system("CLS");
		cout << "\n5. Xuat thong tin sach theo loai tai lieu";
		break;
	case 6:
		system("CLS");
		cout << "\n6. Xuat thong tin sach theo nam xuat ban";
		break;
	case 7:
		system("CLS");
		cout << "\n7. Xuat thong tin sach theo nha xuat ban";
		break;
	case 8:
		system("CLS");
		cout << "\n8. Xuat thong tin sach theo Ho va ten cua tac gia";
		break;
	case 9:
		system("CLS");
		cout << "\n9. Xuat thong tin sach co gia tien >= x";
		break;
	case 10:
		system("CLS");
		cout << "\n10. Xuat thong tin sach co gia tien <= x";
		break;
	case 11:
		system("CLS");
		cout << "\n11. Sap danh sach tai lieu tang dan theo ma tai lieu";
		break;
	case 12:
		system("CLS");
		cout << "\n12. Sap danh sach tai lieu tang dan theo tieu de tai lieu";
		break;
	case 13:
		system("CLS");
		cout << "\n13. Sap danh sach lieu tang dan theo loai tai lieu";
		break;
	case 14:
		system("CLS");
		cout << "\n14. Sap danh sach tai lieu tang dan theo nam xuat ban";
		break;
	case 15:
		system("CLS");
		cout << "\n15. Sap danh sach tai lieu tang dan theo nha xuat ban";
		break;
	case 16:
		system("CLS");
		cout << "\n16. Sap danh sach tai lieu tang dan theo Ho va ten tac gia";
		break;
	case 17:
		system("CLS");
		cout << "\n17. Sap danh sach tai lieu tang dan theo gia tien";
		break;
	case 18:
		system("CLS");
		cout << "\n18. Sap danh sach tai lieu giam dan theo gia tien";
		break;
	case 19:
		system("CLS");
		cout << "\n19. Sap xep danh sach tai lieu tang dan theo maTL - tieuDe - Loai - namXB - nhaXB - hoTen - giaTien";
		break;
	case 20:
		system("CLS");
		cout << "\n20. Sap xep danh sach tai lieu tang dan theo giaTien - hoTen - nhaXB - namXB - Loai - tieuDe - maTL";
		break;
	case 21:
		system("CLS");
		cout << "\n21. Sap xep danh sach tai lieu giam dan theo maTL - tieuDe - Loai - namXB - nhaXB - hoTen - giaTien";
		break;
	case 22:
		system("CLS");
		cout << "\n22. Sap xep danh sach tai lieu giam dan theo giaTien - hoTen - nhaXB - namXB - Loai - tieuDe - maTL";
		break;
	case 23:
		system("CLS");
		cout << "\n23. Xoa danh sach tai lieu theo ma tai lieu";
		break;
	case 24:
		system("CLS");
		cout << "\n24. Xoa danh sach tai lieu theo tieu de tai lieu";
		break;
	case 25:
		system("CLS");
		cout << "\n25. Xoa danh sach tai lieu theo loai tai lieu";
		break;
	case 26:
		system("CLS");
		cout << "\n26. Xoa danh sach tai lieu theo nam xuat ban";
		break;
	case 27:
		system("CLS");
		cout << "\n27. Xoa danh sach tai lieu theo nha xuat ban";
		break;
	case 28:
		system("CLS");
		cout << "\n28. Xoa danh sach tai lieu theo Ho va ten cua tac gia";
		break;
	case 29:
		system("CLS");
		cout << "\n29. Xoa danh sach tai lieu theo gia tien";
		break;
	case 30:
		system("CLS");
		cout << "\n30. Sua thong tin danh sach tai lieu theo ma tai lieu";
		break;
	case 31:
		system("CLS");
		cout << "\n31. Sua thong tin danh sach tai lieu theo tieu de tai lieu";
		break;
	case 32:
		system("CLS");
		cout << "\n32. Sua thong tin danh sach tai lieu theo loai tai lieu";
		break;
	case 33:
		system("CLS");
		cout << "\n33. Sua thong tin danh sach tai lieu theo nam xuat ban";
		break;
	case 34:
		system("CLS");
		cout << "\n34. Sua thong tin danh sach tai lieu theo nha xuat ban";
		break;
	case 35:
		system("CLS");
		cout << "\n35. Sua thong tin danh sach tai lieu theo Ho va ten cua tac gia";
		break;
	case 36:
		system("CLS");
		cout << "\n36. Sua thong tin danh sach tai lieu theo gia tien";
		break;
	case 37:
		system("CLS");
		cout << "\n37. Xuat danh sach sinh vien theo cung Ma tai lieu";
		break;
	case 38:
		system("CLS");
		cout << "\n38. Xuat danh sach sinh vien theo cung Tieu de";
		break;
	case 39:
		system("CLS");
		cout << "\n39. Xuat danh sach sinh vien theo cung Loai tai lieu";
		break;
	case 40:
		system("CLS");
		cout << "\n40. Xuat danh sach sinh vien theo cung Nam xuat ban";
		break;
	case 41:
		system("CLS");
		cout << "\n41. Xuat danh sach sinh vien theo cung Nha xuat ban";
		break;
	case 42:
		system("CLS");
		cout << "\n42. Xuat danh sach sinh vien theo cung Ho cua tac gia";
		break;
	case 43:
		system("CLS");
		cout << "\n43. Xuat danh sach sinh vien theo cung Ten cua tac gia";
		break;
	case 44:
		system("CLS");
		cout << "\n44. Xuat danh sach sinh vien theo cung muc gia tien";
		break;
	case 45:
		system("CLS");
		cout << "\n37. Them mot danh sach tai lieu vao dau danh sach";
		break;
	case 46:
		system("CLS");
		cout << "\n38. Them mot danh sach tai lieu vao cuoi danh sach";
		break;
	case 47:
		system("CLS");
		cout << "\n39. Tinh tong gia tat ca cac tai lieu";
		break;
	case 48:
		system("CLS");
		cout << "\n40. Thong ke so luong tai lieu theo moi loai";
		break;
	}
	_getch();
}