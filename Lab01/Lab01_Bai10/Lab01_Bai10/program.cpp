#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	cout << setw(35) << "DANH SACH SINH VIEN" << endl << endl;
	cout << setiosflags(ios::left)
		<< setw(10) << "MSSV"
		<< setw(25) << "Ho va ten"
		<< setw(10) << "Khoa"
		<< setw(10) << "Diem"
		<< endl;
	cout << setiosflags(ios::left)
		<< setw(10) << "------"
		<< setw(25) << "--------------------"
		<< setw(10) << "-----"
		<< setw(10) << "----"
		<< endl;
	cout << setiosflags(ios::left)
		<< setw(10) << "1234561"
		<< setw(25) << "Luis"
		<< setw(10) << "CTK44"
		<< setw(10) << "4.5"
		<< endl;
	cout << setiosflags(ios::left)
		<< setw(10) << "1234562"
		<< setw(25) << "Luiq"
		<< setw(10) << "CTK44"
		<< setw(10) << "5"
		<< endl;
	cout << setiosflags(ios::left)
		<< setw(10) << "1234563"
		<< setw(25) << "Luiw"
		<< setw(10) << "CTK44"
		<< setw(10) << "5.5"
		<< endl;
	cout << setiosflags(ios::left)
		<< setw(10) << "1234564"
		<< setw(25) << "Luie"
		<< setw(10) << "CTK44"
		<< setw(10) << "6"
		<< endl;
	cout << setiosflags(ios::left)
		<< setw(10) << "1234565"
		<< setw(25) << "Luir"
		<< setw(10) << "CTK44"
		<< setw(10) << "6.5"
		<< endl;
	cout << setiosflags(ios::left)
		<< setw(10) << "1234566"
		<< setw(25) << "Luit"
		<< setw(10) << "CTK44"
		<< setw(10) << "7"
		<< endl;
	cout << setiosflags(ios::left)
		<< setw(10) << "1234567"
		<< setw(25) << "Luiy"
		<< setw(10) << "CTK44"
		<< setw(10) << "7.5"
		<< endl;
	cout << setw(25) << "=================================================";
	_getch();
	return 1;
}