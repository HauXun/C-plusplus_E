#define MAX 100

struct HoTen
{
	char ho[8];
	char hoLot[8];
	char ten[8];
};

struct NgayThangNam
{
	int ngay;
	int thang;
	int nam;
};

struct NhanVien
{
	char maSo[8];
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
			in >> a[n].maSo;
			in >> a[n].hoTen.ho;
			in >> a[n].hoTen.hoLot;
			in >> a[n].hoTen.ten;
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

void XuatDongKeNgangDoi()
{
	cout << "\n";
	cout << ':';
	for (int i = 0; i <= 82; i++)
		cout << '=';
	cout << ':';
}

void XuatDongKeNgangDon()
{
	cout << "\n";
	cout << ':';
	for (int i = 0; i <= 82; i++)
		cout << '-';
	cout << ':';
}

void XuatTieuDe()
{
	XuatDongKeNgangDoi();
	cout << "\n";
	cout << setiosflags(ios::left) << ':'
		<< setw(11) << "Ma NV" << ':'
		<< setw(8) << "Ho" << ':'
		<< setw(8) << "hoLot" << ':'
		<< setw(8) << "Ten" << ':'
		<< setw(12) << "nTNsinh" << ':'
		<< setw(17) << "Dia chi" << ':'
		<< setw(13) << "Luong" << ':';
	XuatDongKeNgangDoi();
}

void Xuat_1_NhanVien(NhanVien a)
{
	cout << setiosflags(ios::left) << ':';
	cout << setw(11) << a.maSo << ':'
		<< setw(8) << a.hoTen.ho << ':'
		<< setw(8) << a.hoTen.hoLot << ':'
		<< setw(8) << a.hoTen.ten << ':'
		<< setw(2) << a.ngayThangNam.ngay << ':'
		<< setw(2) << a.ngayThangNam.thang << ':'
		<< setw(6) << a.ngayThangNam.nam << ':'
		<< setw(17) << a.diaChi << ':'
		<< setiosflags(ios::fixed) << setprecision(2) << setw(13) << a.luong << ':';
	cout << "\n";
}

void XuatDSNV(NhanVien a[MAX], int n)
{
	XuatTieuDe();
	for (int i = 0; i < n; i++)
	{
		cout << "\n\n";
		Xuat_1_NhanVien(a[i]);
		if ((i + 1) % 3 == 0)
			XuatDongKeNgangDon();
	}
	XuatDongKeNgangDoi();
}

void XuatNhanVien_MaNV(NhanVien a[MAX], int n, char maSo[11])
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (_strcmpi(a[i].maSo, maSo) == 0)
			dem++;
	if (!dem)
		cout << "\nKhong tim thay nhan vien co ma so " << maSo << " vui long kiem tra lai.";
	else
	{
		cout << "\nCo " << dem << " nhan vien co ma so " << maSo << " trong danh sach";
		XuatTieuDe();
		for (int i = 0; i < n; i++)
			if (_strcmpi(a[i].maSo, maSo) == 0)
			{
				cout << "\n\n";
				Xuat_1_NhanVien(a[i]);
				if ((i + 1) % 3 == 0)
					XuatDongKeNgangDon();
			}
		XuatDongKeNgangDoi();
	}
}

void XuatNhanVien_HoVaTen(NhanVien a[MAX], int n, char Ho[MAX], char hoLot[MAX], char Ten[MAX])
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (_strcmpi(a[i].hoTen.ho, Ho) == 0)
			if (_strcmpi(a[i].hoTen.hoLot, hoLot) == 0)
				if (_strcmpi(a[i].hoTen.ten, Ten) == 0)
					dem++;
	if (!dem)
		cout << "\nKhong tim thay nhan vien co ten " << Ho << hoLot << Ten << " trong danh sach. Vui long kiem tra lai.";
	else
	{
		cout << "\nCo " << dem << " nhan vien co ten " << Ho << hoLot << Ten << " trong danh sach";
		XuatTieuDe();
		for (int i = 0; i < n; i++)
			if (_strcmpi(a[i].hoTen.ho, Ho) == 0)
				if (_strcmpi(a[i].hoTen.hoLot, hoLot) == 0)
					if (_strcmpi(a[i].hoTen.ten, Ten) == 0)
					{
						cout << "\n\n";
						Xuat_1_NhanVien(a[i]);
						if ((i + 1) % 3 == 0)
							XuatDongKeNgangDon();
					}
		XuatDongKeNgangDoi();
	}
}

void XuatNhanVien_NamSinh(NhanVien a[MAX], int n, int namSinh)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i].ngayThangNam.nam == namSinh)
			dem++;
	if (!dem)
		cout << "\nKhong tim thay nhan vien co nam sinh " << namSinh << " vui long kiem tra lai.";
	else
	{
		cout << "\nCo " << dem << " nhan vien co nam sinh " << namSinh << " trong danh sach";
		XuatTieuDe();
		for (int i = 0; i < n; i++)
			if (a[i].ngayThangNam.nam == namSinh)
			{
				cout << "\n\n";
				Xuat_1_NhanVien(a[i]);
				if ((i + 1) % 3 == 0)
					XuatDongKeNgangDon();
			}
		XuatDongKeNgangDoi();
	}
}

void XuatNhanVien_DiaChi(NhanVien a[MAX], int n, char diaChi[MAX])
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (_strcmpi(a[i].diaChi, diaChi) == 0)
			dem++;
	if (!dem)
		cout << "\nKhong tim thay nhan vien co dia chi " << diaChi << " vui long kiem tra lai.";
	else
	{
		cout << "\nCo " << dem << " nhan vien co dia chi " << diaChi << " trong danh sach";
		XuatTieuDe();
		for (int i = 0; i < n; i++)
			if (_strcmpi(a[i].diaChi, diaChi) == 0)
			{
				cout << "\n\n";
				Xuat_1_NhanVien(a[i]);
				if ((i + 1) % 3 == 0)
					XuatDongKeNgangDon();
			}
		XuatDongKeNgangDoi();
	}
}

double LuongThapNhat(NhanVien a[MAX], int n)
{
	double min;
	min = a[0].luong;
	for (int i = 0; i < n; i++)
		if (min > a[i].luong)
			min = a[i].luong;
	return min;
}

double LuongCaoNhat(NhanVien a[MAX], int n)
{
	double max;
	max = a[0].luong;
	for (int i = 0; i < n; i++)
		if (max < a[i].luong)
			max = a[i].luong;
	return max;
}

void XuatNhanVien_LuongThapNhat(NhanVien a[MAX], int n)
{
	double min;
	int dem = 0;
	min = LuongThapNhat(a, n);
	for (int i = 0; i < n; i++)
		if (a[i].luong == min)
			dem++;
	if (!dem)
		cout << "\nKhong tim thay nhan vien co luong thap nhat vui long kiem tra lai.";
	else
	{
		cout << "\nCo " << dem << " nhan vien co luong thap nhat trong danh sach";
		XuatTieuDe();
		for (int i = 0; i < n; i++)
			if (a[i].luong == min)
			{
				cout << "\n\n";
				Xuat_1_NhanVien(a[i]);
				if ((i + 1) % 3 == 0)
					XuatDongKeNgangDon();
			}
		XuatDongKeNgangDoi();
	}
}

void XuatNhanVien_LuongCaoNhat(NhanVien a[MAX], int n)
{
	double max;
	int dem = 0;
	max = LuongCaoNhat(a, n);
	for (int i = 0; i < n; i++)
		if (a[i].luong == max)
			dem++;
	if (!dem)
		cout << "\nKhong tim thay nhan vien co luong cao nhat vui long kiem tra lai.";
	else
	{
		cout << "\nCo " << dem << " nhan vien co luong cao nhat trong danh sach";
		XuatTieuDe();
		for (int i = 0; i < n; i++)
			if (a[i].luong == max)
			{
				cout << "\n\n";
				Xuat_1_NhanVien(a[i]);
				if ((i + 1) % 3 == 0)
					XuatDongKeNgangDon();
			}
		XuatDongKeNgangDoi();
	}
}

void XuatNhanVien_Luong_LonHon_X(NhanVien a[MAX], int n, double x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i].luong >= x)
			dem++;
	if (!dem)
		cout << "\nKhong co nhan vien nao co luong >= " << x;
	else
	{
		cout << "\n\nCo " << dem << " nhan vien co luong >= " << x << ", voi thong tin chi tiet nhu sau: ";
		XuatTieuDe();
		for (int i = 0; i < n; i++)
			if (a[i].luong >= x)
			{
				cout << "\n\n";
				Xuat_1_NhanVien(a[i]);
				if ((i + 1) % 3 == 0)
					XuatDongKeNgangDon();
			}
		XuatDongKeNgangDoi();
	}
}

void XuatNhanVien_Luong_NhoHon_X(NhanVien a[MAX], int n, double x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i].luong <= x)
			dem++;
	if (!dem)
		cout << "\nKhong co nhan vien nao co luong <= " << x;
	else
	{
		cout << "\n\nCo " << dem << " nhan vien co luong <= " << x << ", voi thong tin chi tiet nhu sau: ";
		XuatTieuDe();
		for (int i = 0; i < n; i++)
			if (a[i].luong <= x)
			{
				cout << "\n\n";
				Xuat_1_NhanVien(a[i]);
				if ((i + 1) % 3 == 0)
					XuatDongKeNgangDon();
			}
		XuatDongKeNgangDoi();
	}
}

void XuatNhanVien_MinToMAX(NhanVien a[MAX], int n, int min, int max)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (min <= a[i].ngayThangNam.nam && a[i].ngayThangNam.nam <= max)
			dem++;
	if (!dem)
		cout << "\nKhong co nhan vien nao co nam sinh trong khoang [" << min << ".." << max << "]";
	else
	{
		cout << "\n\nCo " << dem << " nhan vien co nam sinh trong khoang [" << min << ".." << max << "] : ";
		XuatTieuDe();
		for (int i = 0; i < n; i++)
			if (min <= a[i].ngayThangNam.nam && a[i].ngayThangNam.nam <= max)
			{
				cout << "\n\n";
				Xuat_1_NhanVien(a[i]);
				if ((i + 1) % 3 == 0)
					XuatDongKeNgangDon();
			}
		XuatDongKeNgangDoi();
	}
}

void HoanVi(NhanVien &a, NhanVien &b)
{
	NhanVien c;
	c = a;
	a = b;
	b = c;
}

void SapTang_MSNV(NhanVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSo, a[j].maSo) > 0)
				HoanVi(a[i], a[j]);
}

void SapTang_HoVaTen(NhanVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) > 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) > 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) > 0)
				HoanVi(a[i], a[j]);
}

void SapTang_NamSinh(NhanVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].ngayThangNam.nam > a[j].ngayThangNam.nam)
				HoanVi(a[i], a[j]);
}

void SapTang_DiaChi(NhanVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].diaChi, a[j].diaChi) > 0)
				HoanVi(a[i], a[j]);
}

void SapTang_Luong(NhanVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].luong > a[j].luong)
				HoanVi(a[i], a[j]);
}

void SapGiam_MSNV(NhanVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSo, a[j].maSo) < 0)
				HoanVi(a[i], a[j]);
}

void SapGiam_HoVaTen(NhanVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) < 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) < 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) < 0)
				HoanVi(a[i], a[j]);
}

void SapGiam_NamSinh(NhanVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].ngayThangNam.nam < a[j].ngayThangNam.nam)
				HoanVi(a[i], a[j]);
}

void SapGiam_DiaChi(NhanVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].diaChi, a[j].diaChi) < 0)
				HoanVi(a[i], a[j]);
}

void SapGiam_Luong(NhanVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].luong < a[j].luong)
				HoanVi(a[i], a[j]);
}

void SapTang_Chuan(NhanVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSo, a[j].maSo) > 0)
				HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSo, a[j].maSo) == 0)
				if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) > 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) > 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) > 0)
					HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSo, a[j].maSo) == 0)
				if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) == 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) == 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) == 0)
					if (a[i].ngayThangNam.nam > a[j].ngayThangNam.nam)
						HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSo, a[j].maSo) == 0)
				if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) == 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) == 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) == 0)
					if (a[i].ngayThangNam.nam == a[j].ngayThangNam.nam)
						if (_strcmpi(a[i].diaChi, a[j].diaChi) > 0)
							HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSo, a[j].maSo) == 0)
				if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) == 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) == 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) == 0)
					if (a[i].ngayThangNam.nam == a[j].ngayThangNam.nam)
						if (_strcmpi(a[i].diaChi, a[j].diaChi) > 0)
							if (a[i].luong > a[j].luong)
								HoanVi(a[i], a[j]);
}

void SapTang_NguocChuan(NhanVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].luong > a[j].luong)
				HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].luong == a[j].luong)
				if (_strcmpi(a[i].diaChi, a[j].diaChi) > 0)
					HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].luong == a[j].luong)
				if (_strcmpi(a[i].diaChi, a[j].diaChi) == 0)
					if (a[i].ngayThangNam.nam > a[j].ngayThangNam.nam)
						HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].luong == a[j].luong)
				if (_strcmpi(a[i].diaChi, a[j].diaChi) == 0)
					if (a[i].ngayThangNam.nam == a[j].ngayThangNam.nam)
						if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) > 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) > 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) > 0)
							HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].luong == a[j].luong)
				if (_strcmpi(a[i].diaChi, a[j].diaChi) == 0)
					if (a[i].ngayThangNam.nam == a[j].ngayThangNam.nam)
						if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) == 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) == 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) == 0)
							if (_strcmpi(a[i].maSo, a[j].maSo) > 0)
								HoanVi(a[i], a[j]);
}


void SapGiam_Chuan(NhanVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSo, a[j].maSo) < 0)
				HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSo, a[j].maSo) == 0)
				if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) < 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) < 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) < 0)
					HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSo, a[j].maSo) == 0)
				if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) == 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) == 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) == 0)
					if (a[i].ngayThangNam.nam < a[j].ngayThangNam.nam)
						HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSo, a[j].maSo) == 0)
				if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) == 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) == 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) == 0)
					if (a[i].ngayThangNam.nam == a[j].ngayThangNam.nam)
						if (_strcmpi(a[i].diaChi, a[j].diaChi) < 0)
							HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSo, a[j].maSo) == 0)
				if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) == 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) == 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) == 0)
					if (a[i].ngayThangNam.nam == a[j].ngayThangNam.nam)
						if (_strcmpi(a[i].diaChi, a[j].diaChi) == 0)
							if (a[i].luong < a[j].luong)
								HoanVi(a[i], a[j]);
}

void SapGiam_NguocChuan(NhanVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].luong < a[j].luong)
				HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].luong == a[j].luong)
				if (_strcmpi(a[i].diaChi, a[j].diaChi) < 0)
					HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].luong == a[j].luong)
				if (_strcmpi(a[i].diaChi, a[j].diaChi) == 0)
					if (a[i].ngayThangNam.nam < a[j].ngayThangNam.nam)
						HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].luong == a[j].luong)
				if (_strcmpi(a[i].diaChi, a[j].diaChi) == 0)
					if (a[i].ngayThangNam.nam == a[j].ngayThangNam.nam)
						if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) < 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) < 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) < 0)
							HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].luong == a[j].luong)
				if (_strcmpi(a[i].diaChi, a[j].diaChi) == 0)
					if (a[i].ngayThangNam.nam == a[j].ngayThangNam.nam)
						if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) == 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) == 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) == 0)
							if (_strcmpi(a[i].maSo, a[j].maSo) < 0)
								HoanVi(a[i], a[j]);
}

int XoaNhanVien_MSNV(NhanVien a[MAX], int &n, char maSo[MAX])
{
	int m = 0;
	int dau = 0;
	for (int i = 0; i < n; i++)
		if (_strcmpi(a[i].maSo, maSo) != 0)
		{
			dau = 1;
			a[m] = a[i];
			m++;
		}
	n = m;
	return dau;
}

int XoaNhanVien_HoVaTen(NhanVien a[MAX], int &n, char Ho[MAX], char hoLot[MAX], char Ten[MAX])
{
	int dau = 0;
	for (int i = 0; i < n; i++)
	{
		if (_strcmpi(a[i].hoTen.ho, Ho) == 0 && _strcmpi(a[i].hoTen.hoLot, hoLot) == 0 && _strcmpi(a[i].hoTen.ten, Ten) == 0)
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

int XoaNhanVien_NamSinh(NhanVien a[MAX], int &n, int namSinh)
{
	int m = 0;
	int dau = 0;
	for (int i = 0; i < n; i++)
		if (a[i].ngayThangNam.nam != namSinh)
		{
			dau = 1;
			a[m] = a[i];
			m++;
		}
	n = m;
	return dau;
}

int XoaNhanVien_DiaChi(NhanVien a[MAX], int &n, char diaChi[MAX])
{
	int m = 0;
	int dau = 0;
	for (int i = 0; i < n; i++)
		if (_strcmpi(a[i].diaChi, diaChi) != 0)
		{
			dau = 1;
			a[m] = a[i];
			m++;
		}
	n = m;
	return dau;
}

void XoaNhanVien_Luong_LonHonBang_X(NhanVien a[MAX], int &n, int x)
{
	int m = 0;
	for (int i = 0; i < n; i++)
		if (a[i].luong <= x)
		{
			a[m] = a[i];
			m++;
		}
	n = m;
}

void XoaNhanVien_Luong_NhoHonBang_X(NhanVien a[MAX], int &n, int x)
{
	int m = 0;
	for (int i = 0; i < n; i++)
		if (a[i].luong >= x)
		{
			a[m] = a[i];
			m++;
		}
	n = m;
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

void XoaNhanVien_LuongCaoNhat(NhanVien a[MAX], int &n)
{
	int max = LuongCaoNhat(a, n);
	int m = 0;
	for (int i = 0; i < n; i++)
		if (a[i].luong != max)
		{
			a[m] = a[i];
			m++;
		}
	n = m;
}

void SuaNhanVien_MSNV(NhanVien a[MAX], int &n, char maNV[MAX])
{
	int i;
	int dau = 0;
	for (i = 0; i < n; i++)
		if (strcmp(a[i].maSo, maNV) == 0)
		{
			dau = 1;
			break;
		}
	if (!dau)
	{
		cout << "\nKhong co nhan vien nao trong danh sach co ma so " << maNV;
		return;
	}
	cout << "\nSua thong tin nhan vien co ma so : " << maNV;
	cout << "\nTien hanh sua MSNV....";
	cout << "\nMa Nhan Vien : ";
	_flushall();
	gets_s(a[i].maSo, 8);

	cout << "\nTien hanh sua Ho....";
	cout << "\nHo: ";
	_flushall();
	gets_s(a[i].hoTen.ho, 8);

	cout << "\nTien hanh sua Ho lot....";
	cout << "\nHo lot: ";
	_flushall();
	gets_s(a[i].hoTen.hoLot, 8);

	cout << "\nTien hanh sua Ten....";
	cout << "\nTen: ";
	_flushall();
	gets_s(a[i].hoTen.ten, 8);

	cout << "\nTien hanh sua Ngay sinh....";
	cout << "\nNgay sinh: ";
	_flushall();
	cin >> a[i].ngayThangNam.ngay;

	cout << "\nTien hanh sua Thang sinh....";
	cout << "\nThang sinh: ";
	_flushall();
	cin >> a[i].ngayThangNam.thang;

	cout << "\nTien hanh sua Nam sinh....";
	cout << "\nNam sinh: ";
	_flushall();
	cin >> a[i].ngayThangNam.nam;

	cout << "\nTien hanh sua dia chi....";
	cout << "\nNhap dia chi: ";
	_flushall();
	gets_s(a[i].diaChi, 20);

	cout << "\nTien hanh sua Luong....";
	cout << "\nNhap luong: ";
	_flushall();
	cin >> a[i].luong;
}

void SuaNhanVien_HoVaTen(NhanVien a[MAX], int &n, char Ho[MAX], char hoLot[MAX], char Ten[MAX])
{
	int i;
	int dau = 0;
	for (i = 0; i < n; i++)
		if (_strcmpi(a[i].hoTen.ho, Ho) == 0 && _strcmpi(a[i].hoTen.hoLot, hoLot) == 0 && _strcmpi(a[i].hoTen.ten, Ten) == 0)
		{
			dau = 1;
			break;
		}
	if (!dau)
	{
		cout << "\nKhong tim thay nhan vien co ten " << Ho << hoLot << Ten << " trong danh sach. Vui long kiem tra lai.";
		return;
	}
	cout << "\nSua thong tin nhan vien co ten " << Ho << hoLot << Ten;
	cout << "\nTien hanh sua MSNV....";
	cout << "\nMa Nhan Vien : ";
	_flushall();
	gets_s(a[i].maSo, 8);

	cout << "\nTien hanh sua Ho....";
	cout << "\nHo: ";
	_flushall();
	gets_s(a[i].hoTen.ho, 8);

	cout << "\nTien hanh sua Ho lot....";
	cout << "\nHo lot: ";
	_flushall();
	gets_s(a[i].hoTen.hoLot, 8);

	cout << "\nTien hanh sua Ten....";
	cout << "\nTen: ";
	_flushall();
	gets_s(a[i].hoTen.ten, 8);

	cout << "\nTien hanh sua Ngay sinh....";
	cout << "\nNgay sinh: ";
	_flushall();
	cin >> a[i].ngayThangNam.ngay;

	cout << "\nTien hanh sua Thang sinh....";
	cout << "\nThang sinh: ";
	_flushall();
	cin >> a[i].ngayThangNam.thang;

	cout << "\nTien hanh sua Nam sinh....";
	cout << "\nNam sinh: ";
	_flushall();
	cin >> a[i].ngayThangNam.nam;

	cout << "\nTien hanh sua dia chi....";
	cout << "\nNhap dia chi: ";
	_flushall();
	gets_s(a[i].diaChi, 20);

	cout << "\nTien hanh sua Luong....";
	cout << "\nNhap luong: ";
	_flushall();
	cin >> a[i].luong;
}

void SuaNhanVien_NamSinh(NhanVien a[MAX], int &n, int namSinh)
{
	int i;
	int dau = 0;
	for (i = 0; i < n; i++)
		if (a[i].ngayThangNam.nam == namSinh)
		{
			dau = 1;
			break;
		}
	if (!dau)
	{
		cout << "\nKhong co nhan vien nao trong danh sach co nam sinh " << namSinh;
		return;
	}
	cout << "\nSua thong tin nhan vien co nam sinh : " << namSinh;
	cout << "\nTien hanh sua MSNV....";
	cout << "\nMa Nhan Vien : ";
	_flushall();
	gets_s(a[i].maSo, 8);

	cout << "\nTien hanh sua Ho....";
	cout << "\nHo: ";
	_flushall();
	gets_s(a[i].hoTen.ho, 8);

	cout << "\nTien hanh sua Ho lot....";
	cout << "\nHo lot: ";
	_flushall();
	gets_s(a[i].hoTen.hoLot, 8);

	cout << "\nTien hanh sua Ten....";
	cout << "\nTen: ";
	_flushall();
	gets_s(a[i].hoTen.ten, 8);

	cout << "\nTien hanh sua Ngay sinh....";
	cout << "\nNgay sinh: ";
	_flushall();
	cin >> a[i].ngayThangNam.ngay;

	cout << "\nTien hanh sua Thang sinh....";
	cout << "\nThang sinh: ";
	_flushall();
	cin >> a[i].ngayThangNam.thang;

	cout << "\nTien hanh sua Nam sinh....";
	cout << "\nNam sinh: ";
	_flushall();
	cin >> a[i].ngayThangNam.nam;

	cout << "\nTien hanh sua dia chi....";
	cout << "\nNhap dia chi: ";
	_flushall();
	gets_s(a[i].diaChi, 20);

	cout << "\nTien hanh sua Luong....";
	cout << "\nNhap luong: ";
	_flushall();
	cin >> a[i].luong;
}

void SuaNhanVien_DiaChi(NhanVien a[MAX], int &n, char diaChi[MAX])
{
	int i;
	int dau = 0;
	for (i = 0; i < n; i++)
		if (_strcmpi(a[i].diaChi, diaChi) == 0)
		{
			dau = 1;
			break;
		}
	if (!dau)
	{
		cout << "\nKhong co nhan vien nao trong danh sach co dia chi " << diaChi;
		return;
	}
	cout << "\nSua thong tin nhan vien co dia chi : " << diaChi;
	cout << "\nTien hanh sua MSNV....";
	cout << "\nMa Nhan Vien : ";
	_flushall();
	gets_s(a[i].maSo, 8);

	cout << "\nTien hanh sua Ho....";
	cout << "\nHo: ";
	_flushall();
	gets_s(a[i].hoTen.ho, 8);

	cout << "\nTien hanh sua Ho lot....";
	cout << "\nHo lot: ";
	_flushall();
	gets_s(a[i].hoTen.hoLot, 8);

	cout << "\nTien hanh sua Ten....";
	cout << "\nTen: ";
	_flushall();
	gets_s(a[i].hoTen.ten, 8);

	cout << "\nTien hanh sua Ngay sinh....";
	cout << "\nNgay sinh: ";
	_flushall();
	cin >> a[i].ngayThangNam.ngay;

	cout << "\nTien hanh sua Thang sinh....";
	cout << "\nThang sinh: ";
	_flushall();
	cin >> a[i].ngayThangNam.thang;

	cout << "\nTien hanh sua Nam sinh....";
	cout << "\nNam sinh: ";
	_flushall();
	cin >> a[i].ngayThangNam.nam;

	cout << "\nTien hanh sua dia chi....";
	cout << "\nNhap dia chi: ";
	_flushall();
	gets_s(a[i].diaChi, 20);

	cout << "\nTien hanh sua Luong....";
	cout << "\nNhap luong: ";
	_flushall();
	cin >> a[i].luong;
}

void SuaNhanVien_Luong_LonHonBang_X(NhanVien a[MAX], int &n, int x)
{
	int i;
	int dau = 0;
	for (i = 0; i < n; i++)
		if (a[i].luong >= x)
		{
			dau = 1;
			break;
		}
	if (!dau)
	{
		cout << "\nKhong co nhan vien nao trong danh sach co luong >= " << x;
		return;
	}
	cout << "\nSua thong tin nhan vien co luong >= " << x;
	cout << "\nTien hanh sua MSNV....";
	cout << "\nMa Nhan Vien : ";
	_flushall();
	gets_s(a[i].maSo, 8);

	cout << "\nTien hanh sua Ho....";
	cout << "\nHo: ";
	_flushall();
	gets_s(a[i].hoTen.ho, 8);

	cout << "\nTien hanh sua Ho lot....";
	cout << "\nHo lot: ";
	_flushall();
	gets_s(a[i].hoTen.hoLot, 8);

	cout << "\nTien hanh sua Ten....";
	cout << "\nTen: ";
	_flushall();
	gets_s(a[i].hoTen.ten, 8);

	cout << "\nTien hanh sua Ngay sinh....";
	cout << "\nNgay sinh: ";
	_flushall();
	cin >> a[i].ngayThangNam.ngay;

	cout << "\nTien hanh sua Thang sinh....";
	cout << "\nThang sinh: ";
	_flushall();
	cin >> a[i].ngayThangNam.thang;

	cout << "\nTien hanh sua Nam sinh....";
	cout << "\nNam sinh: ";
	_flushall();
	cin >> a[i].ngayThangNam.nam;

	cout << "\nTien hanh sua dia chi....";
	cout << "\nNhap dia chi: ";
	_flushall();
	gets_s(a[i].diaChi, 20);

	cout << "\nTien hanh sua Luong....";
	cout << "\nNhap luong: ";
	_flushall();
	cin >> a[i].luong;
}

void SuaNhanVien_Luong_NhoHonBang_X(NhanVien a[MAX], int &n, int x)
{
	int i;
	int dau = 0;
	for (i = 0; i < n; i++)
		if (a[i].luong <= x)
		{
			dau = 1;
			break;
		}
	if (!dau)
	{
		cout << "\nKhong co nhan vien nao trong danh sach co luong <= " << x;
		return;
	}
	cout << "\nSua thong tin nhan vien co luong <= " << x;
	cout << "\nTien hanh sua MSNV....";
	cout << "\nMa Nhan Vien : ";
	_flushall();
	gets_s(a[i].maSo, 8);

	cout << "\nTien hanh sua Ho....";
	cout << "\nHo: ";
	_flushall();
	gets_s(a[i].hoTen.ho, 8);

	cout << "\nTien hanh sua Ho lot....";
	cout << "\nHo lot: ";
	_flushall();
	gets_s(a[i].hoTen.hoLot, 8);

	cout << "\nTien hanh sua Ten....";
	cout << "\nTen: ";
	_flushall();
	gets_s(a[i].hoTen.ten, 8);

	cout << "\nTien hanh sua Ngay sinh....";
	cout << "\nNgay sinh: ";
	_flushall();
	cin >> a[i].ngayThangNam.ngay;

	cout << "\nTien hanh sua Thang sinh....";
	cout << "\nThang sinh: ";
	_flushall();
	cin >> a[i].ngayThangNam.thang;

	cout << "\nTien hanh sua Nam sinh....";
	cout << "\nNam sinh: ";
	_flushall();
	cin >> a[i].ngayThangNam.nam;

	cout << "\nTien hanh sua dia chi....";
	cout << "\nNhap dia chi: ";
	_flushall();
	gets_s(a[i].diaChi, 20);

	cout << "\nTien hanh sua Luong....";
	cout << "\nNhap luong: ";
	_flushall();
	cin >> a[i].luong;
}

void SuaNhanVien_LuongThapNhat(NhanVien a[MAX], int &n)
{
	int i;
	int min = LuongThapNhat(a, n);
	int dau = 0;
	for (i = 0; i < n; i++)
		if (a[i].luong == min)
		{
			dau = 1;
			break;
		}
	if (!dau)
	{
		cout << "\nKhong co nhan vien nao trong danh sach co luong thap nhat";
		return;
	}
	cout << "\nSua thong tin nhan vien co luong thap nhat";
	cout << "\nTien hanh sua MSNV....";
	cout << "\nMa Nhan Vien : ";
	_flushall();
	gets_s(a[i].maSo, 8);

	cout << "\nTien hanh sua Ho....";
	cout << "\nHo: ";
	_flushall();
	gets_s(a[i].hoTen.ho, 8);

	cout << "\nTien hanh sua Ho lot....";
	cout << "\nHo lot: ";
	_flushall();
	gets_s(a[i].hoTen.hoLot, 8);

	cout << "\nTien hanh sua Ten....";
	cout << "\nTen: ";
	_flushall();
	gets_s(a[i].hoTen.ten, 8);

	cout << "\nTien hanh sua Ngay sinh....";
	cout << "\nNgay sinh: ";
	_flushall();
	cin >> a[i].ngayThangNam.ngay;

	cout << "\nTien hanh sua Thang sinh....";
	cout << "\nThang sinh: ";
	_flushall();
	cin >> a[i].ngayThangNam.thang;

	cout << "\nTien hanh sua Nam sinh....";
	cout << "\nNam sinh: ";
	_flushall();
	cin >> a[i].ngayThangNam.nam;

	cout << "\nTien hanh sua dia chi....";
	cout << "\nNhap dia chi: ";
	_flushall();
	gets_s(a[i].diaChi, 20);

	cout << "\nTien hanh sua Luong....";
	cout << "\nNhap luong: ";
	_flushall();
	cin >> a[i].luong;
}

void SuaNhanVien_LuongCaoNhat(NhanVien a[MAX], int &n)
{
	int i;
	int max = LuongCaoNhat(a, n);
	int dau = 0;
	for (i = 0; i < n; i++)
		if (a[i].luong == max)
		{
			dau = 1;
			break;
		}
	if (!dau)
	{
		cout << "\nKhong co nhan vien nao trong danh sach co luong cao nhat";
		return;
	}
	cout << "\nSua thong tin nhan vien co luong cao nhat";
	cout << "\nTien hanh sua MSNV....";
	cout << "\nMa Nhan Vien : ";
	_flushall();
	gets_s(a[i].maSo, 8);

	cout << "\nTien hanh sua Ho....";
	cout << "\nHo: ";
	_flushall();
	gets_s(a[i].hoTen.ho, 8);

	cout << "\nTien hanh sua Ho lot....";
	cout << "\nHo lot: ";
	_flushall();
	gets_s(a[i].hoTen.hoLot, 8);

	cout << "\nTien hanh sua Ten....";
	cout << "\nTen: ";
	_flushall();
	gets_s(a[i].hoTen.ten, 8);

	cout << "\nTien hanh sua Ngay sinh....";
	cout << "\nNgay sinh: ";
	_flushall();
	cin >> a[i].ngayThangNam.ngay;

	cout << "\nTien hanh sua Thang sinh....";
	cout << "\nThang sinh: ";
	_flushall();
	cin >> a[i].ngayThangNam.thang;

	cout << "\nTien hanh sua Nam sinh....";
	cout << "\nNam sinh: ";
	_flushall();
	cin >> a[i].ngayThangNam.nam;

	cout << "\nTien hanh sua dia chi....";
	cout << "\nNhap dia chi: ";
	_flushall();
	gets_s(a[i].diaChi, 20);

	cout << "\nTien hanh sua Luong....";
	cout << "\nNhap luong: ";
	_flushall();
	cin >> a[i].luong;
}

void XuatNhanVien_1_MSNV(NhanVien a[MAX], int n, char maSo[])
{
	XuatTieuDe();
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		if (_strcmpi(a[i].maSo, maSo) == 0)
			Xuat_1_NhanVien(a[i]);
	}
	XuatDongKeNgangDoi();
}

void XuatDSNV_CungMSNV(NhanVien a[MAX], int n)
{
	NhanVien b[MAX];
	int m = 0;
	int dau;
	for (int i = 0; i < n; i++)
	{
		dau = 1;
		for (int j = 0; j < m; j++)
			if (_strcmpi(a[i].maSo, b[j].maSo) == 0)
			{
				dau = 0;
				break;
			}
		if (dau)
		{
			strcpy_s(b[m].maSo, a[i].maSo);
			m++;
		}
	}
	for (int j = 0; j < m; j++)
	{
		cout << "\n\n\t========================== " << b[j].maSo << " ==========================\n";
		XuatNhanVien_1_MSNV(a, n, b[j].maSo);
	}
}

void XuatNhanVien_1_Ho(NhanVien a[MAX], int n, char Ho[])
{
	XuatTieuDe();
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		if (_strcmpi(a[i].hoTen.ho, Ho) == 0)
			Xuat_1_NhanVien(a[i]);
	}
	XuatDongKeNgangDoi();
}

void XuatDSNV_CungHo(NhanVien a[MAX], int n)
{
	NhanVien b[MAX];
	int m = 0;
	int dau;
	for (int i = 0; i < n; i++)
	{
		dau = 1;
		for (int j = 0; j < m; j++)
			if (_strcmpi(a[i].hoTen.ho, b[j].hoTen.ho) == 0)
			{
				dau = 0;
				break;
			}
		if (dau)
		{
			strcpy_s(b[m].hoTen.ho, a[i].hoTen.ho);
			m++;
		}
	}
	for (int j = 0; j < m; j++)
	{
		cout << "\n\n\t========================== " << b[j].hoTen.ho << " ==========================\n";
		XuatNhanVien_1_Ho(a, n, b[j].hoTen.ho);
	}
}

void XuatNhanVien_1_HoLot(NhanVien a[MAX], int n, char HoLot[])
{
	XuatTieuDe();
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		if (_strcmpi(a[i].hoTen.hoLot, HoLot) == 0)
			Xuat_1_NhanVien(a[i]);
	}
	XuatDongKeNgangDoi();
}

void XuatDSNV_CungHoLot(NhanVien a[MAX], int n)
{
	NhanVien b[MAX];
	int m = 0;
	int dau;
	for (int i = 0; i < n; i++)
	{
		dau = 1;
		for (int j = 0; j < m; j++)
			if (_strcmpi(a[i].hoTen.hoLot, b[j].hoTen.hoLot) == 0)
			{
				dau = 0;
				break;
			}
		if (dau)
		{
			strcpy_s(b[m].hoTen.hoLot, a[i].hoTen.hoLot);
			m++;
		}
	}
	for (int j = 0; j < m; j++)
	{
		cout << "\n\n\t========================== " << b[j].hoTen.hoLot << " ==========================\n";
		XuatNhanVien_1_HoLot(a, n, b[j].hoTen.hoLot);
	}
}

void XuatNhanVien_1_Ten(NhanVien a[MAX], int n, char Ten[])
{
	XuatTieuDe();
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		if (_strcmpi(a[i].hoTen.ten, Ten) == 0)
			Xuat_1_NhanVien(a[i]);
	}
	XuatDongKeNgangDoi();
}

void XuatDSNV_CungTen(NhanVien a[MAX], int n)
{
	NhanVien b[MAX];
	int m = 0;
	int dau;
	for (int i = 0; i < n; i++)
	{
		dau = 1;
		for (int j = 0; j < m; j++)
			if (_strcmpi(a[i].hoTen.ten, b[j].hoTen.ten) == 0)
			{
				dau = 0;
				break;
			}
		if (dau)
		{
			strcpy_s(b[m].hoTen.ten, a[i].hoTen.ten);
			m++;
		}
	}
	for (int j = 0; j < m; j++)
	{
		cout << "\n\n\t========================== " << b[j].hoTen.ten << " ==========================\n";
		XuatNhanVien_1_Ten(a, n, b[j].hoTen.ten);
	}
}

void XuatNhanVien_1_NamSinh(NhanVien a[MAX], int n, int namSinh)
{
	XuatTieuDe();
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		if (a[i].ngayThangNam.nam == namSinh)
			Xuat_1_NhanVien(a[i]);
	}
	XuatDongKeNgangDoi();
}

void XuatDSNV_CungNamSinh(NhanVien a[MAX], int n)
{
	NhanVien b[MAX];
	int m = 0;
	int dau;
	for (int i = 0; i < n; i++)
	{
		dau = 1;
		for (int j = 0; j < m; j++)
			if (a[i].ngayThangNam.nam == b[j].ngayThangNam.nam)
			{
				dau = 0;
				break;
			}
		if (dau)
		{
			b[m].ngayThangNam.nam = a[i].ngayThangNam.nam;
			m++;
		}
	}
	for (int j = 0; j < m; j++)
	{
		cout << "\n\n\t========================== " << b[j].ngayThangNam.nam << " ==========================\n";
		XuatNhanVien_1_NamSinh(a, n, b[j].ngayThangNam.nam);
	}
}

void XuatNhanVien_1_DiaChi(NhanVien a[MAX], int n, char diaChi[])
{
	XuatTieuDe();
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		if (_strcmpi(a[i].diaChi, diaChi) == 0)
			Xuat_1_NhanVien(a[i]);
	}
	XuatDongKeNgangDoi();
}

void XuatDSNV_CungDiaChi(NhanVien a[MAX], int n)
{
	NhanVien b[MAX];
	int m = 0;
	int dau;
	for (int i = 0; i < n; i++)
	{
		dau = 1;
		for (int j = 0; j < m; j++)
			if (_strcmpi(a[i].diaChi, b[j].diaChi) == 0)
			{
				dau = 0;
				break;
			}
		if (dau)
		{
			strcpy_s(b[m].diaChi, a[i].diaChi);
			m++;
		}
	}
	for (int j = 0; j < m; j++)
	{
		cout << "\n\n\t========================== " << b[j].diaChi << " ==========================\n";
		XuatNhanVien_1_DiaChi(a, n, b[j].diaChi);
	}
}

void XuatNhanVien_1_MucLuong(NhanVien a[MAX], int n, double Luong)
{
	XuatTieuDe();
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		if (a[i].luong == Luong)
			Xuat_1_NhanVien(a[i]);
	}
	XuatDongKeNgangDoi();
}

void XuatDSNV_CungMucLuong(NhanVien a[MAX], int n)
{
	NhanVien b[MAX];
	int m = 0;
	int dau;
	for (int i = 0; i < n; i++)
	{
		dau = 1;
		for (int j = 0; j < m; j++)
			if (a[i].luong == a[j].luong)
			{
				dau = 0;
				break;
			}
		if (dau)
		{
			b[m].luong = a[i].luong;
			m++;
		}
	}
	for (int j = 0; j < m; j++)
	{
		cout << "\n\n\t========================== " << b[j].luong << " ==========================\n";
		XuatNhanVien_1_MucLuong(a, n, b[j].luong);
	}
}

void Nhap_1_NhanVien(NhanVien &b)
{
	cout << "\nTien hanh nhap MSNV....";
	cout << "\nMa Nhan Vien : ";
	_flushall();
	gets_s(b.maSo, 8);

	cout << "\nTien hanh nhap Ho....";
	cout << "\nHo: ";
	_flushall();
	gets_s(b.hoTen.ho, 8);

	cout << "\nTien hanh nhap Ho lot....";
	cout << "\nHo lot: ";
	_flushall();
	gets_s(b.hoTen.hoLot, 8);

	cout << "\nTien hanh nhap Ten....";
	cout << "\nTen: ";
	_flushall();
	gets_s(b.hoTen.ten, 8);

	cout << "\nTien hanh nhap Ngay sinh....";
	cout << "\nNgay sinh: ";
	_flushall();
	cin >> b.ngayThangNam.ngay;

	cout << "\nTien hanh nhap Thang sinh....";
	cout << "\nThang sinh: ";
	_flushall();
	cin >> b.ngayThangNam.thang;

	cout << "\nTien hanh nhap Nam sinh....";
	cout << "\nNam sinh: ";
	_flushall();
	cin >> b.ngayThangNam.nam;

	cout << "\nTien hanh nhap dia chi....";
	cout << "\nNhap dia chi: ";
	_flushall();
	gets_s(b.diaChi, 20);

	cout << "\nTien hanh nhap Luong....";
	cout << "\nNhap luong: ";
	_flushall();
	cin >> b.luong;
}

void ThemNhanVien_Dau(NhanVien a[MAX], int &n, NhanVien b)
{
	n++;
	for (int i = n; i > 0; i--)
	{
		a[i] = a[i - 1];
	}
	a[0] = b;
}

void ThemNhanVien_Cuoi(NhanVien a[MAX], int &n, NhanVien b)
{
	a[n++] = b;
}

double TinhTongLuong(NhanVien a[MAX], int n)
{
	double Tong = 0;
	for (int i = 0; i < n; i++)
		Tong += a[i].luong;
	return Tong;
}