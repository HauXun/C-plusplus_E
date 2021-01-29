#define MAX 100
typedef int DaySo[MAX];

void TaoMangTuDong(DaySo a, int &n)
{
	do
	{
		cout << "\nNhap vao phan tu cua mang: ";
		cin >> n;
	} while (n < 0);
	srand((unsigned)time(0));
	for (int i = 0; i < n; i++)
		*(a + i) = (1 - 10) + rand() % 20;
}

void XuatMang(DaySo a, int n)
{
	cout << "\n";
	for (int i = 0; i < n; i++)
		cout << *(a + i) << "\t";
	cout << "\n";
}

int TimMax(DaySo a, int n)
{
	int max = *(a + 0);
	for (int i = 0; i < n; i++)
		max = (max < *(a + i)) ? *(a + i) : max;
	return max;
}

int TinhTong(DaySo a, int n)
{
	int ketQua = 0;
	for (int i = 0; i < n; i++)
		ketQua += *(a + i);
	return ketQua;
}

int DemSoDuong(DaySo a, int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (*(a + i) > 0)
			dem++;
	return dem;
}

int Dem_X(DaySo a, int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (*(a + i) == x)
			dem++;
	return dem;
}