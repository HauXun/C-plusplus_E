#define		MAX		100
#define		TAB		'\t'

typedef		int		DaySo[MAX];

void NhapTuDong(DaySo a, int &n)
{
	int i;
	cout << "\nNhap kich thuoc n: ";
	cin >> n;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
		a[i] = (MAX / 2 - rand() % MAX) / 6;
}

void XuatMang(DaySo a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << a[i] << TAB;
}

void XoaPhanTu(DaySo a, int &n, int x)
{
	for (int i = x; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}

int La_X_DauTien(DaySo a, int n, int x)
{
	int ketQua;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			ketQua = i;
		break;
	}
	return ketQua;
}

void XoaX_DauTien(DaySo a, int &n, int x)
{
	int viTri = La_X_DauTien(a, n, x);
	if (viTri == -1)
	{
		cout << "\nKhong tim thay phan tu muon xoa trong mang: " << x;
	}
	else
	{
		for (int i = viTri; i < n - 1; i++)
		{
			//Dịch các phần tử sang trái 1 vị trí
			a[viTri] = a[viTri + 1];
		}
		//Giảm số phần tử bớt 1
		n--;
	}
}

int La_X(DaySo a, int n, int x)
{
	int ketQua;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			ketQua = i;
	}
	return ketQua;
}

void XoaX_TrongMang(DaySo a, int &n, int x)
{
	int i, j;
	int dem = 0;
	for (i = 0; i<n; i++) 
	{
		if (a[i] == x)
		{
			for (j = i; j < n - 1; j++)
			{
				a[j] = a[j + 1];
			}
			n--;
			dem++;
		}
	}
	if (dem == 0)
		cout << "\nKhong tim thay x trong mang:";
}

void XoaCacPhanTuTrungNhau(DaySo a, int &n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] == a[i])
			{
				XoaPhanTu(a, n, i);
				j--;

				/*for (int k = j; k < n - 1; k++)
				{
					a[k] = a[k + 1];
				}
				n--;*/
			}
		}
	}
}