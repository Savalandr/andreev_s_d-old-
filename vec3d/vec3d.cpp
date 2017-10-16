#include <iostream> 
#include <sstream> 
#include "Vec3d.h"


	Vec3d::Vec3d(const double xv, const double yv, const double zv)		//реализация конструктора
	{
		x = xv;
		y = yv;
		z = zv;
	}

	Vec3d::Vec3d(const Vec3d& v)									 	//конструктор копирования (получает вектор "v")

		: x(v.x)
		, y(v.y)
		, z(v.z)
	{}	
	
	Vec3d& Vec3d::operator+=(const Vec3d& vec)                          //перегрузка прибавления
	{
		x += vec.x;
		y += vec.y;
		z += vec.z;
		return *this;
	}

	Vec3d& Vec3d::operator-=(const Vec3d& vec)                          //перегрузка убавления
	{
		x -= vec.x;
		y -= vec.y;
		z -= vec.z;
		return *this;
	}
	
	Vec3d& Vec3d::operator*=(const double rhs)                          //перегрузка умножения
	{
		x *= rhs;
		y *= rhs;
		z *= rhs;
		return *this;
	}

	Vec3d operator+(const Vec3d& lhs, const Vec3d& rhs)					//сложение векторов
	{
		Vec3d sum(lhs);
		sum.x += rhs.x;
		sum.y += lhs.y;
		sum.z += lhs.z;
		return sum;
	}

	Vec3d operator-(const Vec3d& lhs, const Vec3d& rhs)					//вычитание векторов
	{
		Vec3d sum(lhs);
		sum.x -= rhs.x;
		sum.y -= lhs.y;
		sum.z -= lhs.z;
		return sum;
	}

	Vec3d operator*(const Vec3d& lhs, const double rhs)					//умножение векторов
	{
		Vec3d rez(lhs);
		rez.x *= rhs;
		rez.y *= rhs;
		rez.z *= rhs;
		return rez;
	}

	Vec3d operator*(const double lhs, const Vec3d rhs)					//умножение векторов
	{
		Vec3d rez(rhs);
		rez.x *= lhs;
		rez.y *= lhs;
		rez.z *= lhs;
		return rez;
	}

	bool Vec3d :: operator==(const Vec3d& rhs) const					//проверка на равенство
	{
		bool a = true;
		!(abs(x - rhs.x) < eps) ? a = false : a = a;
		!(abs(y - rhs.y) < eps) ? a = false : a = a;
		!(abs(z - rhs.z) < eps) ? a = false : a = a;
		return a;
	}

	bool Vec3d :: operator !=(const Vec3d& rhs) const					//проверка на неравенство
	{
		return !operator==(rhs);
	}