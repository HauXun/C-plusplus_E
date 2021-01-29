#define MAX 100
#define TAB "\t"

typedef int *MaTranVuong;

void NhapMaTran(MaTranVuong &a, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "\n";
			cout << "a[" << i << "][" << j << "] = ";
			cin >> *(a + i*n + j);
		}
}

void NhapMaTranTD(MaTranVuong &a, int n)
{
	srand((unsigned)time(0));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			*(a + i*n + j) = rand() % 10;
}

void XuatMaTran(MaTranVuong a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
			cout << setw(4) << *(a + i*n + j);
	}
}

int MaTranDoiXung(MaTranVuong a, int n)
{
	//Ma tran doi xung la ma tran co cac phan tu nam doi xung voi nhau qua duong cheo chinh
	//Nghia la: a[i][j]=a[j][i]
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (*(a + i*n + j) != *(a + j*n + i))
				return 0;
	return 1;
}

int MaTranTGT(MaTranVuong a, int n)
{
	//Ma tran tam giac tren la ma tran co cac phan tu nam duoi duong cheo chinh bang 0
	for (int i = 0; i < n; i++)
		for (int j = 0; j < i; j++)
			if (*(a + i*n + j) != 0)
				return 0;
	return 1;
}

int MaTranTGD(MaTranVuong a, int n)
{
	//Ma tran tam giac duoi la ma tran co cac phan tu nam tren duong cheo chinh bang 0
	for (int i = 0; i < n; i++)
		for (int j = 1; j < i; j++)
			if (*(a + i*n + j) != 0)
				return 0;
	return 1;
}

int MaTranTG_Cheo(MaTranVuong a, int n)
{
	//Ma tran tam giac cheo la ma tran co cac phan tu nam ngoai duong cheo chinh bang 0
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i != j && *(a + i*n + j) != 0)
				return 0;
	return 1;
}

int MaTranDonVi(MaTranVuong a, int n)
{
	//Ma tran tam giac don vi la ma tran co cac phan tu nam tren duong cheo chinh bang 1, tat ca phan tu khac deu bang 0
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if ((i != j && *(a + i*n + j)) != 0 || (i = j && *(a + i*n + j) != 1))
				return 0;
	return 1;
}