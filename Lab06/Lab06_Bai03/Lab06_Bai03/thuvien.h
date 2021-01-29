#define SIZE 100
#define TAB "\t"

typedef int MaTranVuong[SIZE][SIZE];

void NhapMaTran_TD(int a[SIZE][SIZE], int m, int n)
{
	srand((unsigned)time(0));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % 10;
}

void XuatMaTran(int a[SIZE][SIZE], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
			cout << setw(7) << setprecision(3) << a[i][j];
	}
}

void HoanVi(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void HoanVi_HaiCot(int a[SIZE][SIZE], int m, int n, int j, int h)
{
	if ((j >= 0 && j < m) && (h >= 0 && h < m))
		for (int i = 0; i < n; i++)
			HoanVi(a[i][j], a[i][h]);
}

void HoanVi_HaiDong(int a[SIZE][SIZE], int m, int n, int i, int k)
{
	if ((i >= 0 && i < n) && (k >= 0 && k < n))
		for (int j = 0; j < m; j++)
			HoanVi(a[i][j], a[k][j]);
}

void MaTran_HoanVi(int a[SIZE][SIZE], int m, int n)
{
	for (int j = 0; j < m; j++)
	{
		cout << "\n";
		for (int i = 0; i < n; i++)
			cout << setw(7) << setprecision(3) << a[i][j];
		cout << "\n";
	}
}