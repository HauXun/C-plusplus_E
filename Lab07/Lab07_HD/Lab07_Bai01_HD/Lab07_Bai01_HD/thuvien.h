//Kích thước khai báo xâu kí tự
#define MAX 100

//Kiểu xâu kí tự đặt tên la String
typedef char String[MAX];

/*Hàm nhập chuỗi
(Sử dụng hàm get_s trong string.h)*/
void gets_s_NhapChuoi(String a)
{
	cout << "\nNhap chuoi: ";
	_flushall();
	gets_s(a, MAX);

	/*Thử thay thế hàm nhập chuỗi - void gets_s_NhapChuoi(String a, char kt) – bằng hàm sau đây :
		Nhap chuoi, không dùng gets_s*/
	/*int i = 0;
	char x;
	cout << "\nNhap Chuoi: " << Kytu << " : ";
	_flushall();
	x = _getch();
	while (x != 13)
	{
		a[i++] = x;
		x = _getch();
	} 
		a[i] = 0;*/
}

/*Hàm xuất dữ liệu ma trận vuông ra màn hình
Xuất chuỗi*/
void XuatChuoi(String a)
{
	cout << a;
}

/*Hàm tính chiều dài chuỗi
(Sử dụng hàm strlen trong String.h)*/
int strlen_TinhChieuDaiChuoi(String a)
{
	int ChieuDai = strlen(a);
	return ChieuDai;
}

/*Hàm nối chuỗi
(Sử dụng hàm strcat_s trong string.h,
nối chuỗi nguồn b vào cuối chuỗi đích a)*/
void strcat_s_Noi_ChuoiSau_VaoSau_ChuoiTruoc(String a, String b)
{
	strcat_s(a, MAX, b);
}

/*Ham sao chép chuỗi
(Sử dụng hàm strcpy_s trong string.h)*/
void strcpy_s_Chep_ChuoiSau_Qua_ChuoiTruoc(String a, String b)
{
	strcpy_s(a, MAX, b);
}

/*Hàm so sánh chuỗi không phân biệt ký tự thường - HOA
(Sử dụng hàm _strcmpi trong string. h)
So sánh 2 chuỗi theo thứ tự từ điển: Không phân biệt thường - HOA*/
int _strcmpi_SoSanhChuoi_KPB(String a, String b)
{
	return _strcmpi(a, b);
}

/*Hàm so sánh chuỗi có phân biệt ký tự thường - HOA
(Sử dụng hàm strcmp trong string. h)
So sánh 2 chuỗi theo thứ tự từ điển: Có phân biệt thường - HOA*/
int strcmp_SoSanhChuoi_PB(String a, String b)
{
	return strcmp(a, b);
}

/*Hàm nối chuỗi
Hàm nối chuỗi b vào chuỗi a*/
void Noi_ChuoiSau_VaoSau_ChuoiTruoc(String a, String b)
{
	int chieuDai = strlen_TinhChieuDaiChuoi(a);
	for (int i = 0; (/*a[i] &&*/ b[i]) != 0; i++)

		a[chieuDai++] = b[i];
	a[chieuDai] = 0;
}

/*Hàm sao chép chuỗi
Hàm sao chép chuỗi b sang a*/
void Chep_ChuoiSau_Qua_ChuoiTruoc(String a, String b)
{
	for (int i = 0; (a[i]/* = b[i]*/) != 0; i++)
	a[i] = b[i];
}

//Hàm chuyển ký tự thường thành hoa
char Chuyen_KT_Hoa(char x)
{
	if ('a' <= x && x <= 'z')
		x -= 32;
	return x;
}

/*Hàm so sánh chuỗi không phân biệt ký tự thường - HOA
So sanh 2 chuoi theo thu tu tu dien : Khong phan biet thuong - HOA*/
int SoSanhChuoi_KPB(String a, String b)
{
	int i;
	for (i = 0; (a[i] && b[i] != 0); i++)
	{
		if (Chuyen_KT_Hoa(a[i]) < Chuyen_KT_Hoa(b[i]))
			return -1;
		if (Chuyen_KT_Hoa(a[i]) > Chuyen_KT_Hoa(b[i]))
			return 1;
	}
	if (a[i] != 0)
		return 1;
	if (b[i] != 0)
		return -1;
	return 0;
}

/*Hàm so sánh chuỗi có phân biệt ký tự thường hoa
So sanh 2 chuoi theo thu tu tu dien : co phan biet thuong hoa*/
int SoSanhChuoi_PB(String a, String b)
{
	int i;
	for (i = 0; (a[i] && b[i] != 0); i++)
	{
		if (a[i] < b[i])
			return -1;
		if (a[i] > b[i])
			return 1;
	}
	if (a[i] != 0)
		return 1;
	if (b[i] != 0)
		return -1;
	return 0;
}

