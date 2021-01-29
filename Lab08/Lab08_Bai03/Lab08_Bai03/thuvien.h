struct Vector
{
	double x;
	double y;
	double z;
};

void NhapVector(Vector &a)
{
	cout << "\nNhap x = ";
	cin >> a.x;
	cout << "\nNhap y = ";
	cin >> a.y;
	cout << "\nNhap z = ";
	cin >> a.z;
}

void XuatVector(Vector a)
{
	cout << '(' << a.x << ',' << a.y << ',' << a.z << ')';
}

int DoDaiVector(Vector a)
{
	int kq;
	kq = sqrt(pow(a.x, 2) + pow(a.y, 2) + pow(a.z, 2));
	return kq;
}

int KT_BangNhau(Vector a, Vector b)
{
	double kq;
	kq = (a.x * b.x + a.y * b.y + a.z * b.z) / (sqrt(pow(a.x, 2) + pow(a.y, 2) + pow(a.z, 2)) * sqrt(pow(b.x, 2) + pow(b.y, 2) + pow(b.z, 2)));
	if ((DoDaiVector(a) == DoDaiVector(b) && kq == 1))
		return 1;
	return 0;
}

Vector Tong(Vector a, Vector b)
{
	Vector kq;
	kq.x = a.x + b.x;
	kq.y = a.y + b.y;
	kq.z = a.z + b.z;
	return kq;
}

Vector Hieu(Vector a, Vector b)
{
	Vector kq;
	kq.x = a.x - b.x;
	kq.y = a.y - b.y;
	kq.z = a.z - b.z;
	return kq;
}

Vector Tich_k(Vector a, double k)
{
	Vector kq;
	kq.x = a.x*k;
	kq.y = a.y*k;
	kq.z = a.z*k;
	return kq;
}

double TichVoHuong(Vector a, Vector  b)
{
	double kq;
	kq = a.x*b.x + a.y*b.y + a.z*b.z;
	return kq;
}

int KT_VuongGoc(Vector a, Vector b)
{
	double kq = TichVoHuong(a, b);
	if (kq == 0)
		return 1;
	return 0;
}