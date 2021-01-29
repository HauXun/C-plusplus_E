#define MAX 100
typedef char *Chuoi;

void NhapChuoi(Chuoi a)
{
	cout << "\nNhap chuoi: ";
	_flushall();
	gets_s(a, MAX);
}

void XuatChuoi(Chuoi a)
{
	cout << *a;
}

int DemKhoangTrang(Chuoi a)
{
	int doDai = strlen(a);
	int dem = 0;
	for (int i = 0; i < doDai; i++)
		if (*(a + i) == ' ' || *(a + i) == '\t')
			dem++;
	return dem;
}

int TimViTri(Chuoi a, Chuoi b)
{
	int viTri = -1;
	if (strstr(a, b) != NULL)
		viTri = strlen(a) - strlen(strstr(a, b));
	return viTri;
}

int TimViTri_X_DauTien(Chuoi a, char x)
{
	int doDai = strlen(a);
	int viTri;
	for (int i = 0; i < doDai; i++)
		if (*(a + i) == x)
		{
			viTri = i;
			break;
		}
	return viTri;
}

void Dao(Chuoi a)
{
	Chuoi t, r;
	t = new char[MAX];
	r = new char[MAX];
	int i, l;
	for (i = strlen(a) - 1; i >= 0; i--)
	{
		if (a[i] == ' ')
			break;
	}
	//Tìm được từ cuối
	strcpy(r, a + i + 1);

	//Xâu S sau khi bỏ từ cuối, có khoảng trắng ở cuối sâu
	a[i + 1] = '\0';

	//Tìm vị trí khoảng trắng đầu tiên trong chuỗi
	l = strlen(a) - strlen(strstr(a, " "));

	//l là xâu chứa các kí tự chính giữa
	strcpy(t, a + l + 1);

	//Hiện tại là xâu chứa từ đầu tiên
	a[l] = '\0';

	//Nối các xâu lại với nhau
	strcat(strcat(strcat(r, " "), t), a);

	cout << "\nChuoi sau khi doi\n" << r;
}

void DoiChuHoa(Chuoi a)
{
	char temp;
	_strlwr(a);
	temp = *(a + 0) - 32;
	*(a + 0) = temp;
}

int Dem_X(Chuoi a, char x)
{
	int i, l = strlen(a), dem = 0;
	for (i = 0; i < l; i++)
		if (*(a + i) == x)
			dem++;
	return dem;
}


void LietKeKyTu(Chuoi a)
{
	int doDai = strlen(a);
	for (int i = 0; i < doDai; i++)
	{
		int dem = 1;
		if ((*(a + i) != 32) && *(a + i) != 0)
		{
			for (int j = i + 1; j < doDai; j++)
			{
				if ((*(a + i) != 32) && (*(a + j) != 0))     // 32 là dấu khoảng cách
				{
					if (*(a + i) == *(a + j))
					{
						dem++;
						*(a + j) = 0;
					}
				}
			}
			cout << "\nKy tu '" << *(a + i) << "' xuat hien " << dem << " lan";
		}
	}
}

int DemSoTu(Chuoi a)
{
	int doDai = strlen(a);
	int dem = 0;
	for (int i = 0; i < doDai; i++)
	{
		if (*(a + i) != ' ')
			dem++;
	}
	return dem;
}