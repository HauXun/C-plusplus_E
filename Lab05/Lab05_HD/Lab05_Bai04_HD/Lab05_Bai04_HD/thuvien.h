#define MAX 100
#define TAB "\t"

void XuatMang(int a[MAX], int n);
void NhapTuDong(int a[MAX], int &n);
void TimDayGTPB(int a[MAX], int b[MAX], int c[MAX], int n, int &m);

//Hàm nhập tự động mảng n số nguyên
void NhapTuDong(int a[MAX], int &n)
{
	cout << "\nNhap kich thuoc n:\n";
	cin >> n;
	srand((unsigned)time(0));
	for (int i = 0; i < n; i++)
		//Trong khoảng từ [-8 ... 8]
		a[i] = (MAX / 2 - rand() % MAX) / 6;
}

//Hàm xuất mảng n số nguyên
void XuatMang(int a[MAX], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << TAB;
}

/*Hàm tính giá trị phân biệt của a và số lần xuất hiện của nó
Input: a, n
Output:	b,	(các giá trị phân biệt của a lưu trong mảng b)
		c	(số lần xuất hiện của b[j] lưu trong c[j])
		m	(kích thước của b, c)
b, c, m: Làm đối ra của hàm*/
void TimDayGTPB(int a[MAX], int b[MAX], int c[MAX], int n, int &m)
{
	//Đánh dấu a[i] có thuộc b
	int danhDau;
	for (int i = 0; i < n; i++)
		//Khởi tạo c: Số lần xuất hiện của mỗi giát trị phân biệt b[i] = 1
		c[i] = 1;
	//Khởi tạo kích thước b, c
	m = 0;
	for (int i = 0; i < n; i++)
	{
		//a[i] không thuộc b
		danhDau = 0;
		for (int j = 0; j < m; j++)
			if (a[i] == b[j])
			{
				//Nếu a[i] thuộc b
				danhDau = 1;
				//b[j] tăng thêm 1 lần xuất hiện
				c[j]++;
				break;
			}
		if (!danhDau)	//Không thuộc
			{
				b[m] = a[i]; //chèn a[i] và cuối b
				m++;
			}
	}
}