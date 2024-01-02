//��Ŀ2������ṹ
//��ָ֪�������Ľ��Ƽ��㹫ʽ�������дһ������C++����������Ϲ�ʽ����cos(2.5)��ֵ������Ҫ���ۼӵ�ͨ�����ֵС�ڡ���ֹʹ��cmath / math.h�е���ѧ������
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