#pragma once
class Vector3D
{
public:
	double x, y, z;
	Vector3D();
	Vector3D Plus(Vector3D v1, Vector3D v2);
	double Mod();
};

double Vector3D::Mod()
{
	double len = 0;
	len = sqrt(x * x + y * y + z * z);
	return len;
}

Vector3D Vector3D::Plus(Vector3D v1, Vector3D v2)
{
	Vector3D v3;
	v3.x = v1.x + v2.x;
	v3.y = v1.y + v2.y;
	v3.z = v1.z + v2.z;
	return v3;
}


