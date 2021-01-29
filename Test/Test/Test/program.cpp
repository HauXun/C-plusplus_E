#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
#define MAX 1000

void NhapMang(int arr[], int &n);
void XuatMang(int arr[], int n);
void SaoChepMang(int arrChep[], int arr[], int n);
int TimPhanTuDauTien(int arr[], int n, int x);
void SapXepTang(int arr[], int n);
void ThemMotPhanTu(int a[], int &n, int viTri, int x);
void XoaMotPhanTu(int a[], int &n, int viTri);

int main()
{
	int arr[MAX];
	int n;
	
	NhapMang(arr, n);
	XuatMang(arr, n);

	cout << "Nhap vi tri can xoa: ";
	int viTri;
	cin >> viTri;
	XoaMotPhanTu(arr, n, viTri);
	XuatMang(arr, n);
	
	return 1;
}

void NhapMang(int arr[], int &n)
{
	srand(time(NULL));

	//Khởi tạo ngẫu nhiên từng phần tử
	cout << "Nhap so luong phan tu n: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}


void XuatMang(int arr[], int n)
{
	//Xuất từng phần tử cho mảng
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << " ] = " << arr[i] << endl;
	}
}

void SaoChepMang(int arrChep[], int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		arrChep[i] = arr[i];
	}
}

int TimPhanTuDauTien(int arr[], int n, int x)
{
	for  (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
			return i;
	}
	return -1;
}

void HoanVi(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}


void SapXepTang(int arr[], int n)
{
	
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
				HoanVi(arr[i], arr[j]);
		}
	}
}

void ThemMotPhanTu(int a[], int &n, int viTri, int x)
{
	if (viTri >= 0 && viTri <= n)
	{
		for (int i = n; i > viTri; i--)
			a[i] = a[i - 1];
		a[viTri] = x;
		n++;
	}
}

void XoaMotPhanTu(int a[], int &n, int viTri)
{
	if (viTri >= 0 && viTri <= n)
	{
		for (int i = viTri; i < n; i++)
			a[i] = a[i + 1];
		n--;
	}
}