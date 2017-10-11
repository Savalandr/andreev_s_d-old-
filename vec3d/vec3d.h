#ifndef VEC3D_H
#define VEC3D_H
#include <iosfwd>
#include <iostream>
#include <sstream>

struct vec3d
{
	double x = 0.0;
	double y = 0.0;
	double z = 0.0;

	vec3d() = default;											 //умолчательный конструктор

	vec3d& operator=(const vec3d& rhs) = default;                // ??? !!!

	vec3d(const double xv, const double yv, const double zv);	 //конструктор
	
	vec3d(const vec3d& v);										 //конструктор копирования (получает вектор "v")
	
	~vec3d() = default;											 //удалятор

	vec3d& operator+=(const vec3d& vec);                         //перегрузка прибавления
	 
	vec3d& operator-=(const vec3d& vec);                         //перегрузка убавления

	vec3d& operator*=(const double rhs);						 //перегрузка умножения	

};

	vec3d operator+(const vec3d& lhs, const vec3d& rhs);		 //сложение векторов

	vec3d operator-(const vec3d& lhs, const vec3d& rhs);		 //вычитание векторов

	vec3d operator*(const vec3d& lhs, double rhs);				 //перемножение векторов

	//vec3d operator*(double lhs, const vec3d& rhs);

#endif