#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

#define TAB		'\t'

int KiemTra_NT(int n);
void LietKeSoNT(unsigned int n);

int main()
{
	//Khai báo biến để lưu số lượng nguyên tố cần tìm
	unsigned int n;

	//Nhập giá trị cho biến n
	cout << endl << "Nhap so luong so nguyen to can tim : ";
	cin >> n;

	//Gọi hàm liệt kê số nguyên tố
	LietKeSoNT(n);

	_getch();
	return 1;
}
//Định nghĩa hàm kiểm tra số n có phải là số nguyên tố
//Input:
//	n: Số cần kiểm tra có phải là số nguyên tố
//Output: kq
//		kq = 1 : n là số nguyên tố
//	kq = 0 : n không phải là số nguyên tố
int KiemTra_NT(int n)
{
	int kq, m, i;
	if (n < 2)					//Những số nhỏ hơn 2 đều không phải là số nguyên tố
		kq = 0;
	else
	{
		//m = (int)sqrt((float)n);	//Lưu căn bậc 2 của n
		//i = 2;						//Lưu chỉ số để kiểm tra
		//kq = 1;						//Lưu kết quả kiểm tra

		////Duyệt qua từng giá trị từ i -> m để kiểm tra n có chia hết cho i không?
		////Nếu có, gán kq = 0.
		//while (i <= m && kq)
		//{
		//	if (n % i == 0)
		//		kq = 0;
		//	else 
		//		kq = 1;
		//	i++;
		//}
		for (m = (int)sqrt((float)n), i = 2, kq = 1; (i <= m && kq); i++)
			if (n % i == 0)
				kq = 0;
			else
				kq = 1;
	}
	return kq;
}

//Định nghĩa hàm tìm n số nguyên tố đầu tiên
//Input:
//	n: Số lượng nguyên tố
//Output:
//	Không có, Chỉ xuất ra n số nguyên tố đầu tiên
void LietKeSoNT(unsigned int n)
{
	int dem = 0, so = 2;

	//Trong khi chưa tìm đủ n số nguyên tố thì
	while (dem < n)
	{
		//Kiểm tra so có phải là nguyên tố
		if (KiemTra_NT(so))
		{
			//Nếu đúng thì xuất số đó và tăng biến đếm
			cout << so << TAB;
			dem++;
		}
		//Tăng so lên 1 đơn vị để kiểm tra số tiếp theo
		so++;;
	}
}