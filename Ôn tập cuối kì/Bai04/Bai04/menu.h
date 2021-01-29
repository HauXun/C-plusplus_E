void XuatMenu()
{
	cout << "\n====================================== BANG CHON CHUC NANG =========================================";
	cout << "\n1. Tao danh sach thue bao";
	cout << "\n2. Xem danh sach thue bao";

	cout << "\n3. Xuat thue bao theo ma so";
	cout << "\n4. Xuat thue bao theo ho va ten";
	cout << "\n5. Xuat thue bao theo dia chi";
	cout << "\n6. Xuat thue bao theo sdt";
	cout << "\n7. Xuat thue bao theo nam sinh";

	cout << "\n8. Sap danh sach thue bao tang dan theo MSNV";
	cout << "\n9. Sap xep danh sach thue bao tang dan theo Ho va ten";
	cout << "\n10. Sap xep danh sach thue bao tang dan theo dia chi";
	cout << "\n11. Sap xep danh sach thue bao tang dan theo sdt";
	cout << "\n12. Sap xep danh sach thue bao tang dan theo nam sinh";
	cout << "\n13. Sap xep cac thue bao tang dan theo ma vung";

	cout << "\n14. Sap danh sach thue bao giam dan theo MSNV";
	cout << "\n15. Sap xep danh sach thue bao giam dan theo Ho va ten";
	cout << "\n16. Sap xep danh sach thue bao giam dan theo dia chi";
	cout << "\n17. Sap xep danh sach thue bao giam dan theo sdt";
	cout << "\n18. Sap xep danh sach thue bao giam dan theo nam sinh";
	cout << "\n19. Sap xep danh sach thue bao giam dan theo ma vung";

	cout << "\n20. Sap xep danh sach thue bao tang dan theo MSNV - Ho va ten - Dia chi - SDT - Nam sinh - Ma vung";
	cout << "\n21. Sap xep danh sach thue bao tang dan theo Ma vung - Nam sinh - SDT - Dia chi - Ho va ten -  MSNV";
	cout << "\n22. Sap xep danh sach thue bao giam dan theo MSNV - Ho va ten - Dia chi - SDT - Nam sinh - Ma vung";
	cout << "\n23. Sap xep danh sach thue bao giam dan theo Ma vung - Nam sinh - SDT - Dia chi - Ho va ten -  MSNV";

	cout << "\n24. Xoa thue bao theo MSNV";
	cout << "\n25. Xoa thue bao theo Ho va ten";
	cout << "\n26. Xoa thue bao theo dia chi";
	cout << "\n27. Xoa thue bao theo nam sinh";
	cout << "\n28. Xoa thue bao theo sdt";

	cout << "\n29. Sua thong tin thue bao theo MSNV";
	cout << "\n30. Sua thong tin thue bao theo Ho va ten";
	cout << "\n31. Sua thong tin thue bao theo dia chi";
	cout << "\n32. Sua thong tin thue bao theo nam sinh";
	cout << "\n33. Sua thong tin thue bao theo sdt";

	cout << "\n34. Xuat danh sach sinh vien theo cung MSNV";
	cout << "\n35. Xuat danh sach sinh vien theo cung Ho";
	cout << "\n36. Xuat danh sach sinh vien theo cung Ho Lot";
	cout << "\n37. Xuat danh sach sinh vien theo cung Ten";
	cout << "\n38. Xuat danh sach sinh vien theo cung nam sinh";
	cout << "\n39. Xuat danh sach sinh vien theo cung dia chi";

	cout << "\n40. Them mot thue bao vao dau danh sach";
	cout << "\n41. Them mot thue bao vao cuoi danh sach";
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

void XuLyMenu(int menu)
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
		cout << "\n1. Tao danh sach thue bao";
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

		/*ketQua = TaoDanhSachThueBao(a, n, filename);*/
		if (ketQua == 0)
		{
			cout << "\nMo tap tin khong thanh cong... !";
		}
		else
		{
			cout << "\nMo tap tin thanh cong !";
			/*cout << "\nSo luong nhan vien la: " << n;*/
			cout << "\nDanh sach thue bao hien hanh:\n\n";
		}
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem danh sach thue bao";
		break;
	case 3:
		system("CLS");
		cout << "\n3. Xuat thue bao theo ma so";
		break;
	case 4:
		system("CLS");
		cout << "\n4. Xuat thue bao theo ho va ten";
		break;
	case 5:
		system("CLS");
		cout << "\n5. Xuat thue bao theo dia chi";
		break;
	case 6:
		system("CLS");
		cout << "\n6. Xuat thue bao theo sdt";
		break;
	case 7:
		system("CLS");
		cout << "\n7. Xuat thue bao theo nam sinh";
		break;
	case 8:
		system("CLS");
		cout << "\n8. Sap danh sach thue bao tang dan theo MSNV";
		break;
	case 9:
		system("CLS");
		cout << "\n9. Sap xep danh sach thue bao tang dan theo Ho va ten";
		break;
	case 10:
		system("CLS");
		cout << "\n10. Sap xep danh sach thue bao tang dan theo dia chi";
		break;
	case 11:
		system("CLS");
		cout << "\n11. Sap xep danh sach thue bao tang dan theo sdt";
		break;
	case 12:
		system("CLS");
		cout << "\n12. Sap xep danh sach thue bao tang dan theo nam sinh";
		break;
	case 13:
		system("CLS");
		cout << "\n13. Sap xep cac thue bao tang dan theo ma vung";
		break;
	case 14:
		system("CLS");
		cout << "\n14. Sap danh sach thue bao giam dan theo MSNV";
		break;
	case 15:
		system("CLS");
		cout << "\n15. Sap xep danh sach thue bao giam dan theo Ho va ten";
		break;
	case 16:
		system("CLS");
		cout << "\n16. Sap xep danh sach thue bao giam dan theo dia chi";
		break;
	case 17:
		system("CLS");
		cout << "\n17. Sap xep danh sach thue bao giam dan theo sdt";
		break;
	case 18:
		system("CLS");
		cout << "\n18. Sap xep danh sach thue bao giam dan theo nam sinh";
		break;
	case 19:
		system("CLS");
		cout << "\n19. Sap xep danh sach thue bao giam dan theo ma vung";
		break;
	case 20:
		system("CLS");
		cout << "\n20. Sap xep danh sach thue bao tang dan theo MSNV - Ho va ten - Dia chi - SDT - Nam sinh - Ma vung";
		break;
	case 21:
		system("CLS");
		cout << "\n21. Sap xep danh sach thue bao tang dan theo Ma vung - Nam sinh - SDT - Dia chi - Ho va ten -  MSNV";
		break;
	case 22:
		system("CLS");
		cout << "\n22. Sap xep danh sach thue bao giam dan theo MSNV - Ho va ten - Dia chi - SDT - Nam sinh - Ma vung";
		break;
	case 23:
		system("CLS");
		cout << "\n23. Sap xep danh sach thue bao giam dan theo Ma vung - Nam sinh - SDT - Dia chi - Ho va ten -  MSNV";
		break;
	case 24:
		system("CLS");
		cout << "\n24. Xoa thue bao theo MSNV";
		break;
	case 25:
		system("CLS");
		cout << "\n25. Xoa thue bao theo Ho va ten";
		break;
	case 26:
		system("CLS");
		cout << "\n26. Xoa thue bao theo dia chi";
		break;
	case 27:
		system("CLS");
		cout << "\n27. Xoa thue bao theo nam sinh";
		break;
	case 28:
		system("CLS");
		cout << "\n28. Xoa thue bao theo sdt";
		break;
	case 29:
		system("CLS");
		cout << "\n29. Sua thong tin thue bao theo MSNV";
		break;
	case 30:
		system("CLS");
		cout << "\n30. Sua thong tin thue bao theo Ho va ten";
		break;
	case 31:
		system("CLS");
		cout << "\n31. Sua thong tin thue bao theo dia chi";
		break;
	case 32:
		system("CLS");
		cout << "\n32. Sua thong tin thue bao theo nam sinh";
		break;
	case 33:
		system("CLS");
		cout << "\n33. Sua thong tin thue bao theo sdt";
		break;
	case 34:
		system("CLS");
		cout << "\n34. Xuat danh sach sinh vien theo cung MSNV";
		break;
	case 35:
		system("CLS");
		cout << "\n35. Xuat danh sach sinh vien theo cung Ho";
		break;
	case 36:
		system("CLS");
		cout << "\n36. Xuat danh sach sinh vien theo cung Ho Lot";
		break;
	case 37:
		system("CLS");
		cout << "\n37. Xuat danh sach sinh vien theo cung Ten";
		break;
	case 38:
		system("CLS");
		cout << "\n38. Xuat danh sach sinh vien theo cung nam sinh";
		break;
	case 39:
		system("CLS");
		cout << "\n39. Xuat danh sach sinh vien theo cung dia chi";
		break;
	case 40:
		system("CLS");
		cout << "\n34. Them mot thue bao vao dau danh sach";
		break;
	case 41:
		system("CLS");
		cout << "\n35. Them mot thue bao vao cuoi danh sach";
		break;
	}
	_getch();
}