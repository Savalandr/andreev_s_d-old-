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

	vec3d() = default;											 //������������� �����������

	vec3d& operator=(const vec3d& rhs) = default;                // ??? !!!

	vec3d(const double xv, const double yv, const double zv);	 //�����������
	
	vec3d(const vec3d& v);										 //����������� ����������� (�������� ������ "v")
	
	~vec3d() = default;											 //��������

	vec3d& operator+=(const vec3d& vec);                         //���������� �����������
	 
	vec3d& operator-=(const vec3d& vec);                         //���������� ���������

	vec3d& operator*=(const double rhs);						 //���������� ���������	

};

	vec3d operator+(const vec3d& lhs, const vec3d& rhs);		 //�������� ��������

	vec3d operator-(const vec3d& lhs, const vec3d& rhs);		 //��������� ��������

	vec3d operator*(const vec3d& lhs, double rhs);				 //������������ ��������

	//vec3d operator*(double lhs, const vec3d& rhs);

#endif