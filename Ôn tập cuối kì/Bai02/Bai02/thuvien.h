#define MAX 100

struct HoTen
{
	char ho[8];
	char hoLot[8];
	char ten[8];
};

struct SinhVien
{
	char maSV[8];
	HoTen hoTen;
	int nam;
	char diaChi[20];
	char lop[8];
	double DTB;
};

int TaoDanhSachSinhVien(SinhVien a[MAX], int &n, char filename[MAX])
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
			in >> a[n].maSV;
			in >> a[n].hoTen.ho;
			in >> a[n].hoTen.hoLot;
			in >> a[n].hoTen.ten;
			in >> a[n].diaChi;
			in >> a[n].nam;
			in >> a[n].lop;
			in >> a[n].DTB;
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
		<< setw(11) << "Ma SV" << ':'
		<< setw(8) << "Ho" << ':'
		<< setw(8) << "hoLot" << ':'
		<< setw(8) << "Ten" << ':'
		<< setw(12) << "Dia chi" << ':'
		<< setw(12) << "Nam sinh" << ':'
		<< setw(12) << "Lop" << ':'
		<< setw(5) << "DTB" << ':';
	XuatDongKeNgangDoi();
}

void Xuat_1_SinhVien(SinhVien a)
{
	cout << setiosflags(ios::left) << ':';
	cout << setw(11) << a.maSV << ':'
		<< setw(8) << a.hoTen.ho << ':'
		<< setw(8) << a.hoTen.hoLot << ':'
		<< setw(8) << a.hoTen.ten << ':'
		<< setw(12) << a.diaChi << ':'
		<< setw(12) << a.nam << ':'
		<< setw(12) << a.lop << ':'
		<< setiosflags(ios::fixed) << setprecision(2) << setw(5) << a.DTB << ':';
	cout << "\n";
}

void XuatDSSV(SinhVien a[MAX], int n)
{
	XuatTieuDe();
	for (int i = 0; i < n; i++)
	{
		cout << "\n\n";
		Xuat_1_SinhVien(a[i]);
		if ((i + 1) % 3 == 0)
			XuatDongKeNgangDon();
	}
	XuatDongKeNgangDoi();
}

void XuatSinhVien_MaNV(SinhVien a[MAX], int n, char maSo[11])
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (_strcmpi(a[i].maSV, maSo) == 0)
			dem++;
	if (!dem)
		cout << "\nKhong tim thay nhan vien co ma so " << maSo << " vui long kiem tra lai.";
	else
	{
		cout << "\nCo " << dem << " nhan vien co ma so " << maSo << " trong danh sach";
		XuatTieuDe();
		for (int i = 0; i < n; i++)
			if (_strcmpi(a[i].maSV, maSo) == 0)
			{
				cout << "\n\n";
				Xuat_1_SinhVien(a[i]);
				if ((i + 1) % 3 == 0)
					XuatDongKeNgangDon();
			}
		XuatDongKeNgangDoi();
	}
}

void XuatSinhVien_HoVaTen(SinhVien a[MAX], int n, char Ho[MAX], char hoLot[MAX], char Ten[MAX])
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
						Xuat_1_SinhVien(a[i]);
						if ((i + 1) % 3 == 0)
							XuatDongKeNgangDon();
					}
		XuatDongKeNgangDoi();
	}
}

void XuatSinhVien_NamSinh(SinhVien a[MAX], int n, int namSinh)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i].nam == namSinh)
			dem++;
	if (!dem)
		cout << "\nKhong tim thay nhan vien co nam sinh " << namSinh << " vui long kiem tra lai.";
	else
	{
		cout << "\nCo " << dem << " nhan vien co nam sinh " << namSinh << " trong danh sach";
		XuatTieuDe();
		for (int i = 0; i < n; i++)
			if (a[i].nam == namSinh)
			{
				cout << "\n\n";
				Xuat_1_SinhVien(a[i]);
				if ((i + 1) % 3 == 0)
					XuatDongKeNgangDon();
			}
		XuatDongKeNgangDoi();
	}
}

void XuatSinhVien_Lop(SinhVien a[MAX], int n, char Lop[MAX])
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (_strcmpi(a[i].lop, Lop) == 0)
			dem++;
	if (!dem)
		cout << "\nKhong tim thay nhan vien co dia chi " << Lop << " vui long kiem tra lai.";
	else
	{
		cout << "\nCo " << dem << " nhan vien co dia chi " << Lop << " trong danh sach";
		XuatTieuDe();
		for (int i = 0; i < n; i++)
			if (_strcmpi(a[i].lop, Lop) == 0)
			{
				cout << "\n\n";
				Xuat_1_SinhVien(a[i]);
				if ((i + 1) % 3 == 0)
					XuatDongKeNgangDon();
			}
		XuatDongKeNgangDoi();
	}
}

void XuatSinhVien_DiaChi(SinhVien a[MAX], int n, char diaChi[MAX])
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
				Xuat_1_SinhVien(a[i]);
				if ((i + 1) % 3 == 0)
					XuatDongKeNgangDon();
			}
		XuatDongKeNgangDoi();
	}
}

double DTBThapNhat(SinhVien a[MAX], int n)
{
	double min;
	min = a[0].DTB;
	for (int i = 0; i < n; i++)
		if (min > a[i].DTB)
			min = a[i].DTB;
	return min;
}

double DTBCaoNhat(SinhVien a[MAX], int n)
{
	double max;
	max = a[0].DTB;
	for (int i = 0; i < n; i++)
		if (max < a[i].DTB)
			max = a[i].DTB;
	return max;
}

void XuatNhanVien_DTBThapNhat(SinhVien a[MAX], int n)
{
	double min;
	int dem = 0;
	min = DTBThapNhat(a, n);
	for (int i = 0; i < n; i++)
		if (a[i].DTB == min)
			dem++;
	if (!dem)
		cout << "\nKhong tim thay nhan vien co DTB thap nhat vui long kiem tra lai.";
	else
	{
		cout << "\nCo " << dem << " sinh vien co DTB thap nhat trong danh sach";
		XuatTieuDe();
		for (int i = 0; i < n; i++)
			if (a[i].DTB == min)
			{
				cout << "\n\n";
				Xuat_1_SinhVien(a[i]);
				if ((i + 1) % 3 == 0)
					XuatDongKeNgangDon();
			}
		XuatDongKeNgangDoi();
	}
}

void XuatNhanVien_DTBCaoNhat(SinhVien a[MAX], int n)
{
	double max;
	int dem = 0;
	max = DTBCaoNhat(a, n);
	for (int i = 0; i < n; i++)
		if (a[i].DTB == max)
			dem++;
	if (!dem)
		cout << "\nKhong tim thay nhan vien co DTB cao nhat vui long kiem tra lai.";
	else
	{
		cout << "\nCo " << dem << " sinh vien co DTB cao nhat trong danh sach";
		XuatTieuDe();
		for (int i = 0; i < n; i++)
			if (a[i].DTB == max)
			{
				cout << "\n\n";
				Xuat_1_SinhVien(a[i]);
				if ((i + 1) % 3 == 0)
					XuatDongKeNgangDon();
			}
		XuatDongKeNgangDoi();
	}
}

void XuatSinhVien_DTB_LonHon_X(SinhVien a[MAX], int n, double x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i].DTB >= x)
			dem++;
	if (!dem)
		cout << "\nKhong co nhan vien nao co DTB >= " << x;
	else
	{
		cout << "\n\nCo " << dem << " nhan vien co DTB >= " << x << ", voi thong tin chi tiet nhu sau: ";
		XuatTieuDe();
		for (int i = 0; i < n; i++)
			if (a[i].DTB >= x)
			{
				cout << "\n\n";
				Xuat_1_SinhVien(a[i]);
				if ((i + 1) % 3 == 0)
					XuatDongKeNgangDon();
			}
		XuatDongKeNgangDoi();
	}
}

void XuatSinhVien_DTB_NhoHon_X(SinhVien a[MAX], int n, double x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i].DTB <= x)
			dem++;
	if (!dem)
		cout << "\nKhong co nhan vien nao co DTB >= " << x;
	else
	{
		cout << "\n\nCo " << dem << " nhan vien co DTB >= " << x << ", voi thong tin chi tiet nhu sau: ";
		XuatTieuDe();
		for (int i = 0; i < n; i++)
			if (a[i].DTB <= x)
			{
				cout << "\n\n";
				Xuat_1_SinhVien(a[i]);
				if ((i + 1) % 3 == 0)
					XuatDongKeNgangDon();
			}
		XuatDongKeNgangDoi();
	}
}

void HoanVi(SinhVien &a, SinhVien &b)
{
	SinhVien c;
	c = a;
	a = b;
	b = c;
}

void SapTang_MSSV(SinhVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSV, a[j].maSV) > 0)
				HoanVi(a[i], a[j]);
}

void SapTang_HoVaTen(SinhVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) > 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) > 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) > 0)
				HoanVi(a[i], a[j]);
}

void SapTang_NamSinh(SinhVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].nam > a[j].nam)
				HoanVi(a[i], a[j]);
}

void SapTang_DiaChi(SinhVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].diaChi, a[j].diaChi) > 0)
				HoanVi(a[i], a[j]);
}

void SapTang_Lop(SinhVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].lop, a[j].lop) > 0)
				HoanVi(a[i], a[j]);
}

void SapTang_DTB(SinhVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].DTB > a[j].DTB)
				HoanVi(a[i], a[j]);
}

void SapGiam_MSSV(SinhVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSV, a[j].maSV) < 0)
				HoanVi(a[i], a[j]);
}

void SapGiam_HoVaTen(SinhVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) < 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) < 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) < 0)
				HoanVi(a[i], a[j]);
}

void SapGiam_NamSinh(SinhVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].nam < a[j].nam)
				HoanVi(a[i], a[j]);
}

void SapGiam_DiaChi(SinhVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].diaChi, a[j].diaChi) < 0)
				HoanVi(a[i], a[j]);
}

void SapGiam_Lop(SinhVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].lop, a[j].lop) < 0)
				HoanVi(a[i], a[j]);
}

void SapGiam_DTB(SinhVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].DTB < a[j].DTB)
				HoanVi(a[i], a[j]);
}

void SapTang_Chuan(SinhVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSV, a[j].maSV) > 0)
				HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSV, a[j].maSV) == 0)
				if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) > 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) > 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) > 0)
					HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSV, a[j].maSV) == 0)
				if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) == 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) == 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) == 0)
					if (a[i].nam > a[j].nam)
						HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSV, a[j].maSV) == 0)
				if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) == 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) == 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) == 0)
					if (a[i].nam == a[j].nam)
						if (_strcmpi(a[i].diaChi, a[j].diaChi) > 0)
							HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSV, a[j].maSV) == 0)
				if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) == 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) == 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) == 0)
					if (a[i].nam == a[j].nam)
						if (_strcmpi(a[i].diaChi, a[j].diaChi) == 0)
							if (_strcmpi(a[i].lop, a[j].lop) > 0)
								HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSV, a[j].maSV) == 0)
				if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) == 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) == 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) == 0)
					if (a[i].nam == a[j].nam)
						if (_strcmpi(a[i].diaChi, a[j].diaChi) == 0)
							if (_strcmpi(a[i].lop, a[j].lop) == 0)
								if (a[i].DTB > a[j].DTB)
									HoanVi(a[i], a[j]);
}

void SapTang_NguocChuan(SinhVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].DTB > a[j].DTB)
				HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].DTB == a[j].DTB)
				if (_strcmpi(a[i].lop, a[j].lop) > 0)
					HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].DTB == a[j].DTB)
				if (_strcmpi(a[i].lop, a[j].lop) == 0)
					if (_strcmpi(a[i].diaChi, a[j].diaChi) > 0)
						HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].DTB == a[j].DTB)
				if (_strcmpi(a[i].lop, a[j].lop) == 0)
				if (_strcmpi(a[i].diaChi, a[j].diaChi) == 0)
					if (a[i].nam > a[j].nam)
						HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].DTB == a[j].DTB)
				if (_strcmpi(a[i].lop, a[j].lop) == 0)
					if (_strcmpi(a[i].diaChi, a[j].diaChi) == 0)
						if (a[i].nam == a[j].nam)
						if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) > 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) > 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) > 0)
							HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].DTB == a[j].DTB)
				if (_strcmpi(a[i].lop, a[j].lop) == 0)
					if (_strcmpi(a[i].diaChi, a[j].diaChi) == 0)
						if (a[i].nam == a[j].nam)
							if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) == 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) == 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) == 0)
								if (_strcmpi(a[i].maSV, a[j].maSV) > 0)
									HoanVi(a[i], a[j]);
}

void SapGiam_Chuan(SinhVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSV, a[j].maSV) < 0)
				HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSV, a[j].maSV) == 0)
				if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) < 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) < 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) < 0)
					HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSV, a[j].maSV) == 0)
				if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) == 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) == 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) == 0)
					if (a[i].nam < a[j].nam)
						HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSV, a[j].maSV) == 0)
				if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) == 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) == 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) == 0)
					if (a[i].nam == a[j].nam)
						if (_strcmpi(a[i].diaChi, a[j].diaChi) < 0)
							HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSV, a[j].maSV) == 0)
				if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) == 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) == 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) == 0)
					if (a[i].nam == a[j].nam)
						if (_strcmpi(a[i].diaChi, a[j].diaChi) == 0)
							if (_strcmpi(a[i].lop, a[j].lop) < 0)
								HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (_strcmpi(a[i].maSV, a[j].maSV) == 0)
				if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) == 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) == 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) == 0)
					if (a[i].nam == a[j].nam)
						if (_strcmpi(a[i].diaChi, a[j].diaChi) == 0)
							if (_strcmpi(a[i].lop, a[j].lop) == 0)
								if (a[i].DTB < a[j].DTB)
									HoanVi(a[i], a[j]);
}

void SapGiam_NguocChuan(SinhVien a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].DTB < a[j].DTB)
				HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].DTB == a[j].DTB)
				if (_strcmpi(a[i].lop, a[j].lop) < 0)
					HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].DTB == a[j].DTB)
				if (_strcmpi(a[i].lop, a[j].lop) == 0)
					if (_strcmpi(a[i].diaChi, a[j].diaChi) < 0)
						HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].DTB == a[j].DTB)
				if (_strcmpi(a[i].lop, a[j].lop) == 0)
					if (_strcmpi(a[i].diaChi, a[j].diaChi) == 0)
						if (a[i].nam < a[j].nam)
							HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].DTB == a[j].DTB)
				if (_strcmpi(a[i].lop, a[j].lop) == 0)
					if (_strcmpi(a[i].diaChi, a[j].diaChi) == 0)
						if (a[i].nam == a[j].nam)
							if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) < 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) < 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) < 0)
								HoanVi(a[i], a[j]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].DTB == a[j].DTB)
				if (_strcmpi(a[i].lop, a[j].lop) == 0)
					if (_strcmpi(a[i].diaChi, a[j].diaChi) == 0)
						if (a[i].nam == a[j].nam)
							if (_strcmpi(a[i].hoTen.ho, a[j].hoTen.ho) == 0 && _strcmpi(a[i].hoTen.hoLot, a[j].hoTen.hoLot) == 0 && _strcmpi(a[i].hoTen.ten, a[j].hoTen.ten) == 0)
								if (_strcmpi(a[i].maSV, a[j].maSV) < 0)
									HoanVi(a[i], a[j]);
}

int XoaSinhVien_MSSV(SinhVien a[MAX], int &n, char maNV[MAX])
{
	int m = 0;
	int dau = 0;
	for (int i = 0; i < n; i++)
		if (_strcmpi(a[i].maSV, maNV) != 0)
		{
			dau = 1;
			a[m] = a[i];
			m++;
		}
	n = m;
	return dau;
}

int XoaSinhVien_HoVaTen(SinhVien a[MAX], int &n, char Ho[MAX], char hoLot[MAX], char Ten[MAX])
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

int XoaSinhVien_NamSinh(SinhVien a[MAX], int &n, int namSinh)
{
	int m = 0;
	int dau = 0;
	for (int i = 0; i < n; i++)
		if (a[i].nam != namSinh)
		{
			dau = 1;
			a[m] = a[i];
			m++;
		}
	n = m;
	return dau;
}

int XoaSinhVien_Lop(SinhVien a[MAX], int &n, char lop[MAX])
{
	int m = 0;
	int dau = 0;
	for (int i = 0; i < n; i++)
		if (_strcmpi(a[i].lop, lop) != 0)
		{
			dau = 1;
			a[m] = a[i];
			m++;
		}
	n = m;
	return dau;
}

int XoaSinhVien_DiaChi(SinhVien a[MAX], int &n, char diaChi[MAX])
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

void XoaSinhVien_DTB_LonHonBang_X(SinhVien a[MAX], int &n, int x)
{
	int m = 0;
	for (int i = 0; i < n; i++)
		if (a[i].DTB < x)
		{
			a[m] = a[i];
			m++;
		}
	n = m;
}

void XoaSinhVien_DTB_NhoHonBang_X(SinhVien a[MAX], int &n, int x)
{
	int m = 0;
	for (int i = 0; i < n; i++)
		if (a[i].DTB > x)
		{
			a[m] = a[i];
			m++;
		}
	n = m;
}

void XoaSinhVien_DTBThapNhat(SinhVien a[MAX], int &n)
{
	int m = 0, min;
	min = DTBThapNhat(a, n);

	for (int i = 0; i < n; i++)
		if (a[i].DTB != min)
		{
			a[m] = a[i];
			m++;
		}
	n = m;
}

void XoaSinhVien_DTBCaoNhat(SinhVien a[MAX], int &n)
{
	int m = 0, max;
	max = DTBCaoNhat(a, n);

	for (int i = 0; i < n; i++)
		if (a[i].DTB != max)
		{
			a[m] = a[i];
			m++;
		}
	n = m;
}

void SuaSinhVien_MSSV(SinhVien a[MAX], int &n, char maSV[MAX])
{
	int i;
	int dau = 0;
	for (i = 0; i < n; i++)
		if (strcmp(a[i].maSV, maSV) == 0)
		{
			dau = 1;
			break;
		}
	if (!dau)
	{
		cout << "\nKhong co sinh vien nao trong danh sach co ma so " << maSV;
		return;
	}
	cout << "\nSua thong tin sinh vien co ma so : " << maSV;
	cout << "\nTien hanh sua MSSV....";
	cout << "\nMa Sinh Vien : ";
	_flushall();
	gets_s(a[i].maSV, 8);

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

	cout << "\nTien hanh sua dia chi....";
	cout << "\nNhap dia chi: ";
	_flushall();
	gets_s(a[i].diaChi, 20);

	cout << "\nTien hanh sua Nam sinh....";
	cout << "\nNam sinh: ";
	_flushall();
	cin >> a[i].nam;

	cout << "\nTien hanh sua lop....";
	cout << "\nNhap lop: ";
	_flushall();
	gets_s(a[i].lop, 20);

	cout << "\nTien hanh sua DTB....";
	cout << "\nNhap DTB: ";
	_flushall();
	cin >> a[i].DTB;
}

void SuaSinhVien_HoVaTen(SinhVien a[MAX], int &n, char Ho[MAX], char hoLot[MAX], char Ten[MAX])
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
		cout << "\nKhong co sinh vien nao trong danh sach co ma so " << Ho << hoLot << Ten;
		return;
	}
	cout << "\nSua thong tin sinh vien co Ho va ten : " << Ho << hoLot << Ten;
	cout << "\nTien hanh sua MSSV....";
	cout << "\nMa Sinh Vien : ";
	_flushall();
	gets_s(a[i].maSV, 8);

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

	cout << "\nTien hanh sua dia chi....";
	cout << "\nNhap dia chi: ";
	_flushall();
	gets_s(a[i].diaChi, 20);

	cout << "\nTien hanh sua Nam sinh....";
	cout << "\nNam sinh: ";
	_flushall();
	cin >> a[i].nam;

	cout << "\nTien hanh sua lop....";
	cout << "\nNhap lop: ";
	_flushall();
	gets_s(a[i].lop, 20);

	cout << "\nTien hanh sua DTB....";
	cout << "\nNhap DTB: ";
	_flushall();
	cin >> a[i].DTB;
}

void SuaSinhVien_NamSinh(SinhVien a[MAX], int &n, int namSinh)
{
	int i;
	int dau = 0;
	for (i = 0; i < n; i++)
		if (a[i].nam == namSinh)
		{
			dau = 1;
			break;
		}
	if (!dau)
	{
		cout << "\nKhong co sinh vien nao trong danh sach co nam sinh " << namSinh;
		return;
	}
	cout << "\nSua thong tin sinh vien co nam sinh : " << namSinh;
	cout << "\nTien hanh sua MSSV....";
	cout << "\nMa Sinh Vien : ";
	_flushall();
	gets_s(a[i].maSV, 8);

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

	cout << "\nTien hanh sua dia chi....";
	cout << "\nNhap dia chi: ";
	_flushall();
	gets_s(a[i].diaChi, 20);

	cout << "\nTien hanh sua Nam sinh....";
	cout << "\nNam sinh: ";
	_flushall();
	cin >> a[i].nam;

	cout << "\nTien hanh sua lop....";
	cout << "\nNhap lop: ";
	_flushall();
	gets_s(a[i].lop, 20);

	cout << "\nTien hanh sua DTB....";
	cout << "\nNhap DTB: ";
	_flushall();
	cin >> a[i].DTB;
}

void SuaSinhVien_Lop(SinhVien a[MAX], int &n, char Lop[MAX])
{
	int i;
	int dau = 0;
	for (i = 0; i < n; i++)
		if (strcmp(a[i].lop, Lop) == 0)
		{
			dau = 1;
			break;
		}
	if (!dau)
	{
		cout << "\nKhong co sinh vien nao trong danh sach co lop " << Lop;
		return;
	}
	cout << "\nSua thong tin sinh vien co lop : " << Lop;
	cout << "\nTien hanh sua MSSV....";
	cout << "\nMa Sinh Vien : ";
	_flushall();
	gets_s(a[i].maSV, 8);

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

	cout << "\nTien hanh sua dia chi....";
	cout << "\nNhap dia chi: ";
	_flushall();
	gets_s(a[i].diaChi, 20);

	cout << "\nTien hanh sua Nam sinh....";
	cout << "\nNam sinh: ";
	_flushall();
	cin >> a[i].nam;

	cout << "\nTien hanh sua lop....";
	cout << "\nNhap lop: ";
	_flushall();
	gets_s(a[i].lop, 20);

	cout << "\nTien hanh sua DTB....";
	cout << "\nNhap DTB: ";
	_flushall();
	cin >> a[i].DTB;
}

void SuaSinhVien_DiaChi(SinhVien a[MAX], int &n, char diaChi[MAX])
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
		cout << "\nKhong co sinh vien nao trong danh sach co dia chi " << diaChi;
		return;
	}
	cout << "\nSua thong tin sinh vien co dia chi : " << diaChi;
	cout << "\nTien hanh sua MSSV....";
	cout << "\nMa Sinh Vien : ";
	_flushall();
	gets_s(a[i].maSV, 8);

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

	cout << "\nTien hanh sua dia chi....";
	cout << "\nNhap dia chi: ";
	_flushall();
	gets_s(a[i].diaChi, 20);

	cout << "\nTien hanh sua Nam sinh....";
	cout << "\nNam sinh: ";
	_flushall();
	cin >> a[i].nam;

	cout << "\nTien hanh sua lop....";
	cout << "\nNhap lop: ";
	_flushall();
	gets_s(a[i].lop, 20);

	cout << "\nTien hanh sua DTB....";
	cout << "\nNhap DTB: ";
	_flushall();
	cin >> a[i].DTB;
}

void SuaSinhVien_DTB_LonHonBang_X(SinhVien a[MAX], int &n, int x)
{
	int i;
	int dau = 0;
	for (i = 0; i < n; i++)
		if (a[i].DTB >= x)
		{
			dau = 1;
			break;
		}
	if (!dau)
	{
		cout << "\nKhong co sinh vien nao trong danh sach co DTB " << x;
		return;
	}
	cout << "\nSua thong tin sinh vien co DTB : " << x;
	cout << "\nTien hanh sua MSSV....";
	cout << "\nMa Sinh Vien : ";
	_flushall();
	gets_s(a[i].maSV, 8);

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

	cout << "\nTien hanh sua dia chi....";
	cout << "\nNhap dia chi: ";
	_flushall();
	gets_s(a[i].diaChi, 20);

	cout << "\nTien hanh sua Nam sinh....";
	cout << "\nNam sinh: ";
	_flushall();
	cin >> a[i].nam;

	cout << "\nTien hanh sua lop....";
	cout << "\nNhap lop: ";
	_flushall();
	gets_s(a[i].lop, 20);

	cout << "\nTien hanh sua DTB....";
	cout << "\nNhap DTB: ";
	_flushall();
	cin >> a[i].DTB;
}

void SuaSinhVien_DTB_NhoHonBang_X(SinhVien a[MAX], int &n, int x)
{
	int i;
	int dau = 0;
	for (i = 0; i < n; i++)
		if (a[i].DTB <= x)
		{
			dau = 1;
			break;
		}
	if (!dau)
	{
		cout << "\nKhong co sinh vien nao trong danh sach co DTB " << x;
		return;
	}
	cout << "\nSua thong tin sinh vien co DTB : " << x;
	cout << "\nTien hanh sua MSSV....";
	cout << "\nMa Sinh Vien : ";
	_flushall();
	gets_s(a[i].maSV, 8);

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

	cout << "\nTien hanh sua dia chi....";
	cout << "\nNhap dia chi: ";
	_flushall();
	gets_s(a[i].diaChi, 20);

	cout << "\nTien hanh sua Nam sinh....";
	cout << "\nNam sinh: ";
	_flushall();
	cin >> a[i].nam;

	cout << "\nTien hanh sua lop....";
	cout << "\nNhap lop: ";
	_flushall();
	gets_s(a[i].lop, 20);

	cout << "\nTien hanh sua DTB....";
	cout << "\nNhap DTB: ";
	_flushall();
	cin >> a[i].DTB;
}

void SuaSinhVien_DTBCaoNhat(SinhVien a[MAX], int &n)
{
	int i;
	int dau = 0;
	int max = DTBCaoNhat(a, n);
	for (i = 0; i < n; i++)
		if (a[i].DTB == max)
		{
			dau = 1;
			break;
		}
	if (!dau)
	{
		cout << "\nKhong co sinh vien nao trong danh sach co DTB cao nhat";
		return;
	}
	cout << "\nSua thong tin sinh vien co DTB cao nhat";
	cout << "\nTien hanh sua MSSV....";
	cout << "\nMa Sinh Vien : ";
	_flushall();
	gets_s(a[i].maSV, 8);

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

	cout << "\nTien hanh sua dia chi....";
	cout << "\nNhap dia chi: ";
	_flushall();
	gets_s(a[i].diaChi, 20);

	cout << "\nTien hanh sua Nam sinh....";
	cout << "\nNam sinh: ";
	_flushall();
	cin >> a[i].nam;

	cout << "\nTien hanh sua lop....";
	cout << "\nNhap lop: ";
	_flushall();
	gets_s(a[i].lop, 20);

	cout << "\nTien hanh sua DTB....";
	cout << "\nNhap DTB: ";
	_flushall();
	cin >> a[i].DTB;
}

void SuaSinhVien_DTBThapNhat(SinhVien a[MAX], int &n)
{
	int i;
	int dau = 0;
	int min = DTBThapNhat(a, n);
	for (i = 0; i < n; i++)
		if (a[i].DTB == min)
		{
			dau = 1;
			break;
		}
	if (!dau)
	{
		cout << "\nKhong co sinh vien nao trong danh sach co DTB thap nhat";
		return;
	}
	cout << "\nSua thong tin sinh vien co DTB thap nhat";
	cout << "\nTien hanh sua MSSV....";
	cout << "\nMa Sinh Vien : ";
	_flushall();
	gets_s(a[i].maSV, 8);

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

	cout << "\nTien hanh sua dia chi....";
	cout << "\nNhap dia chi: ";
	_flushall();
	gets_s(a[i].diaChi, 20);

	cout << "\nTien hanh sua Nam sinh....";
	cout << "\nNam sinh: ";
	_flushall();
	cin >> a[i].nam;

	cout << "\nTien hanh sua lop....";
	cout << "\nNhap lop: ";
	_flushall();
	gets_s(a[i].lop, 20);

	cout << "\nTien hanh sua DTB....";
	cout << "\nNhap DTB: ";
	_flushall();
	cin >> a[i].DTB;
}

void XuatSinhVien_1_MSNV(SinhVien a[MAX], int n, char maSV[])
{
	XuatTieuDe();
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		if (_strcmpi(a[i].maSV, maSV) == 0)
			Xuat_1_SinhVien(a[i]);
	}
	XuatDongKeNgangDoi();
}

void XuatDSSV_CungMSSV(SinhVien a[MAX], int n)
{
	SinhVien b[MAX];
	int m = 0;
	int dau;
	for (int i = 0; i < n; i++)
	{
		dau = 1;
		for (int j = 0; j < m; j++)
			if (_strcmpi(a[i].maSV, b[j].maSV) == 0)
			{
				dau = 0;
				break;
			}
		if (dau)
		{
			strcpy_s(b[m].maSV, a[i].maSV);
			m++;
		}
	}
	for (int j = 0; j < m; j++)
	{
		cout << "\n\n\t========================== " << b[j].maSV << " ==========================\n";
		XuatSinhVien_1_MSNV(a, n, b[j].maSV);
	}
}

void XuatSinhVien_1_Ho(SinhVien a[MAX], int n, char Ho[])
{
	XuatTieuDe();
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		if (_strcmpi(a[i].hoTen.ho, Ho) == 0)
			Xuat_1_SinhVien(a[i]);
	}
	XuatDongKeNgangDoi();
}

void XuatDSSV_CungHo(SinhVien a[MAX], int n)
{
	SinhVien b[MAX];
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
		XuatSinhVien_1_Ho(a, n, b[j].hoTen.ho);
	}
}

void XuatSinhVien_1_HoLot(SinhVien a[MAX], int n, char HoLot[])
{
	XuatTieuDe();
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		if (_strcmpi(a[i].hoTen.hoLot, HoLot) == 0)
			Xuat_1_SinhVien(a[i]);
	}
	XuatDongKeNgangDoi();
}

void XuatDSSV_CungHoLot(SinhVien a[MAX], int n)
{
	SinhVien b[MAX];
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
		XuatSinhVien_1_HoLot(a, n, b[j].hoTen.hoLot);
	}
}

void XuatSinhVien_1_Ten(SinhVien a[MAX], int n, char Ten[])
{
	XuatTieuDe();
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		if (_strcmpi(a[i].hoTen.ten, Ten) == 0)
			Xuat_1_SinhVien(a[i]);
	}
	XuatDongKeNgangDoi();
}

void XuatDSSV_CungTen(SinhVien a[MAX], int n)
{
	SinhVien b[MAX];
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
		XuatSinhVien_1_Ten(a, n, b[j].hoTen.ten);
	}
}

void XuatSinhVien_1_NamSinh(SinhVien a[MAX], int n, int namSinh)
{
	XuatTieuDe();
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		if (a[i].nam == namSinh)
			Xuat_1_SinhVien(a[i]);
	}
	XuatDongKeNgangDoi();
}

void XuatDSSV_CungNamSinh(SinhVien a[MAX], int n)
{
	SinhVien b[MAX];
	int m = 0;
	int dau;
	for (int i = 0; i < n; i++)
	{
		dau = 1;
		for (int j = 0; j < m; j++)
			if (a[i].nam == b[j].nam)
			{
				dau = 0;
				break;
			}
		if (dau)
		{
			b[m].nam = a[i].nam;
			m++;
		}
	}
	for (int j = 0; j < m; j++)
	{
		cout << "\n\n\t========================== " << b[j].nam << " ==========================\n";
		XuatSinhVien_1_NamSinh(a, n, b[j].nam);
	}
}

void XuatSinhVien_1_Lop(SinhVien a[MAX], int n, char Lop[])
{
	XuatTieuDe();
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		if (_strcmpi(a[i].lop, Lop) == 0)
			Xuat_1_SinhVien(a[i]);
	}
	XuatDongKeNgangDoi();
}

void XuatDSSV_CungLop(SinhVien a[MAX], int n)
{
	SinhVien b[MAX];
	int m = 0;
	int dau;
	for (int i = 0; i < n; i++)
	{
		dau = 1;
		for (int j = 0; j < m; j++)
			if (_strcmpi(a[i].lop, b[j].lop) == 0)
			{
				dau = 0;
				break;
			}
		if (dau)
		{
			strcpy_s(b[m].lop, a[i].lop);
			m++;
		}
	}
	for (int j = 0; j < m; j++)
	{
		cout << "\n\n\t========================== " << b[j].lop << " ==========================\n";
		XuatSinhVien_1_Lop(a, n, b[j].lop);
	}
}

void XuatSinhVien_1_DiaChi(SinhVien a[MAX], int n, char diaChi[])
{
	XuatTieuDe();
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		if (_strcmpi(a[i].diaChi, diaChi) == 0)
			Xuat_1_SinhVien(a[i]);
	}
	XuatDongKeNgangDoi();
}

void XuatDSSV_CungDiaChi(SinhVien a[MAX], int n)
{
	SinhVien b[MAX];
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
		XuatSinhVien_1_DiaChi(a, n, b[j].diaChi);
	}
}

void XuatSinhVien_1_MucDTB(SinhVien a[MAX], int n, double DTB)
{
	XuatTieuDe();
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		if (a[i].DTB == DTB)
			Xuat_1_SinhVien(a[i]);
	}
	XuatDongKeNgangDoi();
}

void XuatDSSV_CungMucDTB(SinhVien a[MAX], int n)
{
	SinhVien b[MAX];
	int m = 0;
	int dau;
	for (int i = 0; i < n; i++)
	{
		dau = 1;
		for (int j = 0; j < m; j++)
			if (a[i].DTB == a[j].DTB)
			{
				dau = 0;
				break;
			}
		if (dau)
		{
			b[m].DTB = a[i].DTB;
			m++;
		}
	}
	for (int j = 0; j < m; j++)
	{
		cout << "\n\n\t========================== " << b[j].DTB << " ==========================\n";
		XuatSinhVien_1_MucDTB(a, n, b[j].DTB);
	}
}

void Nhap_1_SinhVien(SinhVien &b)
{
	cout << "\nTien hanh nhap MSSV....";
	cout << "\nMa Sinh Vien : ";
	_flushall();
	gets_s(b.maSV, 8);

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

	cout << "\nTien hanh sua dia chi....";
	cout << "\nNhap dia chi: ";
	_flushall();
	gets_s(b.diaChi, 20);

	cout << "\nTien hanh sua Nam sinh....";
	cout << "\nNam sinh: ";
	_flushall();
	cin >> b.nam;

	cout << "\nTien hanh sua lop....";
	cout << "\nNhap lop: ";
	_flushall();
	gets_s(b.lop, 20);

	cout << "\nTien hanh nhap DTB....";
	cout << "\nNhap DTB: ";
	_flushall();
	cin >> b.DTB;
}

void ThemSinhVien_Dau(SinhVien a[MAX], int &n, SinhVien b)
{
	n++;
	for (int i = n; i > 0; i--)
	{
		a[i] = a[i - 1];
	}
	a[0] = b;
}

void ThemSinhVien_Cuoi(SinhVien a[MAX], int &n, SinhVien b)
{
	a[n++] = b;
}