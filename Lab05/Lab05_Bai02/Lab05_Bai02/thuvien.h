#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];

void NhapMangTuDong(DaySo a, int &n);
void XuatMang(DaySo a, int n);
int KiemTraSoCo3ChuSo(int n);
int DemSoLuongSoCo3ChuSo(DaySo a, int n);
int SoLanXuatHien_X(DaySo a, int n, int x, int vt);
int DemSoNamNgoaiPhamVi(DaySo a, int n, int min, int max);
int KT_SoChinhPhuong(int n);
int DemSoChinhPhuong(DaySo a, int n);
int SoLanXuatHien_X(DaySo a, int n, int x, int vt);

void NhapMangTuDong(DaySo a, int &n)
{
	do
	{
		cout << "\nNhap vao so luong phan tu >> ";
		cin >> n;
	} while (n <= 0);

	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 300;
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

int KiemTraSoCo3ChuSo(int n)
{
	int ketQua = 0, bienDem = 0;

	while (n > 0)
	{
		bienDem++;
		n /= 10;
	}

	if (bienDem == 3)
		ketQua = 1;

	return ketQua;
}

int DemSoLuongSoCo3ChuSo(DaySo a, int n)
{
	int bienDem = 0;
	for (int i = 0; i < n; i++)
		if (KiemTraSoCo3ChuSo(a[i]))
			bienDem++;
	return bienDem;
}

int DemSoNamNgoaiPhamVi(DaySo a, int n, int min, int max)
{
	int bienDem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < min || a[i] > max)
			bienDem++;
	return bienDem;
}

int KT_SoChinhPhuong(int n)
{
	int bienTam;
	bienTam = (int)sqrt((double)n);
	bienTam * bienTam == n;
	return bienTam;
}

int DemSoChinhPhuong(DaySo a, int n)
{
	int bienDem = 0;
	for (int i = 0; i < n; i++)
		if (KT_SoChinhPhuong(a[i]))
			bienDem++;
	return bienDem;
}

int SoLanXuatHien_X(DaySo a, int n, int x, int ViTri)
{
	if (ViTri >= n)
		return 0;
	int bienDem = 0;
	for (int i = ViTri; i < n; i++)
		if (a[i] == x)
			bienDem++;
	return bienDem;
}