#define MAX 100
#define NGANGDOI '='
#define NGANGDON '-'

typedef unsigned short int Byte;

struct NgayThangNam
{
	Byte ngaySinh;
	Byte thangSinh;
	unsigned int namSinh;
};

struct NhanVien
{
	char maNV[8];
	char hoLot[21];
	char ten[8];
	NgayThangNam ntns;
	char diaChi[21];
	double luong;
};


void Nhap_1NV(NhanVien &p)
{
	cout << "\nMa nhan vien (dung 7 ky so): ";
	cin.ignore(MAX, '\n');
	gets_s(p.maNV, 8);

	cout << "\nHo va chu lot: ";
	gets_s(p.hoLot, 21);

	cout << "\nTen nhan vien: ";
	gets_s(p.ten, 7);

	cout << "\nNgay sinh: ";
	cin >> p.ntns.ngaySinh;

	cout << "\nThang sinh: ";
	cin >> p.ntns.thangSinh;

	cout << "\nNam sinh: ";
	cin >> p.ntns.namSinh;

	cout << "\nNhap dia chi: ";
	cin.ignore(MAX, '\n');
	gets_s(p.diaChi, 20);

	cout << "\nNhap luong: ";
	cin >> p.luong;
}

void Nhap_DSNV(NhanVien a[MAX], int &n)
{
	int i;
	cout << "\nNhap n = ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		system("cls");
		cout << "\nNhap thong tin cho nhan vien thu " << i + 1 << " : ";
		Nhap_1NV(a[i]);
	}
}

void XuatKeNgang()
{
	int i;
	cout << "\n";
	cout << setiosflags(ios::left) << "|";
	for (i = 1; i <= 76; i++)
		cout << NGANGDOI;
	cout << '|';
}

void XuatTieuDe()
{
	XuatKeNgang();
	cout << endl;
	cout << setiosflags(ios::left)
		<< '|'
		<< setw(8) << "Ma NV"
		<< '|'
		<< setw(16) << "Ho"
		<< setw(8) << "Ten"
		<< '|'
		<< setw(12) << "NTN sinh"
		<< '|'
		<< setw(16) << "Dia chi"
		<< '|'
		<< setw(12) << "Luong"
		<< '|';
	XuatKeNgang();
}

void Xuat_1NV(NhanVien p)
{
	cout << setiosflags(ios::left)
		<< '|'
		<< setw(8) << p.maNV
		<< '|'
		<< setw(16) << p.hoLot
		<< setw(8) << p.ten
		<< '|'
		<< setw(2) << p.ntns.ngaySinh
		<< '/'
		<< setw(2) << p.ntns.thangSinh
		<< '/'
		<< setw(6) << p.ntns.namSinh
		<< '|'
		<< setw(16) << p.diaChi
		<< '|'
		<< setw(12) << setiosflags(ios::fixed) << setprecision(2) << p.luong
		<< '|';
}

void Xuat_DSNV(NhanVien a[MAX], int n)
{
	int i;
	XuatTieuDe();
	for (i = 0; i < n; i++)
	{
		cout << endl;
		Xuat_1NV(a[i]);
	}
	XuatKeNgang();
}

//Hàm thêm nhân viên vào cuối danh sách
void ThemNhanVien_Cuoi(NhanVien a[MAX], int &n, NhanVien p)
{
	a[n++] = p;
}

//Hàm xóa nhân viên theo mã số (theo mã nhân viên)
void XoaNhanVien_MaNV(NhanVien a[MAX], int &n, char maNV[8])
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		if (strcmp(a[i].maNV, maNV) == 0)
			break;
	}
	if (i == n)
	{
		cout << "\nKhong co nhan vien nao trong danh sach co ma so " << maNV;
		return;
	}
	for (j = 1; j < n; j++)
		a[j - 1] = a[j];
	n--;
}

//Hàm sửa thông tin nhân viên theo mã số (theo mã nhân viên)
void SuaNhanVien_MaNV(NhanVien a[MAX], int &n, char maNV[8])
{
	int i;
	char tl;
	for (i = 0; i < n; i++)
		if (strcmp(a[i].maNV, maNV) == 0)
			break;
	if (i == n)
	{
		cout << "\nKhong co nhan vien nao trong danh sach co ma so " << maNV;
		return;
	}
	cout << "\nSua thong tin nhan vien co ma so : " << maNV;
	cout << "\nCo sua ma nhan vien khong ? nhan k neu khong: ";
	tl = _getch();
	if (tl != 'k' && tl != 'K')
	{
		cout << "\nMa Nhan Vien : ";
		_flushall();
		gets_s(a[i].maNV, 8);
	}
	cout << "\nCo sua ho va chu lot khong ? nhan k neu khong: ";
	tl = _getch();
	if (tl != 'k' && tl != 'K')
	{
		cout << "\nHo va chu lot: ";
		_flushall();
		gets_s(a[i].hoLot, 21);
	}
	cout << "\nCo sua ten khong ? nhan k neu khong: ";
	tl = _getch();
	if (tl != 'k' && tl != 'K')
	{
		cout << "\nTen nhan vien: ";
		_flushall();
		gets_s(a[i].ten, 8);
	}
	cout << "\nCo sua ngay sinh khong ? nhan k neu khong: ";
	tl = _getch();
	if (tl != 'k' && tl != 'K')
	{
		cout << "\nNgay sinh: ";
		_flushall();
		cin >> a[i].ntns.ngaySinh;
	}
	cout << "\nCo sua thang sinh khong ? nhan k neu khong: ";
	tl = _getch();
	if (tl != 'k' && tl != 'K')
	{
		cout << "\nThang sinh: ";
		_flushall();
		cin >> a[i].ntns.thangSinh;
	}
	cout << "\nCo sua nam sinh khong ? nhan k neu khong: ";
	tl = _getch();
	if (tl != 'k' && tl != 'K')
	{
		cout << "\nNam sinh: ";
		_flushall();
		cin >> a[i].ntns.namSinh;
	}
	cout << "\nCo sua dia chi khong ? nhan k neu khong: ";
	tl = _getch();
	if (tl != 'k' && tl != 'K')
	{
		cout << "\nNhap dia chi: ";
		_flushall();
		gets_s(a[i].diaChi, 20);
	}
	cout << "\nCo sua luong khong ? nhan k neu khong: ";
	tl = _getch();
	if (tl != 'k' && tl != 'K')
	{
		cout << "\nNhap luong: ";
		_flushall();
		cin >> a[i].luong;
	}
}

/*Hàm tìm nhân viên the mã số (theo mã nhân viên) :
Tim nhan vien theo ma so
Khong co: tra ve -1
Co : tra ve i (chi so bieu dien nhan vien tim duoc trong danh sach)*/
int TimNhanVien_MaNV(NhanVien a[MAX], int &n, char maNV[8])
{
	int ketQua = -1;
	for (int i = 0; i < n; i++)
		if (strcmp(a[i].maNV, maNV) == 0)
		{
			ketQua = i;
			break;
		}
	return ketQua;
}

//Hàm tìm nhân viên theo tên (theo tên nhân viên)
void TimNhanVien_Ten(NhanVien a[MAX], int &n, char ten[7])
{
	//Để lưu trữ có bao nhiêu nhân viên có tên như vậy
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (_strcmpi(a[i].ten, ten) == 0)
			dem++;
	if (!dem)
		cout << "\nTrong danh sach khong co nhan vien nao co ten la " << ten;
	else
	{
		cout << "\nCo " << dem << " nhan vien ten " << ten
			<< ", voi thong tin chi tiet nhu sau :\n";
		XuatTieuDe();
			for (int i = 0; i < n; i++)
				if (_strcmpi(a[i].ten, ten) == 0)
				{
					cout << endl;
					Xuat_1NV(a[i]);
				}
		XuatKeNgang();
	}
}

void HoanVi(NhanVien &a, NhanVien &b)
{
	NhanVien t;
	t = a;
	a = b;
	b = t;
}

//Hàm sắp danh sách tăng dần theo mã số (theo mã nhân viên)
void SapTang_MaNV(NhanVien a[MAX], int &n)
{
	//Tang theo ma nhan vien
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maNV, a[j].maNV)> 0)
				HoanVi(a[i], a[j]);
}

//Hàm sắp danh sách tăng dần theo Tên - Họ - Lương
void SapTang_Ten_Ho_Luong(NhanVien a[MAX], int n)
{
	int i, j;
	//Tang theo ten
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (_strcmpi(a[i].ten, a[j].ten)> 0)
				HoanVi(a[i], a[j]);

	//Ten trung, tang theo ho
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (_strcmpi(a[i].ten, a[j].ten) == 0)
				if (_strcmpi(a[i].hoLot, a[j].hoLot) > 0)
					HoanVi(a[i], a[j]);

	//Ten va ho trung, tang theo luong
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (_strcmpi(a[i].ten, a[j].ten) == 0 && _strcmpi(a[i].hoLot, a[j].hoLot) == 0)
				if (a[i].luong > a[j].luong)
					HoanVi(a[i], a[j]);
}

//Hàm tính tổng lương
double TinhTongLuong(NhanVien a[MAX], int n)
{
	int i;
	double tong = 0;
	for (i = 0; i < n; i++)
		tong += a[i].luong;
	return tong;
}

//Hàm liệt kê các nhân viên có lương >= x
void Xuat_DSNV_Luong_KhongNhoHon_x(NhanVien a[MAX], int n, double x)
{
	int i, kq = 0;
	for (i = 0; i < n; i++)
		if (a[i].luong >= x)
			kq++;
	if (!kq)
		cout << "\nKhong co nhan vien nao co luong >= " << x;
	else
	{
		cout << "\n\nCo " << kq << " nhan vien co luong >= " << x
			<< ", voi thong tin chi tiet nhu sau:";
		XuatTieuDe();
		for (i = 0; i < n; i++)
		{
			if (a[i].luong >= x)
			{
				cout << endl;
				Xuat_1NV(a[i]);
			}
		}
		XuatKeNgang();
	}
}

//Hàm liệt kê các nhân viên có năm sinh trong khoảng[u, v], u <= v
void Xuat_DSNV_NamSinh_u_v(NhanVien a[MAX], int n, unsigned int u, unsigned int v)
{
	int i, kq = 0;
	for (i = 0; i < n; i++)
		if (u <= a[i].ntns.namSinh && a[i].ntns.namSinh <= v)
			kq++;
	if (!kq)
		cout << "\nKhong co nhan vien nao co nam sinh trong khoang [" << u << ", " << v << "]";
	else
	{
		cout << "\n\nCo " << kq << " nhan vien co nam sinh trong khoang [" << u
			<< ",..," << v << "] : ";
		XuatTieuDe();
		for (i = 0; i < n; i++)
		{
			if (u <= a[i].ntns.namSinh && a[i].ntns.namSinh <= v)
			{
				cout << endl;
				Xuat_1NV(a[i]);
			}
		}
		XuatKeNgang();
	}
}

//Chen 1 nhan vien
void Chen_NV(char maNV[8], char hoLot[15], char ten[7], Byte ngaySinh, Byte thangSinh,
	unsigned int namSinh, char diaChi[15], double luong, NhanVien a[MAX], int &n)
{
	if (n < MAX)
	{
		strcpy_s(a[n].maNV, 8, maNV);
		strcpy_s(a[n].hoLot, 15, hoLot);
		strcpy_s(a[n].ten, 7, ten);
		a[n].ntns.ngaySinh = ngaySinh;
		a[n].ntns.thangSinh = thangSinh;
		a[n].ntns.namSinh = namSinh;
		strcpy_s(a[n].diaChi, 15, diaChi);
		a[n].luong = luong;
		n++;
	}
}

//Tao Danh Sach nhan vien
void TaoDanhSachNhanVien(NhanVien a[MAX], int &n)
{
	Chen_NV("1234507", "Nguyen Van", "Tan", 1, 1, 1990, "Da Lat", 20345678.0, a, n);
	Chen_NV("1205507", "Tran Minh", "Hoang", 10, 10, 1980, "Qui Nhon", 14345678.0, a, n);
	Chen_NV("2234067", "Truong", "Hoang", 10, 12, 1980, "Da Lat", 10342678.0, a, n);
	Chen_NV("2134167", "Le Tuan", "Ban", 10, 1, 1975, "Quang Nam", 18349678.0, a, n);
	Chen_NV("1135067", "Tran Minh", "Ban", 5, 6, 1977, "Phu Yen", 12345978.0, a, n);
	Chen_NV("1034007", "Truong", "Hoang", 21, 12, 1987, "Da Lat", 15348678.0, a, n);
	Chen_NV("1130160", "Vo Tuan", "Trong", 1, 11, 1985, "Qui Nhon", 20341178.0, a, n);
	Chen_NV("1235567", "Hoang Van", "Tan", 15, 12, 1970, "Phu Yen", 22300970.0, a, n);
	Chen_NV("1034327", "Tran Van", "Vu", 11, 11, 1982, "Da Lat", 16348888.0, a, n);
	Chen_NV("1034467", "Hoang Trong", "Ban", 12, 1, 1980, "Nha Trang", 14365698.0, a, n);
	Chen_NV("1134467", "Van Quoc", "Cuong", 1, 10, 1960, "Nha Trang", 24300000.0, a, n);
	Chen_NV("1533407", "Truong", "Hoang", 1, 12, 1967, "Da Nang", 16340000.0, a, n);
}