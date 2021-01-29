//Định nghĩa hằng
#define	MAX 100			//Khích thước khai báo mảng 1 chiều
#define TAB "\t"

//Định nghĩa kiểu dữ liệu mới
typedef int DaySo[MAX];

//Khai báo nguyên mẫu các hàm xử lý, nhập xuất
void NhapMang(DaySo a, int n);
void NhapTuDong(DaySo a, int n);
void XuatMang(DaySo a, int n);
int ChuaX(DaySo a, int n, int x);
int Tim_VTDT_X(DaySo a, int n, int x);
int KiemTraMangTang(DaySo a, int n);
int TinhMax(DaySo a, int n);
int TimViTriMax_CuoiCung(DaySo a, int n);

//Định nghĩa các hàm xử lý nhập xuất

/*Input: a = mảng 1 chiều chứa tối đa MAX phần tử
			n = số phần tử thực sự được lưu trong mảng
Output: Không có*/

void NhapMang(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

/*Sử dụng hàm nhập mảng tự động bằng cách
gieo số ngẫu nhiên*/
void NhapTuDong(DaySo a, int n)
{
	int i;
	// Gieo số ngẫu nhiên đầu tiên
	srand((unsigned)time(0));
	for (i = 0; i<n; i++)
	{
		// Sinh một số ngẫu nhiên trong phạm vi
		// [0..MAX) rồi gán cho phần tử thứ i
		a[i] = rand() % MAX;
	}
}

/*Input: a = mảng một chiều chứa tối đa MAX phần tử
			n = số phần tử thực sự được lưu trong mảng
Output: Không có. Chỉ xuất ra màn hình*/
void XuatMang(DaySo a, int n)
{
	int i;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << TAB;
	}
}

/*Input: a: Mang mot chieu chua toi da MAX phan tu
			n: Số phần tử thực sự được lưu trong mảng
			x: phần tử cần kiểm tra
Output:
		1: Nếu mảng a chứa phần tử x
		0: nếu mảng a không chứa phần tử x*/
int ChuaX(DaySo a, int n, int x)
{
	int ketQua = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			ketQua = 1;
			break;
		}
	}
	return ketQua;
}

/*Input: a, n, x;
Output:
		-1: nếu a không chứa phần tử x
		 i: a[i] đầu tiên trùng x*/
int Tim_VTDT_X(DaySo a, int n, int x)
{
	//Ban đầu, giả sử mảng a không chứa x
	int i, ketQua = -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			/*Nếu tìm thấy x thì cập nhập kết quả là vị trí đầu tiên
			là I và dừng, không cần tìm nữa*/
			ketQua = i;	
			break;
		}
	}
	return ketQua;
}

/*Input: a, n
Output:
		1: nếu mảng a có thứ tự tăng
		0: nếu mảng a không có thứ tự tăng*/
int KiemTraMangTang(DaySo a, int n)
{
	//Ban đầu, giả sử mảng a có thứ tự tăng
	int i, ketQua = 1;
	for (int i = 0; i < n; i++)
	/*Nếu có cặp phần tử mà số đứng trước lớn hơn
	số đứng sau thì cập nhập kết quả và dừng, không
	cần kiểm tra nữa*/
	if (a[i] > a[i + 1])
	{
		ketQua = 0;
		break;
	}
	return ketQua;
}

/*Input: a, n
Output: GTLN của a*/
int TinhMax(DaySo a, int n)
{
	/*Khai báo biến max để lưu GTLN của mảng
	Ban đầu giả sử phần tử đầu tiên là lơn nhất*/
	int i, max = a[0];
	for (int i = 1; i < n; i++)
	/*Nếu có phần tử lớn hơn phương trình giả thuyết
	thì cập nhập*/
	if (a[i] > max)
		max = a[i];
	return max;
}

/*Hàm tìm vị trí cuối cùng max xuất hiện
không dùng hàm TinhMax
Input: a, n
Output: vị trí cuối cùng tìm thấy GTLN*/
int TimViTriMax_CuoiCung(DaySo a, int n)
{
	//Ban đầu, giả sử phần tử đầu tiên là lớn nhất
	int viTri = 0;
	int max = a[viTri];
	for (int i = 1; i < n; i++)
	/*Nếu có phần tử không nhỏ hơn giá trị max giả định
	thì cập nhập lại vị trí và phần tử lớn nhất*/
	if (a[i] >= max)
	{
		viTri = i;
		max = a[viTri];
	}
	return viTri;
}

/*Chỉ cần xét các phần tử trong mảng
Input: a, n
Output:
		1: nếu đúng thì // [Với mọi]i :-a[i] [Thuộc]a
		0, nếu sai. // [Tồn Tại]i: -a[i] [Không Thuộc]a
Chỉ quan tâm tới các phần tử trong mảng a*/
int ChuaXChuaTruX(DaySo a, int n)
{
	/*Lưu kết quả kiểm tra phát biểu
	Đầu tiên cho kết quả phát biểu là đúng*/
	int ketQua = 1,
		x,	//Để lưu giá trị a[i]
		ketQuaTam;	//Để lưu kết quả xem a có chứa -x
	for (int i = 0; i < n; i++)
	{
		x = -a[i];
		ketQuaTam = ChuaX(a, n, x);
		/*Nếu có một x khác 0 mà a không của -x*/
		if (ketQuaTam == 0)
		{
			//Phát biểu sai
			ketQua = 0;
			break;
		}
	}
	return ketQua;
}