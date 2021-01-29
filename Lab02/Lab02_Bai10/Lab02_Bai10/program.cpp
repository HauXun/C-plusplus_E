#include<iostream >
#include<math.h>
#include<conio.h>

using namespace std;
double TinhDoCao(double phi, double delta, double h);
double TinhPhuongVi(double phi, double delta, double h);
int main()
{
	double phi, delta, h, Altitude, Azimunth;
	// phi là vĩ độ 
	cout << "gia tri phi= ";
	cin >> phi;
	// delta là vị trí của các ngôi sao được xác định bởi vĩ độ
	cout << "gia tri delta= ";
	cin >> delta;
	// h là góc của múi giờ 
	cout << "gia tri h= ";
	cin >> h;
	//Altutude là góc thẳng đứng từ đường chân trời 
	// Azimunth là góc ngang 
	Altitude = TinhDoCao(phi, delta, h);
	cout << endl << "do cao = " << Altitude;
	Azimunth = TinhPhuongVi(phi, delta, h);
	cout << endl << " phuong vi = " << Azimunth;
	_getch();
	return 1;

}
double TinhDoCao(double phi, double delta, double h)
{
	double altitude;
	altitude = asin(sin(phi)* sin(delta) + cos(phi)*cos(delta)*cos(h));
	return altitude;
}
double TinhPhuongVi(double phi, double delta, double h)
{
	double azimuth;
	azimuth = acos((cos(phi) *sin(delta) - sin(phi)*cos(delta) *cos(h)) / cos(asin(sin(phi)* sin(delta) + cos(phi)*cos(delta)*cos(h))));
	return azimuth;
}