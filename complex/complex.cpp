#include <iostream> 
#include <sstream> 
#include "complex.h"


Complex::Complex(const double real)								//конструктор (странно написан)
	: Complex(real, 0.0)
{
}

Complex::Complex(const double real, const double imaginary)		//конструктор (странно написан)
	: re(real)
	, im(imaginary)
{
}

Complex& Complex::operator+=(const double rhs)				//реализация оператора прибавления числа (через ссылку на другую реализацию)
{
	return operator+=(Complex(rhs));
}

Complex& Complex:: operator-=(const double rhs)			//реализация оператора вычитаня числа (через ссылку на другую реализацию)
{
	return operator-=(Complex(rhs));
}

Complex& Complex::operator+=(const Complex& rhs)			//реализация оператора прибавления комплексного числа
{
	re += rhs.re;
	im += rhs.im;
	return *this;
}

Complex& Complex::operator-=(const Complex& rhs)			//реализация оператора вычитания комплексного числа
{
	re -= rhs.re;
	im -= rhs.im;
	return *this;
}

Complex& Complex::operator*=(const Complex& rhs)			//реализация оператора умножения на комплексное число
{
	Complex mult;
	mult.re = re * rhs.re - im * rhs.im;
	mult.im = re * rhs.im + im * rhs.re;
	*this = mult;
	return *this;
}

Complex& Complex::operator*=(const double rhs)				//реализация оператора умножения на число
{
	re *= rhs;
	im *= rhs;
	return *this;
}

Complex operator+(const Complex& lhs, const Complex& rhs)	//реализация оператора сложения комплексных чисел
{
	Complex sum(lhs);
	sum += rhs;
	return sum;
}

Complex operator-(const Complex& lhs, const Complex& rhs)	//реализация оператора разности комплексных чисел
{
	return Complex(lhs.re - rhs.re, lhs.im - rhs.im);
}

bool Complex ::operator==(const Complex& rhs)				//реализация проверки на равенство
{
	return (re == rhs.re) && (im == rhs.im);
}

bool Complex ::operator!=(const Complex& rhs)				//реализация проверки на неравенство
{
	return !operator==(rhs);
}


std::ostream& Complex::writeTo(std::ostream& ostrm) const				//что-то там про потоки
{
	ostrm << leftBrace << re << separator << im << rightBrace;
	return ostrm;
}

std::istream& Complex::readFrom(std::istream& istrm)					//что-то там про потоки
{
	char leftBrace(0);
	double real(0.0);
	char comma(0);
	double imaganary(0.0);
	char rightBrace(0);
	istrm >> leftBrace >> real >> comma >> imaganary >> rightBrace;
	if (istrm.good()) {
		if ((Complex::leftBrace == leftBrace) && (Complex::separator == comma)
			&& (Complex::rightBrace == rightBrace)) {
			re = real;
			im = imaganary;
		}
		else {
			istrm.setstate(std::ios_base::failbit);
		}
	}
	return istrm;
}

inline std::ostream& operator<<(std::ostream& ostrm, const Complex& rhs) //что-то там про потоки
{
	return rhs.writeTo(ostrm);
}

inline std::istream& operator>>(std::istream& istrm, Complex& rhs)		//что-то там про потоки
{
	return rhs.readFrom(istrm);
}

bool testParse(const std::string& str)									//что-то там про потоки
{
	using namespace std;
	istringstream istrm(str);
	Complex z;
	istrm >> z;
	if (istrm.good())
	{
		cout << "Read success: " << str << " -> " << z << endl;
	}
	else
	{
		cout << "Read error : " << str << " -> " << z << endl;
	}
	return istrm.good();
}