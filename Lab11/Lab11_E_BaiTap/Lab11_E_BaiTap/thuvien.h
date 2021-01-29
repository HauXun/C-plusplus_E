#define MAX 100

struct Date
{
	int ngay;
	int thang;
	int nam;
};

struct NhanVien
{
	char maNV[7];
	char ho[10];
	char tenLot[10];
	char ten[10];
	Date ntns;
	char diaChi[20];
	double luong;
};

void DuLieu_Mang(char *filename, int a[MAX], int &n)
{
	ifstream in(filename);
	if (!in)
	{
		cout << "\nLoi mo file !";
		return;
	}
	else
	{
		in >> n;
		for (int i = 0; i < n; i++)
			in >> a[i];
		in.close();
	}
}

void HienThi_Mang(int a[MAX], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << '\t';
}

int DuLieu_NhanVien(char *filename, NhanVien ds[MAX], int &n)
{
	ifstream in(filename);
	if (!in)
	{
		cout << "\nLoi mo file !";
		return 0;
	}
	else
	{
		n = 0;
		while (!in.eof())
		{
			in >> ds[n].maNV;
			in >> ds[n].ho;
			in >> ds[n].tenLot;
			in >> ds[n].ten;
			in >> ds[n].ntns.ngay;
			in >> ds[n].ntns.thang;
			in >> ds[n].ntns.nam;
			in >> ds[n].diaChi;
			in >> ds[n].luong;
			n++;
		}
		in.close();
		return 1;
	}
}

void HienThi_NhanVien(NhanVien ds[MAX], int n)
{
	cout << setiosflags(ios::left);
	cout << setw(10) << "Ma NV"
		<< setw(10) << "Ho"
		<< setw(10) << "Ten Lot"
		<< setw(10) << "Ten"
		<< setw(17) << "NTNSinh"
		<< setw(15) << "Dia Chi"
		<< setw(15) << "Luong";
	cout << "\n";
	
	for (int i = 0; i < n; i++)
	{
		cout << setw(10) << ds[i].maNV
			<< setw(10) << ds[i].ho
			<< setw(10) << ds[i].tenLot
			<< setw(10) << ds[i].ten
			<< setw(4) << ds[i].ntns.ngay
			<< setw(4) << ds[i].ntns.thang
			<< setw(9) << ds[i].ntns.nam
			<< setw(15) << ds[i].diaChi
			<< setiosflags(ios::fixed) << setprecision(2) << setw(15) << ds[i].luong;
		cout << "\n";
	}
}