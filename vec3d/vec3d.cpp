#include <iostream> 
#include <sstream> 
#include "vec3d.h"


	vec3d::vec3d(const double xv, const double yv, const double zv)		//реализация конструктора
	{
		x = xv;
		y = yv;
		z = zv;
	}

	vec3d::vec3d(const vec3d& v)									 	//конструктор копирования (получает вектор "v")

		: x(v.x)
		, y(v.y)
		, z(v.z)
	{}	
	
	vec3d& vec3d::operator+=(const vec3d& vec)                          //перегрузка прибавления
	{
		x += vec.x;
		y += vec.y;
		z += vec.z;
		return *this;
	}

	vec3d& vec3d::operator-=(const vec3d& vec)                          //перегрузка убавления
	{
		x -= vec.x;
		y -= vec.y;
		z -= vec.z;
		return *this;
	}
	
	vec3d& vec3d::operator*=(const double rhs)                          //перегрузка умножения
	{
		x *= rhs;
		y *= rhs;
		z *= rhs;
		return *this;
	}

	vec3d operator+(const vec3d& lhs, const vec3d& rhs)					//сложение векторов
	{
		vec3d sum(lhs);
		sum.x += rhs.x;
		sum.y += lhs.y;
		sum.z += lhs.z;
		return sum;
	}

	vec3d operator-(const vec3d& lhs, const vec3d& rhs)					//вычитание векторов
	{
		vec3d sum(lhs);
		sum.x -= rhs.x;
		sum.y -= lhs.y;
		sum.z -= lhs.z;
		return sum;
	}

	vec3d operator*(const vec3d& lhs, const double rhs)					//умножение векторов
	{
		vec3d rez(lhs);
		rez.x *= rhs;
		rez.y *= rhs;
		rez.z *= rhs;
		return rez;
	}

	vec3d operator*(const double lhs, const vec3d rhs)					//умножение векторов
	{
		vec3d rez(rhs);
		rez.x *= lhs;
		rez.y *= lhs;
		rez.z *= lhs;
		return rez;
	}

	bool vec3d :: operator==(const vec3d& rhs) const					//проверка на равенство
	{
		bool a = true;
		!(abs(x - rhs.x) < eps) ? a = false : a = a;
		!(abs(y - rhs.y) < eps) ? a = false : a = a;
		!(abs(z - rhs.z) < eps) ? a = false : a = a;
		return a;
	}

	bool vec3d :: operator !=(const vec3d& rhs) const					//проверка на неравенство
	{
		return !operator==(rhs);
	}