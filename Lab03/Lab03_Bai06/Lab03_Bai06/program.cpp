#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	//Khai báo gán khởi tạo các biến a, b, c, d, e
	//Gán điều kiện theo đề bài cho từng biến a, b, c, d, e
	//Sau đó sử dụng toán tử '++' để lặp lại các biến để tìm ngiệm tất cả
	//các nghiệm của phương trình cho đến khi thõa mãn điều kiện 0 < a, b, c, d, e <= 10

	for (int a = 0; a <= 10; a++)
		for (int b = 0; b <= 10; b++)
			for (int c = 0; c <= 10; c++)
				for (int d = 0; d <= 10; d++)
					for (int e = 0; e <= 10; e++)

						//Nếu các nghiệm của phương thõa mãn điều kiện:
						//			0 < a, b, c, d, e <= 10

						if ((3 * a - 2 * b + 4 * c + 5 * d - e) == 30)
							
							//Xuất ra các giá trị thõa mãn tương ứng với từng nghiệm

							cout << "\na = " << a << ", b = " << b
							<< ", c = " << c << ", d = " << d << ", e = " << e;
	_getch();
	return 0;
}
