#define MAX 100
#define TAB "\t"

typedef int DaySo[100];

void NhapMangTuDong(DaySo a, int &n);
void XuatMang(DaySo a, int n);
void ChenViTri(DaySo a, int &n, int x, int viTri);
int XLonNhat(DaySo a, int &n);
void ChenSauXLonNhat(DaySo a, int &n, int x);


void NhapMangTuDong(DaySo a, int &n)
{
	do
	{
		cout << "\nNhap vao so phan tu cua mang: ";
		cin >> n;
	} while (n < 0);
	srand((unsigned)time(0));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 20;
}

void XuatMang(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << TAB;
}

void ChenViTri(DaySo a, int &n, int x, int viTri)
{
	n++;
	for (int i = n - 1; i >= viTri; i--)
		a[i + 1] = a[i];
	a[viTri] = x;
}

int XLonNhat(DaySo a, int &n)
{
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	return max;
}

void ChenSauXLonNhat(DaySo a, int &n, int x)
{
	int i, j, max = XLonNhat(a, n);
	for (i = n - 1; i >= 0; i--)
	{
		if (a[i] == max)
		{
			n++;
			for (j = n; j > i; j--)
			{
				a[j] = a[j - 1];
			}
			a[j + 1] = x;
		}
	}
}

int SoNguyenTo(int x)
{
	int ketQua;
	if (x < 2)
		return 0;
	else
	{
		ketQua = 1;
		for (int i = 2; i <= x/2; i++)
			if (x % i == 0)
			{
				return 0;
			}
	}
	return ketQua;
}

int SoNguyenToDauTien(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (SoNguyenTo(a[i]) == 1)
		{
			return i;
		}
	}
	return -1;
}

void ChenX_TruocSNT_DauTien(DaySo a, int &n, int x)
{
	int SNT = SoNguyenToDauTien(a, n);
	n++;
	for (int i = n; i >= SNT + 1; i--)
		a[i] = a[i - 1];
	a[SNT] = x;
}

void ChenX_SauY_ChoTruoc(DaySo a, int &n, int x, int y)
{
	int i, j;
	for (i = n - 1; i >= 0; i--)
	{
		if (a[i] == y)
		{
			n++;
			for (j = n; j > i; j--)
			{
				a[j] = a[j - 1];
			}
			a[j] = x;
		}
	}
}

int TinhMin(DaySo a, int n)
{
	int i, min;
	min = a[0];

	for (i = 1; i < n; i++)
		if (a[i] < min)
			min = a[i];
	return min;
}

void ThayMin_BangX(DaySo a, int &n, int x)
{
	int min = TinhMin(a, n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == min)
		{
			a[i] = x;
		}
	}
}