void XuatUocSo(unsigned int n);
int DemUocSo(unsigned int n);
int TongUocSo(unsigned int n);
int TimSoLonNhat(unsigned int n);
bool LaSoHoanHao(unsigned int n);

void XuatUocSo(unsigned int n)
{
	for (int i = 1; i <= n; i++)
	if (n % i == 0)
		cout << i << " ";
}

int DemUocSo(unsigned int n)
{
	int ketQua = 0;
	for (int i = 1; i <= n; i++)
	if (n % i == 0)
		ketQua++;
	return ketQua;
}

int TongUocSo(unsigned int n)
{
	int ketQua = 0;
	for (int i = 1; i <= n; i++)
	if (n % i == 0)
		ketQua += i;
	return ketQua;
}

int TimSoLonNhat(unsigned int n)
{
	//Khai báo biến lưu số mũ
	int soMu = 0;
	while (pow(2, soMu) <= n)
	{
		soMu++;
	}
	soMu--; // giảm n đi 1
	return pow(2, soMu);
}

bool LaSoHoanHao(unsigned int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	if (n % i == 0)
		sum += i;

	return sum == n;
}