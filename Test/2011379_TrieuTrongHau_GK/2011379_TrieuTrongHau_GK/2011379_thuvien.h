#define MAX 19
#define TAB "\t"

typedef int MaTranVuong[MAX][MAX];

void NhapMaTran_TD(MaTranVuong a, int n)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = (MAX / 2 - rand() % MAX) / 2;
}

void XuatMaTran(MaTranVuong a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
			cout << setw(4) << setprecision(3) << a[i][j];
	}
}

int Tinh_Tong_Cot_J(MaTranVuong a, int i, int n)
{
	int j, sum = 0;
	for (j = 0; j < n; j++)
		sum += a[j][i];
	return sum;
}

int Tinh_Tich_Hang_I(MaTranVuong a, int i, int n)
{
	int p;
	p = 1;
	for (int j = 0; j < n; j++)
		p *= a[i][j];
	return p;
}

int Tinh_Min_Hang_i(MaTranVuong a, int i, int n)
{
	int mini, j;
	mini = a[i][0];
	for (j = 1; j < n; j++)
		if (mini > a[i][j])
			mini = a[i][j];
	return mini;
}

int Tinh_Max_Cot_j(MaTranVuong a, int j, int n)
{
	int maxj, i;
	maxj = a[0][j];
	for (i = 1; i < n; i++)
		if (maxj < a[i][j])
			maxj = a[i][j];
	return maxj;
}

void MinHang_MaxCot(MaTranVuong a, int n)
{
	int i, j;
	int dau = 0;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] == Tinh_Min_Hang_i(a, i, n) && a[i][j] == Tinh_Max_Cot_j(a, j, n))
			{
				dau = 1;
				break;
			}
	if (!dau)
		cout << "\nKhong co phan tu nao thoa dieu kien bai toan.";
	else
	{
		cout << "\nCac phan tu a[i][j] thoa: Min hang i va Max cot j : \n";
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				if (a[i][j] == Tinh_Min_Hang_i(a, i, n) && a[i][j] == Tinh_Max_Cot_j(a, j, n))
					cout << "\na[" << i << "][" << j << "] = " << a[i][j]
					<< " : Min hang " << i << " va Max cot " << j;
	}
}
