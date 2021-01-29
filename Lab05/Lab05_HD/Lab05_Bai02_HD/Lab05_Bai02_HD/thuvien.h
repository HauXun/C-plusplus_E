//Định nghĩa hằng, kiểu dữ liệu mới
//Hằng
#define MAX 100
#define TAB "\t"

//KDL mới
typedef int DaySo[MAX];

//Khai báo nguyên mẫu các hàm xử lý và nhập xuất
void NhapTuDong(DaySo a, int n);
void XuatMang(DaySo a, int n);
int Dem_X(DaySo a, int n, int x);
int KiemTra_NT(int x);
int Dem_NT(DaySo a, int n);
int TinhTong(DaySo a, int n); int TinhTongDuyNhat(DaySo a, int n);
int TinhTong_PhanBiet(DaySo a, int n);

void NhapTuDong(DaySo a, int n)
{
	srand((unsigned)time(0));
	for (int i = 0; i < n; i++)
	{
		a[i] = (MAX / 2 - rand() % MAX) / 2;
	}
}

void XuatMang(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << TAB;
}

//Định nghĩa hàm đếm số lượng phần tử x xuất hiện trong a?
int Dem_X(DaySo a, int n, int x)
{
	int bienDem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			bienDem++;
	return bienDem;
}

/*Định nghĩa hàm một số nguyên có phải là số nguyên tố
Input: x = Số nguyên
Output:
		1: Nếu x là số nguyên tố
		0: Nếu x không phải là số nguyên tố*/
int KiemTra_NT(int x)
{
	int m, ketQua;
	if (x < 2)
		ketQua = 0;
	else
	{
		m = (int)sqrt((double)x);
		ketQua = 1;
		for (int i = 2; i < m; i++)
			if (x % i == 0)
			{
				ketQua = 0;
				break;
			}
	}
	return ketQua;
}

/*Định nghĩa hàm đếm và xuất các số nguyên tố trong a
Input: a = Dãy số
		N = Số nguyên
Output: Dem = số các số nguyên tố trong a*/
int Dem_NT(DaySo a, int n)
{
	int bienDem = 0;
	cout << "\nCac so nguyen to trong a:\n";
	for (int i = 0; i < n; i++)
		if (KiemTra_NT(a[i]))
		{
			bienDem++;
			cout << a[i] << TAB;
		}
	return bienDem;
}

/*Định nghĩa hàm tính tổng các phần tử chỉ xuất hiện 1 lần
Input: a, n
Output: Sum = Tổng giá trị các phần tử trong mảng*/
int TinhTong(DaySo a, int n)
{
	int ketQua = 0;
	for (int i = 0; i < n; i++)
		ketQua += a[i];
	return ketQua;
}

/*Định nghĩa hàm tính tổng các giá trị chỉ xuất hiện 1 lần
Input: a, n
Output: Sum = Tổng các giá trị chỉ xuất hiện một lần*/
int TinhTongDuyNhat(DaySo a, int n)
{
	int ketQua = 0;
	for (int i = 0; i < n; i++)
		if (Dem_X(a, n, a[i]))
			ketQua += a[i];
	return ketQua;
}

/*Định nghĩa hàm tính tổng giá trị phân biệt
Input: a, n
Output: Sum = Tổng các giá trị phân biệt*/
int TinhTong_PhanBiet(DaySo a, int n)
{
	DaySo b;
	int m = 0,		//Kích thước của b
		dau,	//Danh sách dấu để nhận dạng a[i] đã xuất hiện trong b
		ketQua = 0;
	for (int i = 0; i < n; i++)
	{
		dau = 1;	//Nếu a[i] chưa có trong b
		for (int j = 0; j < m; j++)
			dau = dau && (a[i] != b[j]);
		if (dau)	//Nếu a[i] có trong b
		{
			b[m++] = a[i];
			ketQua += a[i];
		}
	}
	return ketQua;

}