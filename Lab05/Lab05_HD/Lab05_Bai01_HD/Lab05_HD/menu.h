//Khai báo nguyên mẫu các hàm xử lý menu
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int n);

//Định nghĩa các hàm xử lý menu

/*Định nghĩa hàm xuất danh sách các chức năng ra màn hình
Ngoài các chức năng của bài toán, ta thêm chức năng xem dữ liệu dãy số
Input: Không có
Output: Không có*/

void XuatMenu()
{
	cout << "\n==========CHON CHUC NANG==========";
	cout << "\n0.Thoat khoi chuong trinh";
	cout << "\n1.Kiem tra x nam trong mang a";
	cout << "\n2.Tim vi tri dau tien x xuat hien trong a";
	cout << "\n3.Kiem tra mang a la day tang";
	cout << "\n4.Tim phan tu lon nhat xuat hien";
	cout << "\n5.Tim vi tri cuoi cung gia tri lon nhat xuat hien";
	cout << "\n6.Neu a chua x thi cung chua -x";
	cout << "\n7.Xem du lieu day so";
	cout << "\n8.Chon lai bo du lieu cho day so";
	cout << "\n==================================";
}

/*Input: soMenu = Số lượng menu có thể chọn
Output: Stt Menu do người dùng nhập vào*/
int ChonMenu(int soMenu)
{
	int stt = -1;
	while (stt < 0 || stt > soMenu)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap tuy chon Menu tuong ung" << endl;
		cin >> stt;
	}
	return stt;
}

/*Input: menu = stt menu do người chọn
				Dãy số a
				Số nguyên dương n
Output: Không có*/

void XuLyMenu(int menu, DaySo a, int n)
{
	int x, ketQua;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << endl << "\n0.Thoat khoi chuong trinh\n";
		break;
	case 1:
		cout << endl << "\n1.Kiem tra x nam trong mang a\n";
		cout << "\nNhap gia tri x:\n";
		cin >> x;
		ketQua = ChuaX(a, n, x);
		system("CLS");
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		if (ketQua)
			cout << "\nMang có chua: " << x;
		else
			cout << "\nMang khong chua: " << x;
		break;
	case 2:
		cout << endl << "\n2.Tim vi tri x dau tien xuat hien trong a\n";
		cout << "\nNhap gia tri x: ";
		cin >> x;
		ketQua = Tim_VTDT_X(a, n, x);
		system("CLS");
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		if (ketQua == -1)
			cout << "\nMang khong chua: " << x;
		else
			cout << "\nVi tri dau tien " << x << " xuat hien trong a la: " << ketQua;
		break;
	case 3:
		cout << endl << "\n3.Kiem tra mang a la day tang\n";
		ketQua = KiemTraMangTang(a, n);
		system("CLS");
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		if (ketQua)
			cout << "\na la mang tang";
		else
			cout << "\na khong phai la mang tang";
		break;
	case 4:
		system("CLS");
		cout << endl << "\n4.Tim phan tu lon nhat\n";
		ketQua = TinhMax(a, n);
		system("CLS");
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		cout << "\nMax[0 ... " << n << "] = " << ketQua;
		break;
	case 5:
		system("CLS");
		cout << endl << "\n5.Tim vi tri phan tu lon nhat\n";
		ketQua = TimViTriMax_CuoiCung(a, n);
		system("CLS");
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		cout << "\nVi tri cuoi cung cua gia tri lon nhat la:\n" << ketQua;
		break;
	case 6:
		system("CLS");
		cout << endl << "\n6.Neu a chua x thi cung chua -x\n";
		ketQua = ChuaXChuaTruX(a, n);
		system("CLS");
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		if (ketQua)
			cout << "\nPhat bieu dung";
		else
			cout << "\nPhat bieu sai";
		break;
	case 7:
		system("CLS");
		cout << endl << "\n7.Xem du lieu day so\n";
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);
		break;
	case 8:
		system("CLS");
		cout << endl << "\n8.Chon bo du lieu khac\n";
		cout << "\nNhap lai kich thuoc n: ";
		cin >> n;
		XuatMang(a, n);
		system("CLS");
		cout << "\nDay so moi nhap:\n";
		XuatMang(a, n);
	}
	_getch();
}