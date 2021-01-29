#define MAX 100

struct HoTen
{
	char Ho[8];
	char hoLot[8];
	char Ten[8];
};

struct NgayThangNam
{
	int ngay;
	int thang;
	int nam;
};

struct NhanVien
{
	char maNV[8];
	HoTen hoTen;
	NgayThangNam ngayThangNam;
	char diaChi[15];
	double luong;
};

int TaoDanhSachNhanVien(NhanVien a[MAX], int &n, char filename[MAX])
{
	ifstream in(filename);
	if (!in)
	{
		return 0;
	}
	else
	{
		n = 0;
		while (!in.eof())
		{
			in >> a[n].maNV;
			in >> a[n].hoTen.Ho;
			in >> a[n].hoTen.hoLot;
			in >> a[n].hoTen.Ten;
			in >> a[n].ngayThangNam.ngay;
			in >> a[n].ngayThangNam.thang;
			in >> a[n].ngayThangNam.nam;
			in >> a[n].diaChi;
			in >> a[n].luong;
			n++;
		}
		in.close();
		return 1;
	}
}

void XuatKeNgangDoi()
{
	for (int i = 0; i < 82; i++)
		cout << "=";
}

void XuatKeNgangDon()
{
	for (int i = 0; i < 82; i++)
		cout << "=";
}

void XuatTieuDe()
{
	XuatKeNgangDoi();
	cout << "\n";
	cout << setiosflags(ios::left)
		<< setw(11) << "Ma NV"
		<< setw(8) << "Ho"
		<< setw(8) << "hoLot"
		<< setw(8) << "Ten"
		<< setw(12) << "nTNsinh"
		<< setw(17) << "Dia Chi"
		<< setw(13) << "Luong";
	cout << "\n";
	XuatKeNgangDoi();
}

void Xuat_1_NhanVien(NhanVien a)
{
	cout << setiosflags(ios::left)
		<< setw(11) << a.maNV
		<< setw(8) << a.hoTen.Ho
		<< setw(8) << a.hoTen.hoLot
		<< setw(8) << a.hoTen.Ten
		<< setw(2) << a.ngayThangNam.ngay << "/"
		<< setw(2) << a.ngayThangNam.thang << "/"
		<< setw(6) << a.ngayThangNam.nam
		<< setw(17) << a.diaChi
		<< setiosflags(ios::fixed) << setprecision(2) << setw(13) << a.luong;
	cout << "\n";
}

void XuatDSNV(NhanVien a[MAX], int n)
{
	XuatTieuDe();
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		Xuat_1_NhanVien(a[i]);
	}
	XuatKeNgangDoi();
}