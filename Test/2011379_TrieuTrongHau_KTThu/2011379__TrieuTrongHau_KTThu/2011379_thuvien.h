#define TAB "\t"

void XuatDaySo(unsigned int n)
{
	cout << "\n";
	for (int i = 1; i <= n; i++)
	{
		cout << i << "\t";
		if (i % 10 == 0)
			cout << "\n";
	}
}

bool LaSoNguyenTo(unsigned int n)
{
	if (n < 2)
		return false;

	bool result = true;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
		{
			result = false;
			break;
		}
	return result;
}

void XuatN_SNT(unsigned int n)
{
	{
		int i = 2;
		int ketQua = 0;
		while (ketQua < n)
		{
			if (LaSoNguyenTo(i))
			{
				cout << i << TAB;
				ketQua++;
			}
			i++;
		}
	}
}

int demSoLuongChuSo(int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n /= 10;
	}

	return count;
}
int TimChuSoCuoiCung(int n)
{
	int ketQua;
		ketQua = n % 10;
	return ketQua;
}

int TichCacChuSo(int n)
{
	long Tich = 1;
	while (n > 0)
	{
		int t = n % 10;

		Tich *= t;

		n /= 10;
	}
	return Tich;
}