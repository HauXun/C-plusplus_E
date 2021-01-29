void XuatGiaTri_SoLan_PhanBiet(int *a, int n)
{
	int dau;
	int *b, *c, m;
	m = 0;
	b = new int[n];

	for (int i = 0; i < n; i++)
	{
		dau = 1;
		for (int j = 0; j < m && dau; j++)
			dau = dau && (*(a + i) != *(b + j));
		if (dau)
		{
			*(b + m) = *(a + i);
			m++;
		}
	}

	c = new int[n];
	for (int k = 0; k < m; k++)
		*(c + k) = 0;

	for (int j = 0; j < m; j++)
	{
		for (int i = 0; i < n; i++)
			if (*(a + i) == *(b + j))
				*(c + j) = *(c + j) + 1;
	}

	cout << "\nCac gia tri phan biet trong a va so lan xuat hien caca gia tri nay: \n";
	for (int k = 0; k < m; k++)
		cout << "\nGia tri " << *(b + k) << " xuat hien " << *(c + k) << " lan.";

	delete[] b;
	delete[] c;
}

int* TaoMang(int &n)
{
	int *a;

	do
	{
		cout << "\nNhap vao so luong phan tu: ";
		cin >> n;
	} while (n <= 0);

	a = new int[n];

	for (int i = 0; i < n; i++)
		*(a + i) = rand() % 100;

	return a;
}

void XuatMang(int *a, int n)
{
	for (int i = 0; i < n; i++)
		cout << *(a + i) << " ";
	cout << endl;
}