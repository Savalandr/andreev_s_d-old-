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

	Vec3d() = default;											 //������������� �����������

	Vec3d& operator=(const Vec3d& rhs) = default;                // ??? !!!

	bool operator ==(const Vec3d& rhs)const;					 //�������� �� ���������

	bool operator !=(const Vec3d& rhs)const;					 //�������� �� �����������

	Vec3d(const double xv, const double yv, const double zv);	 //�����������
	
	Vec3d(const Vec3d& v);										 //����������� ����������� (�������� ������ "v")
	
	~Vec3d() = default;											 //��������

	Vec3d& operator+=(const Vec3d& vec);                         //���������� �����������
	 
	Vec3d& operator-=(const Vec3d& vec);                         //���������� ���������

	Vec3d& operator*=(const double rhs);						 //���������� ���������	

};

	Vec3d operator+(const Vec3d& lhs, const Vec3d& rhs);		 //�������� ��������

	Vec3d operator-(const Vec3d& lhs, const Vec3d& rhs);		 //��������� ��������

	Vec3d operator*(const Vec3d& lhs, double rhs);				 //������������ ��������

	//Vec3d operator*(double lhs, const vec3d& rhs);

#endif