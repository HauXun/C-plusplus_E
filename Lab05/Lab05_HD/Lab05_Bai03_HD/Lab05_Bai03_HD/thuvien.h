//Định nghĩa hằng và kiểu dữ liệu mới
//Định nghĩa hằng
#define MAX 100
#define TAB "\t"

//Định nghĩa kiểu dữ liệu mới
typedef int DaySo[MAX];

//Khai báo nguyên mẫu các hàm xử lý và nhập xuất
void NhapTuDong(DaySo a, int &n);
void XuatMang(DaySo a, int n);
void ChenDauDay(DaySo a, int &n, int x);
void XoaDauDay(DaySo a, int &n);
void CatDau_ChenCuoi(DaySo a, int &n);
void ThayX_BangY(DaySo a, int &n, int x, int y);
void HoanVi(int &x, int &y);
void SapXepTang(DaySo a, int n);
void SapTheoYeuCau(DaySo a, int n);

//Định nghĩa các hàm xử lý và nhập xuất

/*Ta viết khác với bước 4 bài 2 một chút, đó là nhập kích thước mảng trong hàm, 
khi đó đối n viết dưới dạng tham chiếu.*/
void NhapTuDong(DaySo a, int &n)
{
	cout << "\nNhap kich thuoc n:";
	cin >> n;
	srand((unsigned)time(0));
	for (int i = 0; i < n; i++)
		a[i] = (MAX / 2 - rand() % MAX) / 6;
}

void XuatMang(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << TAB;
}

/*Định nghĩa hàm chèn x vào đầu dãy a
Input: Dãy a, Kích thước n, Giá trị x cần chèn
Output: Dãy a(Thêm X ở đầu)*/

void ChenDauDay(DaySo a, int &n, int x)
{
	for (int i = n - 1; i >= 0; i--)
		a[i + 1] = a[i];		//Đổi ra 1 vị trí bắt đầu từ cuối mảng
	a[0] = x;		//Gán x tại vị trí đầu mảng
	n++;			//Kích thước mảng tăng lên 1
}

/*Hàm xóa giá trị đầu dãy
Input: Dãy a, Kích thước n
Output: Dãy a (bớt vị trí đầu dãy)*/
void XoaDauDay(DaySo a, int &n)
{
	for (int i = 0; i < n; i++)
		//Đổi về trước 1 vị trí, bắt đầu từ vị trí 1
		a[i - 1] = a[i];
	n--;		//Kích thước giảm đi 1
}

/*Hàm định nghĩa cắt phần tử đầu rồi chèn vào cuối dãy*/
void CatDau_ChenCuoi(DaySo a, int &n)
{
	//Khai báo biến lưu phần tử đầu
	int x = a[0];
	//Xóa đầu nên Start = 1
	for (int i = 1; i < n; i++)
		//Đổi về trước 1 đơn vị bắt đầu từ vị trí 1
		a[i - 1] = a[i];
	//Gán x tại vị trí cuối mảng
	a[n - 1] = x;
}

/*Định nghĩa hàm thay thế x trong dãy bằng y
Input: Dãy a, Kích thước n, Giá trị x cần thay thế, Giá trị thay thế y
Outpuy: Dãy a (X thay bởi y)*/
void ThayX_BangY(DaySo a, int &n, int x, int y)
{
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			a[i] = y;
}

/*Định nghĩa hàm sắp xếp dãy tăng dần
Input: Dãy a, Kích thước n
Output: Dãy a (Đã tăng)*/

//Định nghĩa hàm hoán vị
void HoanVi(int &x, int &y)
{
	int bienTrungGian = x;
	x = y;
	y = bienTrungGian;
}

void SapXepTang(DaySo a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; i < n; j++)
		{
			if (a[i] > a[j])
				HoanVi(a[i], a[j]);
		}
	}
}
	/*for (int i = 0; i < n; i++) 
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
				HoanVi(a[i], a[j]);
		}
	}*/


/*Định nghĩa hàm sắp xếp dãy theo yêu cầu: Dương tăng - Âm giảm - Hoặc không
Input: Dãy a, Kích thước n
Output: Dãy a (Đã theo yêu cầu)*/
void SapTheoYeuCau(DaySo a, int n)
{
	int i, j, mc;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
		{
			mc = (a[i] < 0 && a[j] < 0 && a[i] < a[j]) ||
				(a[i] < 0 && a[j]>0) ||
				(a[i] == 0 && a[j] != 0) ||
				(a[i] > 0 && a[j] > 0 && a[i] > a[j]);
			if (mc)
				HoanVi(a[i], a[j]);
		}
}