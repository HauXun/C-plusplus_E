typedef int *MaTranVuong;

void NhapMaTran(MaTranVuong &a, int n)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			*(a + i*n + j) = rand() % 100;
}

void XuatMaTran(MaTranVuong a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << endl;
		for (int j = 0; j < n; j++)
			cout << setw(4) << *(a + i*n + j);
	}
	cout << endl;
}

MaTranVuong TinhTong_2_MaTran(MaTranVuong a, MaTranVuong b, int n)
{
	MaTranVuong c;
	c = new int[n*n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			*(c + i*n + j) = *(a + i*n + j) + *(b + i*n + j);
	return c;
}

MaTranVuong TinhHieu_2_MaTran(MaTranVuong a, MaTranVuong b, int n)
{
	MaTranVuong c;
	c = new int[n*n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			*(c + i*n + j) = *(a + i*n + j) - *(b + i*n + j);
	return c;
}

MaTranVuong TinhTich_2_MaTran(MaTranVuong a, MaTranVuong b, int n)
{
	MaTranVuong c;
	c = new int[n*n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			*(c + i*n + j) = *(a + i*n + j) * *(b + i*n + j);
		}
	return c;
}