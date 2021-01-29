#define MAX 20
#define THOAT 0

struct DATE
{
	int ngay;
	int thang;
	int nam;
};

struct NHANVIEN
{
	int maSo;
	char hoTen[MAX];
	DATE ntns;
	char diaChi[MAX];
	double luong;
};

int Read_Struct(char *filename, NHANVIEN ds[MAX], int &n)
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
			in >> ds[n].maSo;
			in >> ds[n].hoTen;
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

void Xuat(NHANVIEN ds[MAX], int n)
{
	cout << setiosflags(ios::left);
	cout << setw(20) << "MaSo"
		<< setw(20) << "Ho ten"
		<< setw(20) << "Ngay sinh"
		<< setw(20) << "Thang sinh"
		<< setw(20) << "Nam sinh"
		<< setw(20) << "Dia chi"
		<< setw(20) << "Luong";
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << setw(20) << ds[i].maSo
			<< setw(20) << ds[i].hoTen
			<< setw(20) << ds[i].ntns.ngay
			<< setw(20) << ds[i].ntns.thang
			<< setw(20) << ds[i].ntns.nam
			<< setw(20) << ds[i].diaChi
			<< setiosflags(ios::fixed) << setprecision(2) << setw(20) << ds[i].luong;
		cout << "\n";
	}
}