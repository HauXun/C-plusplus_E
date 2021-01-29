#define MAX 100
#define CACH ' '

/*Định nghĩa hàm chuyển sang ký tự thường
(Nếu là ký tự thường thì giữ nguyên, nếu là HOA thì chuyển sang thường*/
char Chuyen_KT_Thuong(char x)
{
	if ('A' <= x && x <= 'Z')
		x += 32;
	return x;
}

/*Định nghĩa hàm chuyển sang ký tự HOA
(Nếu là ký tự HOA thì giữ nguyên, nếu là thường thì chuyển sang HOA*/
char Chuyen_KT_Hoa(char x)
{
	if ('a' <= x && x <= 'z')
		x -= 32;
	return x;
}

/*Chèn 1 ký tự vào cuối 1 xâu ký tự
Chèn ký tự vào cuối b*/
void ChenCuoi(char b[MAX], char Kytu)
{
	int i;
	for (i = 0; b[i] != 0; i++);
	b[i++] = Kytu;
	b[i] = 0;
}

void NanTen(char a[MAX])
{
	int i;
	char b[MAX];//Xau trung gian
	b[0] = 0;
	i = 0;
	//Khu dau cach
	while (a[i] == CACH)
		i++; //a[i] == NULL hay la dau 1 tu
	while (a[i] != 0) //xu ly tu
	{
		ChenCuoi(b, Chuyen_KT_Hoa(a[i])); // xu ly dau tu: a[i]
		i++; //xet ky tu ke tiep : than tu, CACH hay ket thuc xau
		while (a[i] != CACH && a[i] != 0) //ky tu trong than tu
		{
			ChenCuoi(b, Chuyen_KT_Thuong(a[i])); // xu ly than tu
			i++;
		} //a[i] == CACH hay a[i] == NULL
		//Da xu ly xong 1 tu
		//Chua ket thuc xau thi tiep tuc xu ly tu tiep theo
		//Tiep tuc vuot dau cach
		while (a[i] == CACH)
			i++; //a[i] == NULL hay la dau 1 tu
		if (a[i] != 0) //tu vua xu ly chua phai la tu cuoi
			ChenCuoi(b, CACH); // chen cac vao sau b
	}
	strcpy_s(a, MAX, b);
}