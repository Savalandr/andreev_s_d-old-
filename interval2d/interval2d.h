#ifndef INTERVAL2D_H
#define INTERVAL2D_H
#include <iosfwd>
#include <iostream>
#include <sstream>

struct Interval2d
{
	double x{ 0.0 };
	double y{ 0.0 };

	Interval2d() = default;

	Interval2d(const double xv, const double yv);

	Interval2d& operator+=(const double v); //���������� ��������� �� �����

	Interval2d& operator-=(const double v); //���������� ��������� �� �����

	~Interval2d() = default;
};

Interval2d operator+(const Interval2d rhs, const Interval2d lhs); //�������� ����������

Interval2d operator-(const Interval2d rhs, const Interval2d lhs); //�������� ����������

#endif