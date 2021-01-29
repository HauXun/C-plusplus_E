#define MAX 100
#define TAB "\t"

typedef int DaySo[100];
void NhapMangTuDong(DaySo a, int &n);
void XuatMang(DaySo a, int n);
int SoNguyenTo(int n);
int SoNguyenToCuoiCung(DaySo a, int n);
int DemSoLanXuatHien(DaySo a, int n, int x);
int PhanTuXuatHienNhieuNhat(DaySo a, int n);
int ViTriNhoNhat(DaySo a, int n);
int TimSoAmLonNhat(DaySo a, int n);
int TimSoDuongNhoNhat(DaySo a, int n);

void NhapMangTuDong(DaySo a, int &n)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = (MAX / 2 - rand() % MAX) / 6;
}

void XuatMang(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << TAB;
}

int soNguyenTo(int n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return 0;
	return 1;
}


int SoNguyenToCuoiCung(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
		if (soNguyenTo(a[i]))
			return i;
	return -1;
}

int DemSoLanXuatHien(DaySo a, int n, int x)
{
	int bienDem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			bienDem++;
	return bienDem;
}

int PhanTuXuatHienNhieuNhat(DaySo a, int n)
{
	int ketQua = a[0];
	int bienDem = DemSoLanXuatHien(a, n, a[0]);
	for (int i = 0; i < n; i++)
	{
		int bienTam = DemSoLanXuatHien(a, n, a[i]);
		if (bienTam > bienDem)
		{
			bienDem = bienTam;
			ketQua = a[i];
		}
	}
	return ketQua;
}
int ViTriNhoNhat(DaySo a, int n)
{
	int viTri = 0;
	int min = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] < min)
		{
			min = a[i];
			viTri = i;
		}
	return viTri;
}

int TimSoAmLonNhat(DaySo a, int n)
{
	int ketQua = -1,
		viTri = -1;
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
		{
			ketQua = a[i];
			viTri = i;
			
		}
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0 && a[i] > ketQua)
		{
			ketQua = a[i];
			viTri = i;
		}
	}
	return viTri;
}

int TimSoDuongNhoNhat(DaySo a, int n)
{
	int ketQua = 1,
		viTri = -1;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
		{
			ketQua = a[i];
			viTri = i;

		}
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0 && a[i] < ketQua)
		{
			ketQua = a[i];
			viTri = i;
		}
	}
	return viTri;
}