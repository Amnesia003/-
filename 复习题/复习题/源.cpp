//题目1：简单程序设计
//编写一个C++程序，分别用double型变量a, b, c表示三角形的三条边长。从键盘输入a, b, c的值，然后计算并输出该三角形的面积s。三角形面积计算公式为，其中（假设输入的都是合法数据）。
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

//题目2：程序结构
//已知指数函数的近似计算公式：。请编写一个完整C++程序根据以上公式计算cos(2.5)的值。精度要求累加的通项绝对值小于。禁止使用cmath / math.h中的数学函数。
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
//题目3：函数定义和调用
//编写一个C++程序判断一个大于等于3的整数是不是强素数。
//所谓强素数是指大于前面和后面相邻素数平均值的素数。
//如11本身是素数，且大于前面相邻的素数7和后面相邻的素数13的均值，因此11是强素数；
//7本身是素数，但不大于前面相邻的素数5和后面相邻的素数11的均值，因此7不是强素数。
//定义一个函数int isPrime(int n)，判断某个整数是否为素数（质数）。
//定义一个函数int isStrongPrime(int n)，判断某个整数是不是强素数。
//在主函数中输入一个大于等于3的整数，并调用isStrongPrime判断其是否是强素数并输出结果。
//#include <iostream>
//using namespace std;
//
//int isPrime(int n)
//{
//	int flag = 1;//是素数
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
//	int flag = 1;//是强素数
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
//		cout << "是强素数";
//	else
//		cout << "不是强素数";
//	return 0;
//}


//题目4：函数参数
//编写函数fun，计算二维数组各行元素的平均值。
//要求将结果数组同时用返回值返回和函数参数返回。
//在主函数中定义并初始化一个4行3列的整型数组及其他必要的变量或数组，调用fun函数实现相关功能，并在主函数中输出计算所得每行均值。
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
//题目5：面向对象的编程
//定义一个三维向量类Vector3D，具体要求如下：
//（1）double型数据成员x、y、z，并实现数据封装。
//（2）带参构造函数；
//（3）计算两个三维向量的和的成员函数Vector3D Plus(Vector3D v1, Vector3D v2)；
//（4）计算三维向量的长度的成员函数double Mod()；
//（5）在主函数中定义Vector3D类的三个对象v1、v2和v3并初始化v1和v2，使用成员函数Plus计算v1和v2的和并赋值给v3，并计算v1、v2和v3的长度并分别输出。