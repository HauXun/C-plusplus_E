#define MAX 100
#define NGANGDOI '='
#define NGANGDON '-'

typedef char String[MAX];

struct SinhVien
{
	char maSV[8];
	char hoLot[21];
	char ten[8];
	unsigned int namSinh;
	char lop[10];
	double DTB;
	char xepLoai[5];
};

void Nhap_1SV(SinhVien &a)
{
	cout << "\nMSSV (dung 7 ky so): ";
	_flushall();
	gets_s(a.maSV, 8);

	cout << "\nHo va chu lot: ";
	_flushall();
	gets_s(a.hoLot, 21);

	cout << "\nTen sinh vien: ";
	_flushall();
	gets_s(a.ten, 8);

	cout << "\nNam sinh: ";
	_flushall();
	cin >> a.namSinh;

	cout << "\nLop: ";
	_flushall();
	gets_s(a.lop, 10);

	cout << "\nNhap diem trung binh: ";
	cin >> a.DTB;
}

void Nhap_DSSV(SinhVien a[MAX], int &n)
{
	cout << "\nNhap so sinh vien: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		system("cls");
		cout << "\nNhap thong tin cho sinh vien thu " << i + 1 << ": ";
		Nhap_1SV(a[i]);
	}
}

void XuatKeNgang()
{
	cout << "\n";
	cout << setiosflags(ios::left) << ':';
	for (int i = 0; i <= 83; i++)
	{
		cout << NGANGDOI;
	}
	cout << ':';
}

void XuatTieuDe()
{
	XuatKeNgang();
	cout << "\n";
	cout << setiosflags(ios::left) << ':'
		<< setw(10) << "MSSV" << ':'
		<< setw(24) << "Ho" << setw(8) << "Ten" << ':'
		<< setw(12) << "Nam sinh" << ':'
		<< setw(8) << "Lop" << ':'
		<< setw(8) << "DTB" << ':'
		<< setw(8) << "XLoai" << ':';
	XuatKeNgang();
}

void Xuat_1SV(SinhVien a)
{
	cout << "\n";
	cout << setiosflags(ios::left) << ':'
		<< setw(10) << a.maSV << ':'
		<< setw(24) << a.hoLot << setw(8) << a.ten << ':'
		<< setw(12) << a.namSinh << ':'
		<< setw(8) << a.lop << ':'
		<< setw(8) << setiosflags(ios::fixed) << setprecision(1) << a.DTB << ':'
		<< setw(8) << a.xepLoai << ':';
}

void Xuat_DSNV(SinhVien a[MAX], int n)
{
	XuatTieuDe();
	for (int i = 0; i < n; i++)
	{
		Xuat_1SV(a[i]);
		if ((i + 1) % 5 == 0)
			XuatKeNgang();
	}
	XuatKeNgang();
}

void XuatSinhVien_1_Lop(SinhVien a[MAX], int n, char lop[])
{
	XuatTieuDe();
	for (int i = 0; i < n; i++)
	{
		if (_strcmpi(a[i].lop, lop) == 0)
			Xuat_1SV(a[i]);
	}
	XuatKeNgang();
}

void XuatSinhVienTheoLop(SinhVien a[MAX], int n)
{
	String lop[MAX];
	int m = 0;
	int dau;

	for (int i = 0; i < n; i++)
	{
		dau = 1;
		for (int j = 0; j < m; j++)
			if (_strcmpi(a[i].lop, lop[j]) == 0)
			{
				dau = 0;
				break;
			}

		if (dau)
		{
			strcpy_s(lop[m], a[i].lop);
			m++;
		}
	}

	// lop[ctk39, ctk38, ctk37]

	for (int j = 0; j < m; j++)
	{
		cout << "\n\n =============================== " << lop[j] << " ===============================\n";
		XuatSinhVien_1_Lop(a, n, lop[j]);
	}
}

void HoanVi(SinhVien &a, SinhVien &b)
{
	SinhVien c = a;
	a = b;
	b = c;
}

void GiamDan_DTB(SinhVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i].DTB < a[j].DTB)
				HoanVi(a[i], a[j]);
		}
	}
}

void TangDan_Ten_MSSV(SinhVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (_strcmpi(a[i].ten, a[j].ten) > 0)
				HoanVi(a[i], a[j]);
			if (_strcmpi(a[i].ten, a[j].ten) == 0)
			{
				if (_strcmpi(a[i].maSV, a[j].maSV) > 0)
					HoanVi(a[i], a[j]);
			}
		}
	}
}

void TimTenSinhVien(SinhVien a[MAX], int n, char ten[10])
{
	int dem = 0;

	for (int i = 0; i < n; i++)
	{		{
			dem++;
		}
	}

	if (dem == 0)
	{
		cout << "\nTrong danh sach khong co ten " << ten << ".";
	}
	else
	{
		XuatTieuDe();
		for (int i = 0; i < n; i++)
			if (_strcmpi(a[i].ten, ten) == 0)
			{
				cout << "\n";
				Xuat_1SV(a[i]);
			}
		XuatKeNgang();
	}
}

SinhVien DiemTBCaoNhat(SinhVien a[MAX], int n)
{
	SinhVien kq = a[0];

	for (int i = 1; i < n; i++)
		if (kq.DTB < a[i].DTB)
			kq = a[i];

	return kq;
}

void XepLoaiSinhVien(SinhVien a[MAX], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i].DTB < 4)
			strcpy_s(a[i].xepLoai, "Kem");
		else if (a[i].DTB < 5.5)
			strcpy_s(a[i].xepLoai, "Yeu");
		else if (a[i].DTB < 7)
			strcpy_s(a[i].xepLoai, "TB");
		else if (a[i].DTB < 8.5)
			strcpy_s(a[i].xepLoai, "Kha");
		else if (a[i].DTB <= 10)
			strcpy_s(a[i].xepLoai, "Gioi");
	}
}

