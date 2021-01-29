#define MAX 100
#define TAB "\t"

typedef int DaySo[MAX];


void NhapMangTuDong(DaySo a, int &n)
{
	do
	{
		cout << "\nNhap vao so luong phan tu >> ";
		cin >> n;
	} while (n <= 0);

	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 100;
}

void XuatMang(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << TAB;
		if ((i + 1) % 10 == 0)
			cout << "\n";
	}
}

double Tinh_TBC(DaySo a, int n)
{
	int Tong = 0;
	double trungBinh;
	for (int i = 0; i < n; i++)
		Tong += a[i];
	trungBinh = (double)Tong / n;
	return trungBinh;
}


long Tong_BinhPhuong(DaySo a, int n)
{
	long ketQua = 0;
	for (int i = 0; i<n; i++)
		ketQua += a[i] * a[i];
	return ketQua;
}

bool laSoNguyenTo1(int n)
{
	// Neu n < 2 thi khong phai la SNT
	if (n < 2){
		return false;
	}

	for (int i = 2; i < sqrt(n); i++){
		if (n % i == 0){
			return false;
		}
	}

	return true;
}

int KiemTraSoCo2ChuSo(int n)
{
	int ketQua = 0, dem = 0;

	while (n > 0)
	{
		dem++;
		n /= 10;
	}

	if (dem == 2)
	{
		ketQua = 1;
	}
	return ketQua;
}

int TinhTongSNT_2ChuSo(DaySo a, int n)
{
	int TongSNT = 0;
	for (int i = 0; i < n; i++)
		if (KiemTraSoCo2ChuSo(a[i]) && laSoNguyenTo1(a[i]))
		{
			cout << "SNT trong mang la:\n" << a[i] << TAB;
			TongSNT += a[i];
		}
	return TongSNT;
}