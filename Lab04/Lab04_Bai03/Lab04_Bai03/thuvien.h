int KiemTraNguyenTo(unsigned int n);
void XuatSoNguyenTo(unsigned int n);
int DemSoNguyenTo(unsigned int n);
int TinhTongUocSNT(unsigned int n);
void PhanTichThuaSo(unsigned int n);

int KiemTraNguyenTo(unsigned int n)
{
	if (n < 2)
		return false;

	bool ketQua = true;

	/*Nếu bạn để ý thì
	một số nguyên >= 2 bất kỳ sẽ luôn có số ước ở nửa đầu căn bậc 2 của nó
	bằng số ước ở nửa sau căn bậc 2 của nó.
	Cụ thể, các ước sẽ phân bố thành 2 miền từ [2; sqrt(x)] và từ [sqrt(x); x]*/
	for (int i = 2; i <= sqrt(n); i++)
	if (n % i == 0)
	{
		ketQua = false;
		break;
	}
	return ketQua;
}

void XuatSoNguyenTo(unsigned int n)
{
	int ketQua = 0;
	for (int i = 1; i <= n; i++)
	if (KiemTraNguyenTo(i))
	{
		ketQua++;
		cout << i << "\t";
		if (ketQua % 5 == 0)
			cout << endl;
	}
}

int DemSoNguyenTo(unsigned int n)
{
	int ketQua = 0;
	for (int i = 1; i <= n; i++)
	if (KiemTraNguyenTo(i))
	{
		ketQua++;
	}

	return ketQua;
}

int TinhTongUocSNT(unsigned int n)
{
	int ketQua = 0;
	for (int i = 1; i <= n; i++)
	if (n % i == 0)
	{
		ketQua += i;
	}
	return ketQua;
}

void PhanTichThuaSo(unsigned int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (KiemTraNguyenTo(i))
		{
			if (n % i == 0)
			{
				cout << i << ".";
				n /= i;
			}
		}
	}
}