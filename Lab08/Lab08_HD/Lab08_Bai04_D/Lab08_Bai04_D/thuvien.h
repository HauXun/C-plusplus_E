//Dinh nghia hang
#define MAX 100
//Dinh nghia kieu du lieu
//Kieu don thuc
struct DonThuc
{
	double heSo;
	int mu;
};
//Kieu da thuc : mang cac don thuc
typedef DonThuc DaThuc[MAX];

//Dinh nghia cac ham

//:==================================================================:
//:Dinh dang da thuc : Rut gon - Khu he so 0 - Sap tang theo so mu :
//:==================================================================:

//Rut gon da thuc : don cac don thuc co so mu bang nhau lai voi nhau
void RutGon_DT(DaThuc A, int &n)
{
	DaThuc B; //Bien trung gian
	int i,//duyet A
		j; //duyet B
	int h = 0,//kich thuoc khoi tao cua B
		kq;
	for (i = 0; i < n; i++)
	{
		kq = 0;
		for (j = 0; j < h; j++)
			if (A[i].mu == B[j].mu)
			{
				kq = 1;
				break;
			}
		if (kq == 1)
			B[j].heSo += A[i].heSo;
		else
			B[h++] = A[i];
	}
	n = h;
	for (j = 0; j < h; j++) //Gan B cho A
		A[j] = B[j];
}
//Loai he so 0
void Khu_HS0(DaThuc A, int &n)
{
	int i,
		h = 0;
	DaThuc B;
	for (i = 0; i < n; i++)
		if (A[i].heSo != 0)
			B[h++] = A[i];
	n = h;
	for (i = 0; i < n; i++)
		A[i] = B[i];
}
//Sap tang theo so mu
void SapTangTheoMu(DaThuc A, int n)
{
	int i, j;
	DonThuc t;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (A[i].mu > A[j].mu)
			{
				t = A[i];
				A[i] = A[j];
				A[j] = t;
			}
}
void DinhDang_DT(DaThuc A, int &n)
{
	if (n == 0)
	{
		cout << "\nDa thuc rong!";
		_getch();
		return;
	}
	RutGon_DT(A, n);
	Khu_HS0(A, n);
	SapTangTheoMu(A, n);
}
//:==================================================================:
//:Nhap, Xuat da thuc : da thuc da duoc Dinh dang :
//:==================================================================:
//Nhap da thuc
void NhapDaThuc(DaThuc A, int &n)
{
	int i;
	cout << "\nNhap kich thuoc mang : ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "\nDa thuc " << "[" << i << "] :";
		cout << "\nNhap he so != 0 : he so = ";
		cin >> A[i].heSo;
		cout << "\nNhap so mu : So mu = ";
		cin >> A[i].mu;
	}
	DinhDang_DT(A, n);
}
//Xuat Da thuc : mu bieu dien bang ^
void XuatDaThuc(DaThuc A, int n)
{
	if (n == 0)
	{
		cout << "\nDa thuc rong!";
			_getch();
		return;
	}
	int i = 0;
	//xu ly don tu dau tien, so mu co the == 0
	if (A[i].mu == 0) //so mu = 0
		cout << A[i].heSo;
	else // so mu > 0 : >= 1
	{
		if (A[i].mu == 1) // so mu = 1
		{
			if (A[i].heSo == 1) //he so == 1
				cout << "x ";
			else // he so !=1
				if (A[i].heSo == -1)
					cout << "-x ";
				else
					cout << A[i].heSo << "x ";
		}
		else //so mu > 1
		{
			if (A[i].heSo == 1) //he so == 1
				cout << "x^" << A[i].mu << " ";
			else // he so !=1
				if (A[i].heSo == -1)
					cout << "-x^" << A[i].mu << " ";
				else
					cout << A[i].heSo << "x^" << A[i].mu << " ";
		}
	}
	//Xu ly cac don thuc tiep theo
	i++;
	while (i < n)
	{
		//so mu > 0
		if (A[i].mu == 1) // so mu = 1
		{
			if (A[i].heSo == 1) //he so == 1
				cout << "+x ";
			else // he so !=1
				if (A[i].heSo == -1)
					cout << "-x ";
				else
					if (A[i].heSo > 0)
						cout << "+ " << A[i].heSo << "x ";
					else
						cout << A[i].heSo << "x ";
		}
		else //so mu > 1
		{
			if (A[i].heSo == 1) //he so == 1
				cout << "+x^" << A[i].mu << " ";
			else // he so !=1
				if (A[i].heSo == -1)
					cout << "-x^" << A[i].mu << " ";
				else
					if (A[i].heSo > 0)
						cout << "+ " << A[i].heSo << "x^" << A[i].mu << " ";
					else //(he so < 0)
						cout << A[i].heSo << "x^" << A[i].mu << " ";
		}
		i++;
	}
}
//:==================================================================:
//:Cac phep toan da thuc :
//:==================================================================:
//C = A + B
void Tong2DaThuc(DaThuc A, int m, DaThuc B, int n, DaThuc C, int &k)
{
	int i = 0, j = 0;
	k = 0;
	DonThuc x;
	while (i < m && j < n)
	{
		if (A[i].mu < B[j].mu)
		{
			C[k++] = A[i];
			i++;
		}
		else
			if (B[j].mu < A[i].mu)
			{
				C[k++] = B[j];
				j++;
			}
			else //2 mu bang nhau
			{
				x.heSo = A[i].heSo + B[j].heSo;
				x.mu = A[i].mu;
				if (x.heSo != 0) // khu he so 0
					C[k++] = x;
				i++;
				j++;
			}
	}
	while (i < m)
	{
		C[k++] = A[i];
		i++;
	}
	while (j < n)
	{
		C[k++] = B[j];
			j++;
	}
	DinhDang_DT(C, k);
}
//C = A - B
void Hieu2DaThuc(DaThuc A, int m, DaThuc B, int n, DaThuc C, int &k)
{
	int i = 0, j = 0;
	k = 0;
	DonThuc x;
	while (i < m && j < n)
	{
		if (A[i].mu < B[j].mu)
		{
			C[k++] = A[i];
			i++;
		}
		else
			if (B[j].mu < A[i].mu)
			{
				x.mu = B[j].mu;
				x.heSo = -B[j].heSo;
				C[k++] = x;
				j++;
			}
			else //2 mu bang nhau
			{
				x.heSo = A[i].heSo - B[j].heSo;
				x.mu = A[i].mu;
				if (x.heSo != 0) // khu he so 0
					C[k++] = x;
				i++;
				j++;
			}
	}
	while (i < m)
	{
		C[k++] = A[i];
		i++;
	}
	while (j < n)
	{
		x.mu = B[j].mu;
		x.heSo = -B[j].heSo;
		C[k++] = x;
		j++;
	}
	DinhDang_DT(C, k);
}
//Nhan mot da thuc voi mot don thuc
void Nhan_DonThuc(DaThuc A, int m, DonThuc p, DaThuc C, int &k)
{
	int i;
	DonThuc x;
	k = 0;
	for (i = 0; i < m; i++)
	{
		x.mu = A[i].mu + p.mu;
		x.heSo = A[i].heSo * p.heSo;
		C[k++] = x;
	}
	DinhDang_DT(C, k);
}
//C = AB
void NhanDaThuc(DaThuc A, int m, DaThuc B, int n, DaThuc C, int &k)
{
	DaThuc T1, T2;
	int i, j, h1, h2;
	Nhan_DonThuc(B, n, A[0], C, k);
	for (i = 1; i < m; i++)
	{
		Nhan_DonThuc(B, n, A[i], T1, h1);
		Tong2DaThuc(C, k, T1, h1, T2, h2);
		for (j = 0; j < h2; j++)
			C[j] = T2[j];
		k = h2;
	}
	DinhDang_DT(C, k);
}
double x_Mu_m(double x, int m)
{
	double t = 1;
	int i;
	for (i = 1; i <= m; i++)
		t *= x;
	return t;
}
//Tinh A(x)
double A_x(DaThuc A, int m, double x)
{
	double v = 0, t;
	int i;
	for (i = 0; i < m; i++)
	{
		t = A[i].heSo * x_Mu_m(x, A[i].mu);
		v += t;
	}
	return v;
}