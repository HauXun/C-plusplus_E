//Định nghĩa các hằng số và kiểu dữ liệu mới

#define MAX 1000 //giới hạn số dương ngẫu nhiên máy tính nghĩ ra < MAX.

//Định nghĩa kiểu dữ liệu mới – không có

//=================================================================================

//Khai báo nguyên mẫu các hàm xử lí

//...(Bổ sung sau)

//=================================================================================

//Định nghĩa các hàm xử lí

//Input: Không có
//Output: k = Số lần đoán (Giả sử có 3 mức tương ứng với số lần đoán là: 3, 5, 7)

int ChonMucDoan()
{
	int k;
	do
	{
		cout << "\nChon so lan doan toi da (3, 5, 7): k = ";
		cin >> k;
	} while (k != 3 && k != 5 && k != 7);
	return k;
}

//Input: Không có
//Output: soDe = một số dương ngẫu nhiên < MAX

int SinhSoNgauNhien()
{
	int soDe;
	//Gieo số ngẫu nhiên

	srand((unsigned int)time(0));		//Khai báo <time.h>

	//Tạo số ngẫu nhiên
	soDe = rand() % MAX;				//Khai báo <stdlib.h>
	return soDe;
}

//Input: k = số lần đoán
//		soDe = đề do máy tính nghĩ ra
//Output: 1 (người chơi thắng)
//		  0 (người chơi thua)

int XuLyTroChoi(int k, int soDe)
{
	int i, soDoan, kq = 0;
	for (i = 1; i <= k; i++)
	{
		cout << "\nDoan lan " << i << ",so doan = ";
		cin >> soDoan;
		if (soDoan == soDe)
		{
			kq = 1;
			break;
		}
		else if (soDoan > soDe)
			cout << "\nSo doan lon hon";
		else
			cout << "\nSo doan nho hon";
	}
	return kq;
}

//Intput: kq, soDe;
//Output: Không có

void ThongBaoKetQua(int kq, int soDe)
{
	system("CLS");
	cout << "\nKET QUA TRO CHOI : ";
	if (kq)
		cout << "\nNguoi choi thang";
	else
		cout << "\nNguoi choi thua";
	cout << "\nDe cho so : " << soDe;
}