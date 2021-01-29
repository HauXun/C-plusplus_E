#define MAX 100

typedef char String[MAX];

struct HoTen
{
	char hoLot[20];
	char ten[10];
};

struct TaiLieu
{
	char maTL[10];
	char tuaDe[50];
	char loai[10];
	int namXB;
	HoTen hoTen;
	char nhaXB[15];
	double gia;
};

void Tao_1_TaiLieu(char *maTL, char *tuaDe, char *loai, unsigned int namXB,
	char *nhaXB, HoTen hoTen, double gia, TaiLieu *ds, int &n)
{
	if (n < MAX)
	{
		strcpy_s((ds + n)->maTL, 10, maTL);
		strcpy_s((ds + n)->tuaDe, 50, tuaDe);
		strcpy_s((ds + n)->loai, 10, loai);
		(ds + n)->namXB = namXB;
		strcpy_s((ds + n)->nhaXB, 15, nhaXB);
		(ds + n)->hoTen = hoTen;
		(ds + n)->gia = gia;

		if (strcmp((ds + n)->loai, "Luan Van") == 0)
			strcpy_s((ds + n)->nhaXB, "");
		if (strcmp((ds + n)->loai, "Tap Chi") == 0)
			(ds + n)->hoTen = { "", "" };
		n++;
	}
}

void Tao_DS_TaiLieu(TaiLieu *ds, int &n)
{
	Tao_1_TaiLieu("S6490159", "5 Phuong trinh lam thay doi the gioi","Sach",	2014, "NXB Tre",		{ "Michael", "Guillen" }, 115000, ds, n);
	Tao_1_TaiLieu("S8432092", "Luoc su thoi gian",					 "Sach",	2018, "NXB Tre",		{ "Stephen", "Hawking" }, 87000,  ds, n);
	Tao_1_TaiLieu("S2164870", "Nha gia kim",						 "Sach",	2016, "NXB Tre",		{ "Paulo", "Coelho" },	  59000,  ds, n);

	Tao_1_TaiLieu("T4861018", "Tap chi van hoc ki 2 so 5",			 "Tap Chi", 2014, "NXB Van Hoa",	{},						  115,	  ds, n);
	Tao_1_TaiLieu("T2866535", "Tap chi khoa hoc ki 1 so 6",			 "Tap Chi", 2013, "NXB Khoa Hoc",	{},						  115,	  ds, n);
	Tao_1_TaiLieu("T3016261", "Tap chi nghe thuat ki 3 so 7",		 "Tap Chi", 2015, "NXB Nghe Thuat", {},						  115,	  ds, n);

	Tao_1_TaiLieu("L4534032", "Luan van tot nghiep khoa CNTT K39",	 "Luan Van",2019, "",				{ "Kieu", "Phong" },	  70000,  ds, n);
	Tao_1_TaiLieu("L4939863", "Luan van tot nghiep khoa QTKD K39",	 "Luan Van",2019, "",				{ "Hu", "Truc" },		  50000,  ds, n);
	Tao_1_TaiLieu("L3516002", "Luan van tot nghiep khoa CNTT K39",	 "Luan Van",2019, "",				{ "Doan", "Du" },		  70000,  ds, n);

	Tao_1_TaiLieu("B4357002", "Nho khong hoc lon lam nha bao - P1",  "Bao KH",  2019, "NXB NinjaLead",  { "Tao", "Thao" },		  69000,  ds, n);
	Tao_1_TaiLieu("B8122123", "Nho khong hoc lon lam nha bao - P2",  "Bao KH",  2019, "NXB NinjaLead",  { "Tao", "Thuc" },		  69.500, ds, n);
	Tao_1_TaiLieu("B6653496", "Nho khong hoc lon lam nha bao - P3",  "Bao KH",  2019, "NXB NinjaLead",  { "Tao", "Phi" },		  69.696, ds, n);
}

void XuatKeNgangDoi()
{
	cout << endl << setiosflags(ios::left) << ':';
	for (int i = 0; i <= 123; i++)
		cout << '=';
	cout << ':';
}

void XuatKeNgangDon()
{
	cout << endl << setiosflags(ios::left) << ':';
	for (int i = 0; i <= 123; i++)
		cout << '-';
	cout << ':';
}

void XuatTieuDe()
{
	XuatKeNgangDoi();
	cout << "\n";
	cout << setiosflags(ios::left) << ':'
		<< setw(10) << "Ma TL" << ':'
		<< setw(40) << "Tieu de tai lieu" << ':'
		<< setw(10) << "Loai" << ':'
		<< setw(7) << "Nam XB" << ':'
		<< setw(15) << "Nha XB" << ':'
		<< setw(25) << "Ho va ten" << ':'
		<< setw(10) << "Gia tien" << ':';
	cout << "\n";
	XuatKeNgangDoi();
}

void Xuat_1_TaiLieu(TaiLieu taiLieu)
{
	cout << setiosflags(ios::left) << ':'
		<< setw(10) << taiLieu.maTL << ':'
		<< setw(40) << taiLieu.tuaDe << ':'
		<< setw(10) << taiLieu.loai << ':'
		<< setw(7) << taiLieu.namXB << ':'
		<< setw(15) << taiLieu.nhaXB << ':'
		<< setw(15) << taiLieu.hoTen.hoLot << ':'
		<< setw(10) << taiLieu.hoTen.ten << ':'
		<< setiosflags(ios::left) << setprecision(10) << setw(10) << taiLieu.gia << ':';
	cout << "\n";
}

void Xuat_DS_TaiLieu(TaiLieu *ds, int n)
{
	XuatTieuDe();
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		Xuat_1_TaiLieu(*(ds + i));
		if ((i + 1) % 3 == 0)
			XuatKeNgangDon();
	}
	XuatKeNgangDoi();
}

double TinhTong_Gia_TaiLieu(TaiLieu *ds, int n)
{
	double Tong = 0;
	for (int i = 0; i < n; i++)
		Tong += ds->gia;
	return Tong;
}

void TimThongTinTheo_nhaXB_namXB(TaiLieu *ds, int n, char *nhaXB, int namXB)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (_strcmpi(ds[i].nhaXB, nhaXB) == 0 && ds[i].namXB == namXB)
		{
			dem++;
		}
	}
	if (dem == 0)
		cout << "\nKhong tim thay ket qua. Vui long kiem tra lai thong tin vua nhap.";
	else
	{
		cout << "\nCo " << dem << " tai lieu tu NXB " << nhaXB << " vao nam " << namXB;
		XuatTieuDe();
		cout << "\n";
		for (int i = 0; i < n; i++)
			if (_strcmpi(ds[i].nhaXB, nhaXB) == 0 && ds[i].namXB == namXB)
			Xuat_1_TaiLieu(ds[i]);
		XuatKeNgangDoi();
	}
}

int SoSanhTen(HoTen a, HoTen b)
{
	int ketQua = 1;
	if (_strcmpi(a.hoLot, b.hoLot) != 0 || _strcmpi(a.ten, b.ten) != 0)
		ketQua = 0;
	return ketQua;
}

void TimTaiLieuTheo_TenTacGia(TaiLieu *ds, int n, HoTen hoTen)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (SoSanhTen(ds[i].hoTen, hoTen))
			dem++;
	}
	if (!dem)
		cout << "\nKhong tim thay ket qua. Vui long kiem tra lai thong tin vua nhap.";
	else
	{
		cout << "\nCo " << dem << " tim duoc tu tac gia\n";
		XuatTieuDe();
		cout << "\n";
		for (int i = 0; i < n; i++)
			if (SoSanhTen(ds[i].hoTen, hoTen))
				Xuat_1_TaiLieu(ds[i]);
		XuatKeNgangDoi();
	}
}

int ThongKe_TaiLieu_TheoLoai(TaiLieu *ds, int n, char *loai)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (_strcmpi(ds[i].loai, loai) == 0)
			dem++;
	return dem;
}

//void LietKe_TaiiLieu_TheoNamXB(TaiLieu *ds, int n, int namXB)
//{
//	cout << "\n\n\t\t\t================================= " << namXB << " ==============================\n\n";
//	XuatTieuDe();
//	cout << "\n";
//	for (int i = 0; i < n; i++)
//		if (ds[i].namXB == namXB)
//		{
//			cout << "\n";
//			Xuat_1_TaiLieu(ds[i]);
//		}
//	XuatKeNgangDoi();
//	cout << "\n\n";
//}

void XuatTaiLieu_1_namXB(TaiLieu *ds, int n, int namXB)
{
	XuatTieuDe();
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		if (ds[i].namXB == namXB)
		{
			cout << "\n";
			Xuat_1_TaiLieu(ds[i]);
		}
	}
	XuatKeNgangDoi();
	cout << "\n\n";
}

void LietKe_TaiLieu_TheoNamXB(TaiLieu *ds, int n)
{
	int namXB[MAX];
	int m = 0;
	int dau;
	for (int i = 0; i < n; i++)
	{
		dau = 1;
		for (int j = 0; j < m; j++)
		{
			if (ds[i].namXB == ds[j].namXB)
			{
				dau = 0;
				break;
			}
		}
		if (dau)
		{
			namXB[m] = ds[i].namXB;
			m++;
		}
	}
	for (int j = 0; j < m - 1; j++)
	{
		cout << "\n\n\t\t\t =============================== " << namXB[j] << " ===============================\n";
		XuatTaiLieu_1_namXB(ds, n, namXB[j]);
	}
}

void XemTaiLieuTheo_maTL(TaiLieu *ds, int n, char *maTL)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (_strcmpi(ds[i].maTL, maTL) == 0)
			dem++;
	}
	if (!dem)
		cout << "\nKhong tim thay ket qua. Vui long kiem tra lai du lieu.";
	else
	{
		cout << "\nCo " << dem << " tai lieu tu maTL: " << maTL;
		XuatTieuDe();
		cout << "\n";
		for (int i = 0; i < n; i++)
			if (_strcmpi(ds[i].maTL, maTL) == 0)
				Xuat_1_TaiLieu(ds[i]);
		XuatKeNgangDoi();
	}
}

void HoanVi(TaiLieu &a, TaiLieu &b)
{
	TaiLieu c = a;
	a = b;
	b = c;
}

void SapTangTheo_tuaDe(TaiLieu *ds, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (_strcmpi(ds[i].tuaDe, ds[j].tuaDe) > 0)
				HoanVi(ds[i], ds[j]);
		}
	}
}

