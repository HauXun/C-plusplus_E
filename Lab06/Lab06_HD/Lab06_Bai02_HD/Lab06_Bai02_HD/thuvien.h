#define SIZE 5
#define TAB "\t"


void NhapTuDong_MaTran(int a[SIZE][SIZE], int m, int n)
{
	srand((unsigned)time(0));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = (rand() % (m * n)) - (m * n) / 2;
}

void XuatMaTran(int a[SIZE][SIZE], int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		cout << "\n";
		for (j = 0; j < n; j++)
			cout << a[i][j] << TAB;
	}
}

//Định nghĩa hàm tính giá trị lớn nhất của ma trận
int TimMax_MaTran(int a[SIZE][SIZE], int m, int n)
{
	int ketQua = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ketQua < a[i][j])
				ketQua = a[i][j];
	return ketQua;
}

//Định nghĩa hàm tìm giá trị lớn nhất hàng i
int TimMax_Hang_i(int a[SIZE][SIZE], int i, int n)
{
	int ketQua = a[i][0];
	for (int j = 1; j < n; j++)
		if (ketQua < a[i][j])
			ketQua = a[i][j];
	return ketQua;
}

//Định nghĩa hàm tinh giá trị nhỏ nhất cột j
int TimMin_Cot_j(int a[SIZE][SIZE], int m, int j)
{
	int ketQua = a[0][j];
	for (int i = 1; i < m; i++)
		if (ketQua > a[i][j])
			ketQua = a[i][j];
	return ketQua;
}

//Định nghĩa hàm tính tổng hàng i
int TinhTong_Hang_i(int a[SIZE][SIZE], int i, int n)
{
	int ketQua = 0;
	for (int j = 0; j < n; j++)
		ketQua += a[i][j];
	return ketQua;
}

//Định nghĩa hàm tính tích các phần tử cột j
int TinhTich_Cot_j(int a[SIZE][SIZE], int m, int j)
{
	int Tich = 1;
	for (int i = 0; i < m; i++)
		Tich *= a[i][j];
	return Tich;
}

//Định nghĩa hàm Xuat a[i][j] : lon nhat hang i va nho nhat cot j
void Max_i_Min_j(int a[SIZE][SIZE], int m, int n)
{
	int xuatLoai;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] == TimMax_Hang_i(a, i, n) && a[i][j] == TimMin_Cot_j(a, m, j))
			{
				xuatLoai = 1;
				break;
			}
	if (!xuatLoai)
	{
		cout << "\nKhong co phan tu nao thoa man dieu kien bai toan";
	}
	else
	{
		cout << "\nCac phan tu a[i][j] thoa : Max hang i va Min cot j:\n";
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				if (a[i][j] == TimMax_Hang_i(a, i, n) && a[i][j] == TimMin_Cot_j(a, m, j))
					cout << "\na[" << i << "][" << j << "] = " << a[i][j]
					<< " : Max hang " << i << " va Min cot " << j;
	}
}