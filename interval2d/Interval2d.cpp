#include <iostream> 
#include <sstream> 
#include "Interval2d.h"

Interval2d::Interval2d(const double xv, const double yv)
{
	x = xv;
	y = yv;
}

Interval2d& Interval2d::operator+=(const double v)
{
	y += v;
	return *this;
}

Interval2d& Interval2d::operator-=(const double v)
{
	y -= v;
	return *this;
}

Interval2d operator+(const Interval2d rhs, const Interval2d lhs)
{
	Interval2d sum;
	sum.x = rhs.x;
	sum.y = rhs.y + (lhs.y - lhs.x);
	return sum;
}

Interval2d operator-(const Interval2d rhs, const Interval2d lhs)
{
	Interval2d raz;
	raz.x = rhs.x;
	raz.y = rhs.y - (lhs.y - lhs.x);
	return raz;
}