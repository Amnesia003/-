//题目5：面向对象的编程
//定义一个三维向量类Vector3D，具体要求如下：
//（1）double型数据成员x、y、z，并实现数据封装。
//（2）带参构造函数；
//（3）计算两个三维向量的和的成员函数Vector3D Plus(Vector3D v1, Vector3D v2)；
//（4）计算三维向量的长度的成员函数double Mod()；
//（5）在主函数中定义Vector3D类的三个对象v1、v2和v3并初始化v1和v2，使用成员函数Plus计算v1和v2的和并赋值给v3，并计算v1、v2和v3的长度并分别输出。
#include <iostream>
#include "Vector3D.h"
using namespace std;

int main()
{
	double x, y, z;
	Vector3D v1, v2, v3;

	cin>> x >> y >> z;
	v1.x = x;
	v1.y = y;
	v1.z = z;

	cin >> x >> y >> z;
	v2.x = x;
	v2.y = y;
	v2.z = z;

	v3.Plus(v1, v2);

	Vector3D* p = NULL;
	cout<<v1.Mod();
	cout<<v2.Mod();
	cout<<v3.Mod();

	return 0;
}