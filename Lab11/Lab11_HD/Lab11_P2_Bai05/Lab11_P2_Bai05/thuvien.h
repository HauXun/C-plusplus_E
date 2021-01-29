#define MAX 100


//Hàm lưu ma trận vuông vào tập tin
void Mat_File(char *filename, int a[MAX][MAX], int n)
{
	//Mở file để ghi dữ liệu
	ofstream out(filename);
	if (!out)
	{
		cout << "\nLoi mo file !";
		return;
	}
	else
	{
		out << n;
		for (int i = 0; i < n; i++)
		{
			out << "\n";
			for (int j = 0; j < n; j++)
				out << a[i][j] << '\t';
		}
		out.close();
		cout << "\nLuu file thanh cong !";
	}
}

//Xuất tập tin ma trận vuông ra màn hình
void File_Display(char *filename)
{
	int n, x;
	//Mở file để đọc
	ifstream in(filename);
	if (!in)
	{
		cout << "\nLoi mo file.";
		return;
	}
	else
	{
		in >> n;
		cout << n;
		for (int i = 0; i < n; i++)
		{
			cout << "\n";
			for (int j = 0; j < n; j++)
			{
				in >> x;
				cout << x << '\t';
			}
		}
	}
	in.close();
}

//Hàm tạo ma trận vuông ngẫu nhiên
void TaoMaTranNgauNhien(int a[MAX][MAX], int n)
{
	srand((unsigned)time(0));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % 10;
}

//Hàm xuất ma trận ra màn hình
void XuatMaTran(int a[MAX][MAX], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
			cout << a[i][j] << '\t';
	}
}