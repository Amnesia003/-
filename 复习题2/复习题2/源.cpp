//��Ŀ5���������ı��
//����һ����ά������Vector3D������Ҫ�����£�
//��1��double�����ݳ�Աx��y��z����ʵ�����ݷ�װ��
//��2�����ι��캯����
//��3������������ά�����ĺ͵ĳ�Ա����Vector3D Plus(Vector3D v1, Vector3D v2)��
//��4��������ά�����ĳ��ȵĳ�Ա����double Mod()��
//��5�����������ж���Vector3D�����������v1��v2��v3����ʼ��v1��v2��ʹ�ó�Ա����Plus����v1��v2�ĺͲ���ֵ��v3��������v1��v2��v3�ĳ��Ȳ��ֱ������
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