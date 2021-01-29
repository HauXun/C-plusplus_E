#define SIZE 10

typedef int MaTranVuong[SIZE][SIZE];

void NhapMaTran(MaTranVuong a, int n, char kt);
void NhapMaTran_TD(MaTranVuong a, int n);
void XuatMaTran(MaTranVuong a, int n);
void TinhTong_2_MaTran(MaTranVuong a, MaTranVuong b, MaTranVuong c, int n);
void TinhHieu_2_MaTran(MaTranVuong a, MaTranVuong b, MaTranVuong c, int n);
void TinhTich_2_MaTran(MaTranVuong a, MaTranVuong b, MaTranVuong c, int n);

void NhapMaTran(MaTranVuong a, int n, char kyTu)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cout << endl << kyTu << "[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
}

void NhapMaTran_TD(MaTranVuong a, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % 10;
}

void XuatMaTran(MaTranVuong a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
	}
}
/*Tinh tong hai ma tran cung cap

c[i][j] = a[i][j] + b[i][j] ; ?i,j ?{0,..,n-1}*/

void TinhTong_2_MaTran(MaTranVuong a, MaTranVuong b, MaTranVuong c, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			c[i][j] = a[i][j] + b[i][j];
}

/*Tinh hieu hai ma tran cung cap

c[i][j] = a[i][j] - b[i][j] ; ?i,j ?{0,..,n-1}*/

void TinhHieu_2_MaTran(MaTranVuong a, MaTranVuong b, MaTranVuong c, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			c[i][j] = a[i][j] - b[i][j];
}

/*Tinh tich hai ma tran
c[i][j] = a[i][0] b[0][j] + a[i][1] b[1][j] +�+ a[i][n-1] b[n-1][j] ; ?i,j ?{0,..,n-1}*/

void TinhTich_2_MaTran(MaTranVuong a, MaTranVuong b, MaTranVuong c, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < n; k++)
				c[i][j] += a[i][k] * b[k][j];
		}
}