#define SIZE 5
#define TAB "\t"

typedef int MaTranVuong[SIZE][SIZE];

void NhapMaTran(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++) // hang i
		for (j = 0; j < n; j++) //cot j
		{
			cout << "\na[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
}

void XuatMaTran(MaTranVuong a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << '\n';
		for (int j = 0; j < n; j++)
			cout << a[i][j] << TAB;
	}
}

int TinhTong_MaTran(MaTranVuong a, int n)
{
	int ketQua = 0;
	for (int i = 0; i < n; i++) // hang i
		for (int j = 0; j < n; j++) //cot j
			ketQua += a[i][j];
	return ketQua;
}

void XuatDuongCheoChinh(MaTranVuong a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i][i] << TAB;
}

void XuatDuongCheoPhu(MaTranVuong a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i][n - i - 1] << TAB;
}

int TinhTong_Tren_CheoChinh(MaTranVuong a, int n)
{
	int ketQua = 0;
	for (int i = 0; i < n; i++) // hang i
		for (int j = 0; j < n; j++) //cot j
			if (i == j)
			ketQua += a[i][j];
	return ketQua;
}

int TinhTich_duoi_CheoPhu(MaTranVuong a, int n)
{
	int Tich = 1;
	for (int i = 0; i < n; i++) // hang i
		for (int j = 0; j < n; j++) //cot j
			if (j == n - i - 1)
			Tich *= a[i][j];
	return Tich;
}

void Xuat_DuongCheo_SS_DCChinh(MaTranVuong a, int n)
{
	int i, //hang
		j,//cot
		k;//cac duong cheo
	cout << "\n\nCac duong cheo phia tren duong cheo chinh:\n";
	for (k = n - 1; k >= 1; k--)
	{
		cout << "\nduong cheo thu " << k << ":\t";
		for (i = 0; i < n; i++)
			for (j = i + 1; j < n; j++)
				if (j - i == k)
					cout << a[i][j] << '\t';
	}
	cout << "\n\nCac duong cheo phia duoi duong cheo chinh:\n";
	for (k = n - 1; k >= 1; k--)
	{
		cout << "\nduong cheo thu " << k << ":\t";
		for (i = 1; i < n; i++)
			for (j = 0; j < i; j++)
				if (i - j == k)
					cout << a[i][j] << '\t';
	}
}