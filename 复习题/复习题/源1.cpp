//题目2：程序结构
//已知指数函数的近似计算公式：。请编写一个完整C++程序根据以上公式计算cos(2.5)的值。精度要求累加的通项绝对值小于。禁止使用cmath / math.h中的数学函数。
#include <iostream>
using namespace std;

double jiecheng(int n)
{
	double product = 1;
	for (int i = 1; i <= n; i++)
	{
		product *= i;
	}
	return product;
}

double cos(int x)
{
	double cos1 = 1;
	double cos2 = 0;
	int n = 1;
	while (fabs(cos1 - cos2) < 1e-5)
	{
		cos2 = cos1;
		cos1 += ((-1) ^ n) * (x ^ (2 * n)) / jiecheng(2 * n);
		n++;
	}
	return cos1;
}

int main()
{
	cout << cos(2.5);
	return 0;
}