#include <iostream>
#include <conio.h>
using namespace std;
int UCLN(int a, int b);
int BCNN(int a, int b);
int main()
{
	int a, b;
	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	int result = UCLN(a, b);
	cout << "UCLN : " << result;

	cout << "\n";

	result = BCNN(a, b);
	cout << "BCNN : " << result << endl;
	_getch();
	return 1;
}

int UCLN(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}

	return a;
}


int BCNN(int a, int b)
{
	int result = UCLN(a, b);
	return a * b / result;
}