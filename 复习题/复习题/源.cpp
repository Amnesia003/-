//��Ŀ1���򵥳������
//��дһ��C++���򣬷ֱ���double�ͱ���a, b, c��ʾ�����ε������߳����Ӽ�������a, b, c��ֵ��Ȼ����㲢����������ε����s��������������㹫ʽΪ�����У���������Ķ��ǺϷ����ݣ���
//#include <iostream>
//using namespace std;
//int main()
//{
//	double a, b, c;
//	cin >> a >> b >> c;
//	double L = (a + b + c) / 2;
//	double s = 0;
//	s = sqrt(L * (L - a) * (L - b) * (L - c));
//	cout << s;
//	return 0;
//}

//��Ŀ2������ṹ
//��ָ֪�������Ľ��Ƽ��㹫ʽ�������дһ������C++����������Ϲ�ʽ����cos(2.5)��ֵ������Ҫ���ۼӵ�ͨ�����ֵС�ڡ���ֹʹ��cmath / math.h�е���ѧ������
//#include <iostream>
//using namespace std;
//
//double jiecheng(int n)
//{
//	double product = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		product *= i;
//	}
//	return product;
//}
//
//double cos(int x)
//{
//	double cos1 = 1;
//	double cos2 = 0;
//	int n = 1;
//	while (fabs(cos1 - cos2) < 1e-5)
//	{
//		cos2 = cos1;
//		cos1 += ((-1) ^ n) * (x ^ (2 * n)) / jiecheng(2 * n);
//		n++;
//	}
//	return cos1;
//}
//
//int main()
//{
//	cout << cos(2.5);
//	return 0;
//}

//
//��Ŀ3����������͵���
//��дһ��C++�����ж�һ�����ڵ���3�������ǲ���ǿ������
//��νǿ������ָ����ǰ��ͺ�����������ƽ��ֵ��������
//��11�������������Ҵ���ǰ�����ڵ�����7�ͺ������ڵ�����13�ľ�ֵ�����11��ǿ������
//7��������������������ǰ�����ڵ�����5�ͺ������ڵ�����11�ľ�ֵ�����7����ǿ������
//����һ������int isPrime(int n)���ж�ĳ�������Ƿ�Ϊ��������������
//����һ������int isStrongPrime(int n)���ж�ĳ�������ǲ���ǿ������
//��������������һ�����ڵ���3��������������isStrongPrime�ж����Ƿ���ǿ��������������
//#include <iostream>
//using namespace std;
//
//int isPrime(int n)
//{
//	int flag = 1;//������
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			flag = 0;
//	}
//	return flag;
//}
//
//int isStrongPrime(int n)
//{
//	if (isPrime(n) == 0)
//		return 0;
//	int flag = 1;//��ǿ����
//	int low = 0;
//	int high = 0;
//	for (int i = n - 1; i > 0; i--)
//	{
//		if (isPrime(i) == 1)
//		{
//			low = i;
//			break;
//		}
//	}
//
//	for (int i = n + 1; ; i++)
//	{
//		if (isPrime(i) == 1)
//		{
//			high = i;
//			break;
//		}
//	}
//
//	if (n > (high + low) / 2)
//		flag = 1;
//	else
//		flag = 0;
//
//	return flag;
//}
//int main()
//{
//	int n = 0;
//	cin >> n;
//	if (isStrongPrime(n) == 1)
//		cout << "��ǿ����";
//	else
//		cout << "����ǿ����";
//	return 0;
//}


//��Ŀ4����������
//��д����fun�������ά�������Ԫ�ص�ƽ��ֵ��
//Ҫ�󽫽������ͬʱ�÷���ֵ���غͺ����������ء�
//���������ж��岢��ʼ��һ��4��3�е��������鼰������Ҫ�ı��������飬����fun����ʵ����ع��ܣ������������������������ÿ�о�ֵ��
//#include <iostream>
//using namespace std;
//double* fun(double a[][3],int len)
//{
//	double arr[4] = { 0 };
//	double sum = 0;
//
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = 0; j < 3; j++)
//			sum += a[i][j];
//		arr[i] = sum / 3;
//		sum = 0;
//	}
//
//	return arr;
//}
//
//int main()
//{
//	double a[4][3] = { 0 };
//	double arr[4] = { 0 };
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		cout << *(fun(a,4) + i)<<endl;
//	}
//
//	return 0;
//}
//
//��Ŀ5���������ı��
//����һ����ά������Vector3D������Ҫ�����£�
//��1��double�����ݳ�Աx��y��z����ʵ�����ݷ�װ��
//��2�����ι��캯����
//��3������������ά�����ĺ͵ĳ�Ա����Vector3D Plus(Vector3D v1, Vector3D v2)��
//��4��������ά�����ĳ��ȵĳ�Ա����double Mod()��
//��5�����������ж���Vector3D�����������v1��v2��v3����ʼ��v1��v2��ʹ�ó�Ա����Plus����v1��v2�ĺͲ���ֵ��v3��������v1��v2��v3�ĳ��Ȳ��ֱ������