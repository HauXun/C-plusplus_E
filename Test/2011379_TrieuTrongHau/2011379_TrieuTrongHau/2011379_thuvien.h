#define MAX 100

struct NhanVien
{
	char maNV[8];
	char hoTen[21];
	int ngay;
	int thang;
	int nam;
	char queQuan[15];
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
			in >> a[n].hoTen;
			in >> a[n].ngay;
			in >> a[n].thang;
			in >> a[n].nam;
			in >> a[n].queQuan;
			in >> a[n].luong;
			n++;
		}
		in.close();
		return 1;
	}
}

void XuatKeNgangDon()
{
	cout << "\n";
	cout<< ':';
	for (int i = 1; i <= 91; i++)
		cout << '-';
	cout << ':';
}

void XuatKeNgangDoi()
{
	cout << "\n";
	cout << ':';
	for (int i = 1; i <= 91; i++)
		cout << '=';
	cout << ':';
}

void XuatTieuDe()
{
	XuatKeNgangDoi();
	cout << "\n";
	cout << setiosflags(ios::left) << ':'
		<< setw(20) << "MSSV" << ':'
		<< setw(21) << "Ho va ten" << ':'
		<< setw(4) << "N" << ':'
		<< setw(4) << "T" << ':'
		<< setw(6) << "N" << ':'
		<< setw(15) << "Que Quan" << ':'
		<< setiosflags(ios::fixed) << setprecision(2) << setw(15) << "Luong" << ':';
	XuatKeNgangDoi();
}

void Xuat1_NhanVien(NhanVien a)
{
	cout << setiosflags(ios::left) << ':';
	cout << setw(20) << a.maNV << ':'
		<< setw(21) << a.hoTen << ':'
		<< setw(4) << a.ngay << ':'
		<< setw(4) << a.thang << ':'
		<< setw(6) << a.nam << ':'
		<< setw(15) << a.queQuan << ':'
		<< setiosflags(ios::fixed) << setprecision(2) << setw(15) << a.luong << ':';
	cout << "\n";
}

void XuatDSNV(NhanVien a[MAX], int n)
{
	XuatTieuDe();
	for (int i = 0; i < n; i++)
	{
		cout << "\n\n";
		Xuat1_NhanVien(a[i]);
		if ((i + 1) % 3 == 0)
			XuatKeNgangDon();	
	}
	XuatKeNgangDoi();
}

void LietKeSinhVien_Nam(NhanVien a[MAX], int n, int nam)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i].nam == nam)
			dem++;
	if (!dem)
		cout << "\nKhong tim thay sinh vien sinh nam " << nam << " trong danh sach. Vui long kiem tra lai du lieu !";
	else
	{
		cout << "\nCo " << dem << " nhan vien sinh nam" << nam << " trong danh sach!";
		XuatTieuDe();
		cout << "\n\n";
		for (int i = 0; i < n; i++)
			if (a[i].nam == nam)
				Xuat1_NhanVien(a[i]);
		XuatKeNgangDoi();
	}
}

double LuongThapNhat(NhanVien a[MAX], int n)
{
	double Min;
	Min = a[0].luong;
	for (int i = 0; i < n; i++)
		if (Min > a[i].luong)
			Min = a[i].luong;
	return Min;
}

void XuatNhanVien_LuongThapNhat(NhanVien a[MAX], int n)
{
	double Min;
	Min = a[0].luong;
	for (int i = 0; i < n; i++)
		if (Min > a[i].luong)
			Min = a[i].luong;

	XuatTieuDe();
	cout << "\n\n";
	for (int i = 0; i < n; i++)
		if (a[i].luong == Min)
			Xuat1_NhanVien(a[i]);
	XuatKeNgangDoi();
}

void XoaNhanVien_LuongThapNhat(NhanVien a[MAX], int &n)
{
	int m = 0, min;
	min = LuongThapNhat(a, n);

	for (int i = 0; i < n; i++)
		if (a[i].luong != min)
		{
			a[m] = a[i];
			m++;
		}
	n = m;
}

int XoaNhanVien_QueQuan(NhanVien a[MAX], int &n, char queQuan[15])
{
	int dau = 0;
	for (int i = 0; i < n; i++)
	{
		if (_strcmpi(a[i].queQuan, queQuan) == 0)
		{
			dau = 1;
			for (int j = i; j < n - 1; j++)
			{
				a[i] = a[j + 1];
			}
			n--;
		}
	}
	return dau;
}

int XoaNhanVien_QueQuan1(NhanVien a[MAX], int &n, char queQuan[15])
{
	int m = 0;
	int dau = 0;
	for (int i = 0; i < n; i++)
		if (_strcmpi(a[i].queQuan, queQuan) != 0)
		{
			dau = 1;
			a[m] = a[i];
			m++;
		}
	n = m;
	return dau;
}