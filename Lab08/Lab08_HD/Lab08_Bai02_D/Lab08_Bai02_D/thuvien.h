/*Khai báo hằng: Không có
Định nghĩa kiểu dữ liệu: Phân số*/
struct PhanSo
{
	//Tử
	int tu;

	//Mẫu
	unsigned int mau;
};

//Hàm nhập các số
PhanSo Nhap_PS()
{
	PhanSo a;
	cout << "\nNhap tu so: ";
	cin >> a.tu;
	do
	{
		cout << "\nNhap mau so ( > 0 ): ";
		cin >> a.mau;
	} while (a.mau <= 0);
	return a;
}

//Hàm xuất phân số
void Xuat_PS(PhanSo a)
{
	if (a.tu == 0)
	{
		cout << 0;
		return;
	}
	if (a.mau == 1)
	{
		cout << a.tu;
		return;
	}
	cout << a.tu << '/' << a.mau;
}

//Giá trị tuyệt đối
unsigned int Tinh_GTTD(int x)
{
	return (x >= 0 ? x : -x);
}

//Tính ước chung lớn nhất của 2 số nguyên dương
unsigned int UCLN(unsigned int a, unsigned int b)
{
	unsigned int r;
	while (b > 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

//Tính bội chung lớn nhất của 2 số nguyên dương
unsigned int BCNN(unsigned int a, unsigned int b)
{
	return (a*b) / UCLN(a, b);
}

//Rút gọn phân số
void RutGon(PhanSo &a)
{
	unsigned int d;
	d = UCLN(Tinh_GTTD(a.tu), a.mau);
	a.mau /= d;
	a.tu = a.tu / (int)d;
}

//Quy đồng mẫu số 2 phân số
void QuyDong_PS(PhanSo &a, PhanSo &b)
{
	unsigned int d;
	RutGon(a);
	RutGon(b);
	d = BCNN(a.mau, b.mau);
	a.tu = a.tu * (d / a.mau);
	b.tu = b.tu * (d / b.mau);
	a.mau = b.mau = d;
}

//c = a + b
PhanSo CongPhanSo(PhanSo a, PhanSo b)
{
	PhanSo c;
	QuyDong_PS(a, b);
	c.tu = a.tu + b.tu;
	c.mau = a.mau;
	RutGon(c);
	return c;
}

//c = a - b
PhanSo TruPhanSo(PhanSo a, PhanSo b)
{
	PhanSo c;
	QuyDong_PS(a, b);
	c.tu = a.tu - b.tu;
	c.mau = a.mau;
	RutGon(c);
	return c;
}

//c = a * b
PhanSo NhanPhanSo(PhanSo a, PhanSo b)
{
	PhanSo c;
	RutGon(a);
	RutGon(b);
	c.tu = a.tu * b.tu;
	c.mau = a.mau * b.mau;
	RutGon(c);
	return c;
}

//c = a / b
PhanSo ChiaPhanSo(PhanSo a, PhanSo b)
{
	PhanSo c;
	RutGon(a);
	RutGon(b);
	int tu;
	int mau;
	tu = a.tu * b.mau;
	mau = a.mau * b.tu;
	if (mau < 0)
	{
		tu = -tu;
		mau = -mau;
	}
	c.tu = tu;
	c.mau = (unsigned int)mau;
	RutGon(c);
	return c;
}

//So sanh 2 phan so
//kq = - 1: a < b
//kq = 0 : a = b
//kq = 1 : a > b
int SoSanhPhanSo(PhanSo a, PhanSo b)
{
	int kq;
	QuyDong_PS(a, b);
	if (a.tu < b.tu)
		kq = -1;
	else if (a.tu == b.tu)
		kq = 0;
	else
		kq = 1;
	return kq;
}