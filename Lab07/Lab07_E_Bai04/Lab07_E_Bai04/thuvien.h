#define MAX 100

typedef char String[MAX];

void NhapChuoi(String a)
{
	cout << "\nNhap chuoi: ";
	_flushall();
	gets_s(a, MAX);
}

void XuatChuoi(String a)
{
	cout << a;
}

int DoDaiChuoi(String a)
{
	int ketQua = 0;
	for (int i = 0; a[i] != 0; i++)
		ketQua++;
	return ketQua;
}

int DemX(String a, char x)
{
	int dem = 0;
	int doDai = DoDaiChuoi(a);
	for (int i = 0; i <= doDai; i++)
	{
		if (a[i] == x)
			dem++;
	}
	return dem;
}

int ViTriX_DauTien(String a, char x)
{
	int doDai = DoDaiChuoi(a);
	for (int i = 0; i < doDai; i++)
	{
		if (a[i] == x)
		{
			return i;
			break;
		}
	}
	return -1;
}

int TimViTri(String a, String b)
{
	int viTri = -1;
	if (strstr(a, b) != NULL)
		viTri = strlen(a) - strlen(strstr(a, b));
	return viTri;
}

int DemSoTu(String a)
{
	int doDai = strlen(a);
	int dem = 0;
	for (int i = 0; i < doDai; i++)
	{
		if (a[i] != ' ')
			dem++;
	}
	return dem;
	//int doDai = DoDaiChuoi(a);
	//int dem = 0;
	//for (int i = 0; i < doDai - 1; i++)
	//{
	//	///Vì trong phần điều kiện ta lấy ký tự i+1
	//	if (a[i] == ' ' && a[i + 1] != ' ')
	//	{
	//		/*Nếu ký tự chỉ số i là dấu cách
	//		và ký tự chỉ số i+1 không phải dấu cách
	//		thì ta đếm được 1 từ*/
	//		dem++;
	//	}
	//}
	//if (a[0] != ' ')
	//{
	//	/*Nếu ký tự đầu tiên của chuỗi
	//	không phải dấu cách thì ta cũng đếm được 1
	//	từ nữa.*/
	//	dem++;
	//}
	//return dem;
}

void Dao(char *a)
{
	char t[MAX], r[MAX];
	int i, l;
	for (i = strlen(a) - 1; i >= 0; i--)
		if (a[i] == ' ')
			break;

	//Tìm được từ cuối
	strcpy(r, a + i + 1);

	//Xâu a sau khi bỏ từ cuối, có khoảng trắng ở cuối xâu
	a[i + 1] = '\0';

	//Tìm vị trí khoảng trắng đầu tiên trong chuỗi
	l = strlen(a) - strlen(strstr(a, " "));

	//l là xâu chứa các từ chính giữa
	strcpy(t, a + l + 1);

	//Hiện tại là xâu chứa từ đầu tiên
	a[l] = '\0';

	//Nối lại các xâu với nhau
	strcat(strcat(strcat(r, " "), t), a);

	cout << "\n" << r;
}
