#define MAX 100

typedef char String[MAX];

void NhapChuoi(String a)
{
	cout << "\nNhap chuoi: ";
	_flushall();
	gets_s(a, MAX);
}

void XuatChuoi(String a)
{
	cout << a;
}

int TinhChieuDai(String a)
{
	int ketQua = 0;
	for (int i = 0; a[i] != 0; i++)
		ketQua++;
	return ketQua;
}

void DoiKiTu_Thuong(String a)
{
	int doDai = TinhChieuDai(a);
	for (int i = 0; i < doDai; i++)
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			a[i] += 32;
		}
}

void DoiKiTu_HOA(String a)
{
	int doDai = TinhChieuDai(a);
	for (int i = 0; i < doDai; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}
	}
}

void HoanVi(char &a, char &b)
{
	char x = a;
	a = b;
	b = x;
}

void DaoNguocChuoi(String a)
{
	int doDai = TinhChieuDai(a);
	int mid = doDai / 2;

	for (int i = 0; i < mid; i++)
		HoanVi(a[i], a[doDai - i - 1]);
}

int ChuoiDoiXung(String a)
{
	int doDai = TinhChieuDai(a);
	int mid = doDai / 2;
	int ketQua = 1;

	for (int i = 0; i < mid && ketQua; i++)
	{
		if (a[i] != a[doDai - i - 1])
			ketQua = 0;
	}
	return ketQua;
}