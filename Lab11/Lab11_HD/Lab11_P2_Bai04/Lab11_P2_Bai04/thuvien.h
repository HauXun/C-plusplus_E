#define MAX 100

void File_Mat(char *filename, int a[MAX][MAX], int &n)
{
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
		for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			in >> a[i][j];
	}
	in.close();
}