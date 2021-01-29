// Định nghĩa hàm tính tổng 1 + 1/2 + 1/3 + ... + 1/n
// Input : n = một số nguyên dương.
// Output: Tổng 1 + 1/2 + 1/3 + ... + 1/n
double TinhTongR(unsigned int n)
{
	double sum = 0; // Khai báo biến lưu kết quả
	unsigned int i;
	// Duyệt qua từng số i từ 1 đến n
	for (i = 1; i <= n; i++)
		sum += 1.0 / i; // Cộng dồn 1/i vào kết quả
	return sum;
}

// Định nghĩa hàm tính tổng 2/1 + 3/4 + 4/9 + ...
// Input : n = một số nguyên dương.
// Output: Tổng 2/1 + 3/4 + 4/9 + ... + (n+1)/(n^2)
double TinhTongS(unsigned int n)
{
	double sum = 0;		//Khai báo biến lưu kết quả
	unsigned int i;

	// Duyệt qua từng số i từ 1 đến n
	// và cộng dồn (i+1)/(i^2) vào kết quả
	for (i = 1; i <= n; i++)
		sum += (i + 1) / (i * i);
	return sum;
}

// Định nghĩa hàm tính tổng - 1 / 2 + 2 / 3 - 3 / 4 + ...
// Input : n = một số nguyên dương.
// Output: Tổng -1/2 + 2/3 - 3/4 + ... + n * (-1)^n / (n+1)
double TinhTongT(unsigned int n)
{
	double sum = 0; // Khai báo biến lưu kết quả
	unsigned int i;
	// Duyệt qua từng số i từ 1 đến n và cộng dồn
	// hoặc trừ bớt i * (-1)^i / (i+1) khỏi kết quả
	for (i = 1; i <= n; i++)
		if (i % 2 == 0)
			sum += i / (i + 1.0);
		else
			sum -= i / (i + 1.0);
	return sum;
}
