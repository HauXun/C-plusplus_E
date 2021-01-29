#define MAX 100

typedef char String[MAX];

void NhapChuoi(String a)
{
	cout << "\nNhap chuoi: ";
	_flushall();
	gets_s(a, MAX);
}


int KyTuSangSo(char x)
{
	switch (x)
	{
	case '0':
		return 0;
	case '1':
		return 1;
	case '2':
		return 2;
	case '3':
		return 3;
	case '4':
		return 4;
	case '5':
		return 5;
	case '6':
		return 6;
	case '7':
		return 7;
	case '8':
		return 8;
	case '9':
		return 9;
	}
}

int ChuyenDoi(String a)
{
	int kq = 0;

	for (int i = 0; a[i] != 0; i++)
	{
		kq = kq * 10 + KyTuSangSo(a[i]);
	}

	return kq;
}