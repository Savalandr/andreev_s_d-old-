#ifndef VEC3D_H
#define VEC3D_H
#include <iosfwd>
#include <iostream>
#include <sstream>

struct Vec3d
{
	double x = 0.0;
	double y = 0.0;
	double z = 0.0;
	double eps = 0.00001;

	Vec3d() = default;											 //умолчательный конструктор

	Vec3d& operator=(const Vec3d& rhs) = default;                // ??? !!!

	bool operator ==(const Vec3d& rhs)const;					 //проверка на равенство

	bool operator !=(const Vec3d& rhs)const;					 //проверка на неравенство

	Vec3d(const double xv, const double yv, const double zv);	 //конструктор
	
	Vec3d(const Vec3d& v);										 //конструктор копирования (получает вектор "v")
	
	~Vec3d() = default;											 //удалятор

	Vec3d& operator+=(const Vec3d& vec);                         //перегрузка прибавления
	 
	Vec3d& operator-=(const Vec3d& vec);                         //перегрузка убавления

	Vec3d& operator*=(const double rhs);						 //перегрузка умножения	

};

	Vec3d operator+(const Vec3d& lhs, const Vec3d& rhs);		 //сложение векторов

	Vec3d operator-(const Vec3d& lhs, const Vec3d& rhs);		 //вычитание векторов

	Vec3d operator*(const Vec3d& lhs, double rhs);				 //перемножение векторов

	//Vec3d operator*(double lhs, const vec3d& rhs);

#endif