#ifndef VEC3D_H
#define VEC3D_H
#include <iosfwd>
#include <iostream>
#include <sstream>

template<typename t> //��� ���������� ����

struct vec3dt
{
	double x = 0.0;
	double y = 0.0;
	double z = 0.0;
	double eps = 0.00001;

	vec3dt(const t& xv, const t& yv, const t& zv);

	vec3dt() = default;											 //������������� �����������

	vec3dt& operator=(const vec3dt& rhs) = default;              // ??? !!!

	bool operator ==(const vec3dt& rhs)const;					 //�������� �� ���������

	bool operator !=(const vec3dt& rhs)const;					 //�������� �� �����������

	//vec3d(const double xv, const double yv, const double zv);	 //�����������

	//vec3dt(const vec3dt& v);									 //����������� ����������� (�������� ������ "v")

	~vec3dt() = default;										 //��������

	vec3dt& operator+=(const vec3dt& vec);                       //���������� �����������

	vec3dt& operator-=(const vec3dt& vec);                       //���������� ���������

	vec3dt& operator*=(const double rhs);						 //���������� ���������	

	t x{ t() };
	t y{ t() };
	t z{ t() };
};

template<typename t>
vec3dt<t> operator+(const vec3dt<t>& lhs, const vec3dt<t>& rhs);		 //�������� ��������

template<typename t>
vec3dt<t> operator-(const vec3dt<t>& lhs, const vec3dt<t>& rhs);		 //��������� ��������

template<typename t>
vec3dt<t> operator*(const vec3dt<t>& lhs, double rhs);					 //������������ ��������

#endif

template<typename t>
vec3dt<t>::vec3d(const double xv, const double yv, const double zv)		 //���������� ������������
{
	x = xv;
	y = yv;
	z = zv;
}

template<typename t>
vec3dt<t>::vec3dt(const t& xv, const t& yv, const t& zv)
	: x(xv)
	, y(yv)
	, z(zv)
{}

template<typename t>
bool vec3dt<t>:: operator==(const vec3dt<t>& rhs) const						//�������� �� ���������
{
	bool a = true;
	!(abs(x - rhs.x) < eps) ? a = false : a = a;
	!(abs(y - rhs.y) < eps) ? a = false : a = a;
	!(abs(z - rhs.z) < eps) ? a = false : a = a;
	return a;
}

template<typename t>
bool vec3dt<t>:: operator !=(const vec3dt<t>& rhs) const					//�������� �� �����������
{
	return !operator==(rhs);
}


template<typename t>
vec3dt<t>::operator+=(const vec3dt<t>& vec)								   //���������� �����������
{
	x += vec.x;
	y += vec.y;
	z += vec.z;
	return *this;
}

template<typename t>
vec3dt<t>::operator-=(const vec3dt<t>& vec)								   //���������� ���������
{
	x -= vec.x;
	y -= vec.y;
	z -= vec.z;
	return *this;
}

template<typename t>
vec3dt<t>::operator*=(const double rhs)									   //���������� ���������
{
	x *= rhs;
	y *= rhs;
	z *= rhs;
	return *this;
}

template<typename t>
vec3dt<t> operator+(const vec3dt<t>& lhs, const vec3dt<t>& rhs)				//�������� ��������
{
	vec3dt<t> sum(lhs);
	sum.x += rhs.x;
	sum.y += lhs.y;
	sum.z += lhs.z;
	return sum;
}

template<typename t>
vec3dt<t> operator-(const vec3dt<t>& lhs, const vec3dt<t>& rhs)				//��������� ��������
{
	vec3dt<t> sum(lhs);
	sum.x -= rhs.x;
	sum.y -= lhs.y;
	sum.z -= lhs.z;
	return sum;
}

template<typename t>
vec3dt<t> operator*(const vec3dt<t>& lhs, const double rhs)					//��������� ��������
{
	vec3dt<t> rez(lhs);
	rez.x *= rhs;
	rez.y *= rhs;
	rez.z *= rhs;
	return rez;
}
