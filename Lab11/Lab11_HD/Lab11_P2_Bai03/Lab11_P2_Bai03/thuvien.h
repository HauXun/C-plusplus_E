#define MAX 100

//Hàm đọc dữ liệu của tệp tin, ghi vào mảng 1 chiều
//Tập tin có định dạng: Chỉ chứa dữ liệu - không có số phần tử tập tin ở hàng đầu
void File_Array(char *filename, int a[MAX], int &n)
{
	//Mở file để đọc
	ifstream in(filename);

	if (!in)
	{
		//Không thành công
		cout << "\nLoi mo file !";
		return;
	}
	else
	{
		n = 0;
		while (!in.eof())
		{
			in >> a[n];
			n++;
		}
		in.close();
	}
}

void Array_Display(int a[MAX], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << '\t';
}