#ifndef VEC3D_H
#define VEC3D_H
#include <iosfwd>
#include <iostream>
#include <sstream>

template<typename T>											//��� ���������� ����

struct Vec3dT
{
	//double x = 0.0;
	//double y = 0.0;
	//double z = 0.0;
	double eps = 0.00001;

	Vec3dT(const T& xv, const T& yv, const T& zv);

	Vec3dT() = default;											 //������������� �����������

	Vec3dT& operator=(const Vec3dT& rhs) = default;              // ??? !!!

	bool operator ==(const Vec3dT& rhs)const;					 //�������� �� ���������

	bool operator !=(const Vec3dT& rhs)const;					 //�������� �� �����������

	//Vec3dT(const double xv, const double yv, const double zv);	 //�����������

	//Vec3dT(const vec3dT& v);									 //����������� ����������� (�������� ������ "v")

	~Vec3dT() = default;										 //��������

	Vec3dT& operator+=(const Vec3dT& vec);                       //���������� �����������

	Vec3dT& operator-=(const Vec3dT& vec);                       //���������� ���������

	Vec3dT& operator*=(const double rhs);						 //���������� ���������


	T x{ T() };													 //???
	T y{ T() };													 //???
	T z{ T() };													 //???
};

template<typename T>
Vec3dT<T> operator+(const Vec3dT<T>& lhs, const Vec3dT<T>& rhs);		 //�������� ��������

template<typename T>
Vec3dT<T> operator-(const Vec3dT<T>& lhs, const Vec3dT<T>& rhs);		 //��������� ��������

template<typename T>
Vec3dT<T> operator*(const Vec3dT<T>& lhs, double rhs);					 //������������ ��������

#endif

/*
template<typename T>
Vec3dT<T>::Vec3dT(const double xv, const double yv, const double zv)		 //���������� ������������
{
	x = xv;
	y = yv;
	z = zv;
}
*/

template<typename T>
Vec3dT<T>::Vec3dT(const T& xv, const T& yv, const T& zv)
	: x(xv)
	, y(yv)
	, z(zv)
{}

template<typename T>
bool Vec3dT<T>:: operator==(const Vec3dT<T>& rhs) const						//�������� �� ���������
{
	bool a = true;
	!(abs(x - rhs.x) < eps) ? a = false : a = a;
	!(abs(y - rhs.y) < eps) ? a = false : a = a;
	!(abs(z - rhs.z) < eps) ? a = false : a = a;
	return a;
}

template<typename T>
bool Vec3dT<T>:: operator!=(const Vec3dT<T>& rhs) const					//�������� �� �����������
{
	return !operator==(rhs);
}


template<typename T>
Vec3dT<T>& Vec3dT<T>:: operator+=(const Vec3dT<T>& vec)								   //���������� �����������
{
	x += vec.x;
	y += vec.y;
	z += vec.z;
	return *this;
}

template<typename T>
Vec3dT<T>& Vec3dT<T>::operator-=(const Vec3dT<T>& vec)								   //���������� ���������
{
	x -= vec.x;
	y -= vec.y;
	z -= vec.z;
	return *this;
}

template<typename T>
Vec3dT<T>& Vec3dT<T>::operator*=(const double rhs)									   //���������� ���������
{
	x *= rhs;
	y *= rhs;
	z *= rhs;
	return *this;
}

template<typename T>
Vec3dT<T> operator+(const Vec3dT<T>& lhs, const Vec3dT<T>& rhs)				//�������� ��������
{
	Vec3dT<T> sum(lhs);
	sum.x += rhs.x;
	sum.y += lhs.y;
	sum.z += lhs.z;
	return sum;
}

template<typename T>
Vec3dT<T> operator-(const Vec3dT<T>& lhs, const Vec3dT<T>& rhs)				//��������� ��������
{
	Vec3dT<T> sum(lhs);
	sum.x -= rhs.x;
	sum.y -= lhs.y;
	sum.z -= lhs.z;
	return sum;
}

template<typename T>
Vec3dT<T> operator*(const Vec3dT<T>& lhs, const double rhs)					//��������� ��������
{
	Vec3dT<T> rez(lhs);
	rez.x *= rhs;
	rez.y *= rhs;
	rez.z *= rhs;
	return rez;
}
