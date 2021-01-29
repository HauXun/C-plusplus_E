#define MAX 10

void XuatMaTran(int a[MAX][MAX], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n\n\n";
		for (int j = 0; j < n; j++)
			cout << setw(5) << a[i][j];
	}
}

void Tao_MaTran_XoanOc(int a[MAX][MAX], int n)
{
	int giaTri, hangTren, hangDuoi, cotTrai, cotPhai;

	//Khoi tao gia tri cho hangTren, hangDuoi, cotTrai, cotPhai

	//Hang dau tien
	hangTren = 0;

	//Cot cuoi cung
	cotPhai = n - 1;

	//Hang cuoi cung
	hangDuoi = n - 1;

	//Cot dau tien
	cotTrai = 0;

	giaTri = 1;
	while (giaTri <= n*n)
	{
		//Gan gia tri cho hang tren
		for (int j = cotTrai; (j <= cotPhai) && (giaTri <= n*n); j++)
		{
			a[hangTren][j] = giaTri;
			giaTri++;
		}
			if (giaTri >= n*n)
				break;
			//Chuan bi cho hang ke tiep
			hangTren++;

			//Gan gia tri cho cot phai
			for (int i = hangTren; (i <= hangDuoi) && (giaTri <= n*n); i++)
			{
				a[i][cotPhai] = giaTri;
				giaTri++;
			}
			if (giaTri > n*n)
				break;
			//Chuan bi cho cot ke truoc
			cotPhai--;
			//Gan gia tri value cho hang duoi
			for (int j = cotPhai; (j >= cotTrai) && (giaTri <= n*n); j--)
			{
				a[hangDuoi][j] = giaTri;
				giaTri++;
			}
			if (giaTri > n*n)
				break;
			//Chuan bi cho hang ke tren
			hangDuoi--;

			//Gan gia tri value cho cot trai
			for (int i = hangDuoi; (i >= hangTren) && (giaTri <= n*n); i--)
			{
				a[i][cotTrai] = giaTri;
				giaTri++;
			}
			if (giaTri > n*n)
				break;
			//Chuan bi cho cot ke tiep
			cotTrai++;
		}
	//Sau 1 lần xoắn gồm 4 vòng for ma tran bot di 2 hang 2 cot (value tăng theo vòng xoắn)
}