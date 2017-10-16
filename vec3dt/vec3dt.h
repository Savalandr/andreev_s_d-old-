#ifndef VEC3D_H
#define VEC3D_H
#include <iosfwd>
#include <iostream>
#include <sstream>

template<typename t> //для шаблонного типа

struct vec3dt
{
	double x = 0.0;
	double y = 0.0;
	double z = 0.0;
	double eps = 0.00001;

	vec3dt(const t& xv, const t& yv, const t& zv);

	vec3dt() = default;											 //умолчательный конструктор

	vec3dt& operator=(const vec3dt& rhs) = default;              // ??? !!!

	bool operator ==(const vec3dt& rhs)const;					 //проверка на равенство

	bool operator !=(const vec3dt& rhs)const;					 //проверка на неравенство

	//vec3d(const double xv, const double yv, const double zv);	 //конструктор

	//vec3dt(const vec3dt& v);									 //конструктор копирования (получает вектор "v")

	~vec3dt() = default;										 //удалятор

	vec3dt& operator+=(const vec3dt& vec);                       //перегрузка прибавления

	vec3dt& operator-=(const vec3dt& vec);                       //перегрузка убавления

	vec3dt& operator*=(const double rhs);						 //перегрузка умножения	

	t x{ t() };
	t y{ t() };
	t z{ t() };
};

template<typename t>
vec3dt<t> operator+(const vec3dt<t>& lhs, const vec3dt<t>& rhs);		 //сложение векторов

template<typename t>
vec3dt<t> operator-(const vec3dt<t>& lhs, const vec3dt<t>& rhs);		 //вычитание векторов

template<typename t>
vec3dt<t> operator*(const vec3dt<t>& lhs, double rhs);					 //перемножение векторов

#endif

template<typename t>
vec3dt<t>::vec3d(const double xv, const double yv, const double zv)		 //реализация конструктора
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
bool vec3dt<t>:: operator==(const vec3dt<t>& rhs) const						//проверка на равенство
{
	bool a = true;
	!(abs(x - rhs.x) < eps) ? a = false : a = a;
	!(abs(y - rhs.y) < eps) ? a = false : a = a;
	!(abs(z - rhs.z) < eps) ? a = false : a = a;
	return a;
}

template<typename t>
bool vec3dt<t>:: operator !=(const vec3dt<t>& rhs) const					//проверка на неравенство
{
	return !operator==(rhs);
}


template<typename t>
vec3dt<t>::operator+=(const vec3dt<t>& vec)								   //перегрузка прибавления
{
	x += vec.x;
	y += vec.y;
	z += vec.z;
	return *this;
}

template<typename t>
vec3dt<t>::operator-=(const vec3dt<t>& vec)								   //перегрузка убавления
{
	x -= vec.x;
	y -= vec.y;
	z -= vec.z;
	return *this;
}

template<typename t>
vec3dt<t>::operator*=(const double rhs)									   //перегрузка умножения
{
	x *= rhs;
	y *= rhs;
	z *= rhs;
	return *this;
}

template<typename t>
vec3dt<t> operator+(const vec3dt<t>& lhs, const vec3dt<t>& rhs)				//сложение векторов
{
	vec3dt<t> sum(lhs);
	sum.x += rhs.x;
	sum.y += lhs.y;
	sum.z += lhs.z;
	return sum;
}

template<typename t>
vec3dt<t> operator-(const vec3dt<t>& lhs, const vec3dt<t>& rhs)				//вычитание векторов
{
	vec3dt<t> sum(lhs);
	sum.x -= rhs.x;
	sum.y -= lhs.y;
	sum.z -= lhs.z;
	return sum;
}

template<typename t>
vec3dt<t> operator*(const vec3dt<t>& lhs, const double rhs)					//умножение векторов
{
	vec3dt<t> rez(lhs);
	rez.x *= rhs;
	rez.y *= rhs;
	rez.z *= rhs;
	return rez;
}
