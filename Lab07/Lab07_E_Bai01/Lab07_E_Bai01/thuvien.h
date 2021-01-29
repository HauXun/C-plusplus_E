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
	cout << "\n" << a;
}

int TinhChieuDaiChuoi(String a)
{
	int ketQua = 0;
	for (int i = 0; a[i] != 0; i++)
	{
		ketQua++;
	}
	return ketQua;
}

//Chen ki tu vao dau chuoi
void ChenDauChuoi(String a, char x)
{
	int doDai = TinhChieuDaiChuoi(a);
	for (int i = doDai; i >= 0; i--)
		a[i + 1] = a[i];
	a[0] = x;
}

//Chen ki tu vao cuoi chuoi
void ChenCuoiChuoi(String a, char x)
{
	int doDai = TinhChieuDaiChuoi(a);
	a[doDai] = x;
	a[doDai++] = 0;
}

//Chen ki tu vao chuoi tai vi tri cho truoc
void ChenKT_VT(String a, char x, char vt)
{
	int doDai = TinhChieuDaiChuoi(a);
	for (int i = doDai; i > vt; i--)
		a[i] = a[i - 1];
	a[vt] = x;
	a[doDai++] = 0;
}

//Xoa ki tu dau chuoi
void XoaDauChuoi(String a)
{
	int doDai =TinhChieuDaiChuoi(a);
	for (int i = 0; i < doDai; i++)
		a[i] = a[i + 1];
}

//Xoa ki tu cuoi chuoi
void XoaCuoiChuoi(String a)
{
	for (int i = 0; a[i] != NULL; i++)
		a[i - 1] = 0;
}

//Xoa ki tu trong chuoi tai vi tri cho truoc
void XoaKT_VT(String a, int vt)
{
	int doDai = TinhChieuDaiChuoi(a);
	for (int i = vt; i < doDai; i++)
		a[i] = a[i + 1];
}

//Cat ki tu dau roi chen vao cuoi chuoi
void CatDauChenCuoi(String a)
{
	int doDai = TinhChieuDaiChuoi(a);
	char x = a[0];
	for (int i = 0; i < doDai; i++)
		a[i] = a[i + 1];
	a[doDai--] = x;
}

//Cat ki tu cuoi roi chen vao dau chuoi
void CatCuoiChenDau(String a)
{
	int doDai = TinhChieuDaiChuoi(a);
	char x = a[doDai - 1];
	for (int i = doDai - 1; i > 0; i--)
		a[i] = a[i - 1];
	a[0] = x;
}

//Xoa tat ca cac ki tu cho truoc trong chuoi
void Xoa_X_TrongChuoi(String a, char x)
{
	 int doDai = TinhChieuDaiChuoi(a);
	 for (int i = 0; i < doDai; i++)
	 {
		 if (a[i] == x)
		 {
			 XoaKT_VT(a, i);
			 i--;
		 }
	 }
}

//Thay x trong chuoi bang y
void ThayX_BangY(String a, char x, char y)
{
	for (int i = 0; a[i] != 0; i++)
	if (a[i] == x)
		a[i] = y;
}