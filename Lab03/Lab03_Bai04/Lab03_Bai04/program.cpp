#include<iostream>
#include<conio.h>
using namespace std;
double TinhChiSoBMI(double khoiluong, double chieucao);

int main()
{
	double w , h ;
	cout << endl << "Nhap khoi luong : " ;
	cin >> w;

	cout << endl << "Nhap chieu cao : " ;
	cin >> h;
	TinhChiSoBMI(w, h);
	_getch();
	return 1;
}

double TinhChiSoBMI(double khoiluong, double chieucao)
{
	double BMI;
	BMI = khoiluong / pow(chieucao, 2);

	cout << endl << "BMI cua ban la : " << BMI;

	if (BMI < 15)
		cout << "Doi khat -> Ban hay an di nhe";
	else if (BMI < 17.5)
		cout << "Bieng an -> Ban nen an nhieu vao";
	else if (BMI < 18.5)
		cout << "Thieu can -> Ban hay co gang an uong dieu do";
	else if (BMI <= 18.5 && BMI < 25)
		cout << endl << "Chi so ly tuong -> Co the ban dang rat tot";
	else if (BMI <= 25 && BMI < 30)
		cout << endl << "Thua can -> Ban nen kieng";
	else if (BMI <= 30 && BMI < 40)
		cout << endl << "Beo phi -> Ban nen giam can";
	else if (BMI >= 40)
		cout << endl << "Tre em bi beo phi -> Hay dieu chinh che do an uong lai";
	return BMI;
}