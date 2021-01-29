#define MAX 100

//Hàm chuyển dữ liệu của mảng 1 chiều vào tập tin
void Write_Int(int a[], int n, char *filename)
{
	//Mở file để ghi
	ofstream out(filename);

	//Kiểm tra việc mở file
	if (!out)
	{
		cout << "\nLoi mo file !";
		return;
	}
	else
	{
		//Ghi kích thước của mảng vào tập tin
		out << n;
		out << '\n';	//Xuống hàng

		for (int i = 0; i < n; i++)
		{
			//Lần lượt ghi a[i] vào tập tin
			out << a[i] << '\t';
		}
		out.close();
		cout << "\nDa ghi xong du lieu vao tep." << filename;
	}
}

//Hàm xuất dữ liệu của tập tin ra màn hình
void File_Display(char *filename)
{
	int n, x;
	//Mở file để đọc
	ifstream in(filename);
	if (!in)
	{
		cout << "\nLoi mo file !";
		return;
	}
	else
	{
		in >> n;
		cout << n << endl;
		for (int i = 0; i < n; i++)
		{
			in >> x;
			cout << x << '\t';
		}
		in.close();
	}
}