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
		a[i] = rand() % 20;
}

void XuatMang(DaySo a, int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << TAB;
		dem++;
		if (dem % 10 == 0)
			cout << "\n";
	}
}

int KT_Chua0(DaySo a, int n)
{
	int ketQua = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
			ketQua = 1;
	}
	return ketQua;
}

int KT_Chua_0_Va_1(DaySo a, int n)
{
	int ketQua = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0 && a[i] == 1)
			ketQua = 1;
	}
	return ketQua;
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

int KTPT_BangTBT_CacPT(DaySo a, int n)
{
	int TBC = Tinh_TBC(a, n);
	for (int i = 0; i < n; i++)
		if (a[i] == TBC)
		{
			return 1;
		}
	return 0;
}

int KT_Chua_GiaTriAm(DaySo a, int n)
{
	int ketQua = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
			ketQua = 1;
	}
	return ketQua;
}