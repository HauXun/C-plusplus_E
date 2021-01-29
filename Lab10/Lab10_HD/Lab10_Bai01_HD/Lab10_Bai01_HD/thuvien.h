#define TAB '\t'

typedef int *DayDong;

void NhapTuDong(DayDong a, int n)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		// Sinh một số ngẫu nhiên trong phạm vi
		// [-20..20) rồi gán cho phần tử thứ i
		*(a + i) = -20 + rand() % 40;
	}
}

void XuatMang(DayDong a, int n)
{
	for (int i = 0; i<n; i++)
		cout << *(a + i) << TAB;
}

//Hàm tính tổng
int TinhTong(DayDong a, int n)
{
	int ketQua;
	if (n == 1)
		ketQua = *a;
	else if (n > 1)
		ketQua = TinhTong(a, n - 1) + *(a + n - 1);
	return ketQua;
}

//Hàm tính tích
int TinhTich(DayDong a, int n)
{
	int ketQua;
	if (n == 1)
		ketQua = *a;
	else if (n > 1)
		ketQua = *(a + n - 1) * TinhTich(a, n - 1);
	return ketQua;
}

//Hàm tính min
int TinhMin(DayDong a, int n)
{
	int ketQua;
	if (n == 1)
		ketQua = *(a + 0);
	else if (n > 1)
		if (TinhMin(a, n - 1) > *(a + n - 1))
			ketQua = *(a + n - 1);
		else
			ketQua = TinhMin(a, n - 1);
	return ketQua;
}

//Hàm tính max
int TinhMax(DayDong a, int n)
{
	int kq;
	if (n == 1)
		kq = *(a + 0);
	else if (n > 1)
			if (TinhMax(a, n - 1) < *(a + n - 1))
				kq = *(a + n - 1);
			else
				kq = TinhMax(a, n - 1);
	return kq;
}

//Hàm tính số đường chạy
int TinhSo_DC(DayDong a, int n)
{
	int kq;
	if (n == 1)
		kq = 1;
	else
		if (n > 1)
			if (*(a + n - 1) < *(a + n - 2))
				kq = TinhSo_DC(a, n - 1) + 1;
			else
				kq = TinhSo_DC(a, n - 1);
	return kq;
}

//Hàm kiểm tra nguyên tố
int KiemTra_NT(int x)
{
	int i, m,
		kq;
	if (x < 2)
		kq = 0;
	else
	{
		m = (int)sqrt((double)x);
		kq = 1;
		for (i = 2; i <= m; i++)
			if (x % i == 0)
			{
				kq = 0;
				break;
			}
	}
		return kq;
}

//Hàm tính tổng SNT
int TinhTong_NT(DayDong a, int n)
{
	int kq;
	if (n == 1)
		if (KiemTra_NT(*a))
			kq = *a;
		else
			kq = 0;
	else
		if (n > 1)
			if (KiemTra_NT(*(a + n - 1)))
				kq = TinhTong_NT(a, n - 1) + *(a + n - 1);
			else
				kq = TinhTong_NT(a, n - 1);
	return kq;
}

//Hàm tìm vị trí cuối cùng x xuất hiện
int Tim_Cscc(DayDong a, int n, int x)
{
	int kq;
	if (n == 1)
		if (*a == x)
			kq = 0;
		else
			kq = -1;
	else
		if (n > 1)
			if (*(a + n - 1) == x)
				kq = n - 1;
			else
				kq = Tim_Cscc(a, n - 1, x);
	return kq;
}

//Hàm đếm số đường chạy
int DemSo_DC(DayDong a, int n)
{
	int kq;
	if (n == 1)
		kq = 1;
	else
		if (n > 1)
			if (*(a + n - 1) < *(a + n - 2))
				kq = DemSo_DC(a, n - 1) + 1;
			else
				kq = DemSo_DC(a, n - 1);
	return kq;
}