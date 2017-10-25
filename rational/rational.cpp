#include <iostream> 
#include <sstream> 
#include "Rational.h"


Rational::Rational(const double numerator, const double denominator)
{
	num = numerator;
	den = denominator;
}

Rational& Rational::operator+=(const Rational& rhs)
{
	num = (num*rhs.den) + (rhs.num*den);
	den *= rhs.den;;
	return *this;
	
}