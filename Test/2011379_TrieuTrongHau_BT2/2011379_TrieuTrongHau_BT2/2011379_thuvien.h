#define MAX 20
#define TAB '\t'

typedef int DaySo[MAX];

void NhapMangTuDong(DaySo a, int &n)
{
	do
	{
		cout << "\nNhap vao so phan tu cua mang : ";
		cin >> n;
	} while (n < 0);

	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = (MAX / 2 - rand() % MAX) / 2;
}

void XuatMang(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << TAB;
}

int TinhTong(DaySo a, int n)
{
	int ketQua = 0;
	for (int i = 0; i < n; i++)
		ketQua += a[i];
	return ketQua;
}

int NhoNhat(DaySo a, int n)
{
	int min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (min > a[i])
			min = a[i];
	}
	return min;
}

int TimMinCuoiCung(DaySo a, int n)
{
	int min = a[0];
	int viTri = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (min > a[i])
			min = a[i];
		viTri = i;
	}
	return viTri;
}

void HoanVi(int &a, int &b)
{
	int tam = a;
	a = b;
	b = tam;
}


void So0CuoiMang(DaySo a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				HoanVi(a[i], a[j]);
			}
		}
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == 0 && a[j] != 0)
			{
				HoanVi(a[i], a[j]);
			}
		}
	}
}