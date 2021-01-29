
// Khai bao nguyen mau ham
void XuatSo(int n);
int DemSoChiaHet(int n);
int DemSoLuong(int n);
int SoDaoNguoc(int n);
int TinhTongSo(int n);
int TimChuSoDauTien(int n);
int TimSoNguyenThoaDieuKien(int n);

// Phan dinh nghia ham
void XuatSo(int n)
{
	for (int i = 1; i <= n; i++)
		cout << i << "\t";
}

int DemSoChiaHet(int n)
{
	int ketQua = 0;
	for (int i = 1; i <= n; i++)
		if (i % 3 == 0 && i % 4 != 0)
			ketQua++;

	return ketQua;
}

int DemSoLuong(int n)
{
	int ketQua = 0;
	for (int i = 0; i <= n; i++)
	{ 
		ketQua++;
	}
	return ketQua;
}

int SoDaoNguoc(int n)
{
	int ketQua = 0;
	int Xuly;
	while (n > 0)
	{
		Xuly = n % 10;
		ketQua = ketQua * 10 + Xuly;
		n /= 10;
	}

	return ketQua;
}

int TinhTongSo(int n)
{
	int ketQua = 0;
	do {
		ketQua += n % 10;
		n = n / 10;
	} while (n > 0);

	return ketQua;
}

/*Dùng một vòng lặp do...while để nhập vào số nguyên dương n. Nếu n nhỏ hơn 0 thì ta nhập lại.
Ta kiểm tra nếu số nguyên n nếu có một chữ số thì đó chính là chữ số cần tìm.
Nếu n có nhiều chữ số thì ta tiến hành lấy từng chữ số của số nguyên dương n ra.
Cứ lấy đến khi gặp chữ số đầu tiên.
*/
int TimChuSoDauTien(int n)
{
	int ketQua;
	do {
		ketQua = n % 10;
		n /= 10;
	} while (n > 0);

	return ketQua;
}

int TimSoNguyenThoaDieuKien(int n)
{
	int m = 1;
	int ketQua = 0;

	while (ketQua + m <= n)
	{
		ketQua += m;
		m++;
	}
	m--;

	return m;
}

/*Nhập giá trị n
Ở đây n = 15
Gán biến m = 1
Gán biến lưu kết quả = 0

Thực hiện vòng lặp với điều kiện (ketQua + m <= n)

Vòng lặp 1:
ketQua += m  <=> ketQua = 0 + 1 = 1
m++ => m = m + 1 = 2

Vòng lặp 2:
ketQua += m  <=> ketQua = 1 + 2 = 3
m++ => m = 2 + 1 = 3

Vòng lặp 3:
ketQua += m  <=> ketQua = 3 + 3 = 6
m++ => m = 3 + 1 = 4

Vòng lặp 4:
ketQua += m  <=> ketQua = 6 + 3 = 9
m++ => m = 4 + 1 = 5

Vòng lặp 5:
ketQua += m  <=> ketQua = 9 + 5 = 14
m++ => m = 5 + 1 = 6

Không thõa mãn điều kiện nên vòng lặp dừng lại

Thực hiện trừ m đi 1 giá trị

m--  <=> m = 6 - 1*/