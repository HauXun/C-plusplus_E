#define MAX 100
void File_Array(char *filename, int a[MAX], int &n);

//Đọc dữ liệu trong tập tin filename lưu vào mảng a
void File_Array(char *filename, int a[MAX], int &n)
{
	//Mở tập tin filename để đọc
	ifstream in(filename);

	//Kiểm tra việc mở tập tin
	if (!in)
	{
		cout << "\nLoi mo file !";
		return;
	}
	else
	{

		//Đọc dữ liệu đầu tiên của tập tin (hàng đầu), lưu vào n
		//n là kích thước của mảng
		in >> n;
		for (int i = 0; i < n; i++)
		{
			//Lần lượt đọc dữ liệu từ tập tin ghi vào mảng 1 chiều arr
			in >> a[i];
		}
		in.close();
	}
}

int File_Array_2(char *filename, int a[MAX], int &n)
{
	ifstream in(filename);
	if (!in)
	{
		//Không thành côngs
		return 0;
	}

	in >> n;
	for (int i = 0; i < n; i++)
	{
		in >> a[i];
	}
	in.close();

	//Thành công
	return 1;
}