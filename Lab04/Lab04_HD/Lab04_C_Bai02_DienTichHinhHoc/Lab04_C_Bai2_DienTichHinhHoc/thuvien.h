#define PI 3.1415926


//Định nghĩa hàm tính S,HV
//Input: canh = Độ dài Hình vuông
//Output: Diện tích hình vuông

double DienTichHinhVuong(double canh)
{
	return canh * canh;
}

//Định nghĩa hàm tính diện tích HCN
//Input: dai = Kích thước chiều dài của HCN
//		 rộng = Kích thước chiều rộng của HCN
//Output: Diện tích HCN

double DienTichHinhChuNhat(double dai, double rong)
{
	return dai * rong;
}

//Định nghĩa hàm tính S,HTG
//Input : a: Độ dài cạnh a
//			b: Độ dài cạnh b
//			c: Độ dài cạnh c
//Output: S.HTG

double DienTichTamGiac(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

//Định nghĩa hàm tính S,Htron
//Input: banKinh = Độ dài bán kính hình tròn
//Output: S,Htron

double DienTichHinhTron(double banKinh)
{
	return PI * banKinh * banKinh;
}