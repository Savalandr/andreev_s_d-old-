#ifndef RATIONAL_H
#define RATIONAL_H
#include <iosfwd>
#include <iostream>
#include <sstream>

struct Rational
{
	double num = 0.0;
	double den = 1.0;
	
	Rational() = default;

	Rational(const double numerator, const double denominator);

	Rational& operator+=(const Rational& rhs);



};








#endif