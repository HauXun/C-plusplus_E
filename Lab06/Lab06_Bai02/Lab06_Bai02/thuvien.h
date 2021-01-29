#define SIZE 100
#define TAB "\t"

typedef double MaTranVuong[SIZE][SIZE];

void NhapMaTran_TD(MaTranVuong a, int n)
{
	srand((unsigned)time(NULL));
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			a[i][j] = rand() % 10;
}

void NhapMaTran(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
}

void XuatMaTran(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		cout << "\n";
		for (j = 0; j < n; j++)
			cout << setw(7) << setprecision(3) << a[i][j];
	}
	cout << "\n";
}

int KiemTraDoiXung(MaTranVuong a, int n)
{
	int i, j, ketQua = 1;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] != a[j][i])
			{
				ketQua = 0;
			}
		}
	}
	return ketQua;
}

int KiemTraMaTranTGT(MaTranVuong a, int n)
{
	//Ma tran tam giac tren la ma tran co cac phan tu nam duoi duong cheo chinh bang 0
	int ketQua = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[i][j] != 0)
			{
				ketQua = 0;
			}
		}
	}
	return ketQua;
}

int KiemTraMaTranTGD(MaTranVuong a, int n)
{
	//Ma tran tam giac duoi la ma tran co cac phan tu nam tren duong cheo chinh bang 0
	int ketQua = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (a[i][j] != 0)
			{
				ketQua = 0;
			}
		}
	}
	return ketQua;
}

int KiemTraMaTranCheo(MaTranVuong a, int n)
{
	//Ma tran tam giac cheo la ma tran co cac phan tu nam ngoai duong cheo chinh bang 0
	int ketQua = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			// Nếu có một phần tử bất kỳ nằm ngoài đường chéo chính khác 0 => sai
			// Vì các phần tử ngoài đường chéo chính sẽ có chỉ số hàng(i) khác chỉ số cột (j) nên có điều kiện i != j
			if (i != j && a[i][j] != 0)
			{
				ketQua = 0;
			}
		}
	}
	// Nếu không xảy ra if trên kia, thì đây là ma trận đường chéo.
	return ketQua;
}

int KiemTraMaTranDonVi(MaTranVuong a, int n)
{
	//Ma tran tam giac don vi la ma tran co cac phan tu nam tren duong cheo chinh bang 1, tat ca phan tu khac deu bang 0
	int i, j, ketQua = 1;
	for (i = 0; i < n; i++)
	{
		if (a[i][i] != 1)
		{
			ketQua = 0;
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if ((a[i][j] != 0) || (a[j][i] != 0))
			{
				ketQua = 0;
			}
		}
	}
	return ketQua;
}
