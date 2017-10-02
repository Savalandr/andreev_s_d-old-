#include <iostream> 
#include <sstream> 
#include "complex.h"

inline std::ostream& operator<<(std::ostream& ostrm, const Complex& rhs) //штука (верно)
 {
	return rhs.writeTo(ostrm);
 }
 
 inline std::istream& operator>>(std::istream& istrm, Complex& rhs)		//штука (верно)
 {
	 return rhs.readFrom(istrm);
 }

 bool testParse(const std::string& str)									//дикая штука (верно)
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

 Complex::Complex(const double real)				//штука (верно)
	 : Complex(real, 0.0)
 {
 }

 Complex::Complex(const double real, const double imaginary)		//штука (верно)
	 : re(real)
	 , im(imaginary)
 {
 }

 //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

 Complex& Complex:: operator+=(const double rhs)    //верно
 {
	 return operator+=(Complex(rhs));
 }

 Complex& Complex:: operator-=(const double rhs)	//верно
 {
	 return operator-=(Complex(rhs));
 }

 Complex& Complex::operator+=(const Complex& rhs)	//верно
 {
	 re += rhs.re;
	 im += rhs.im;
	 return *this;
 }

 Complex& Complex::operator-=(const Complex& rhs)	//верно
 {
	 re -= rhs.re;
	 im -= rhs.im;
	 return *this;
 }

 Complex& Complex::operator*=(const Complex& rhs)	//!!!!
 {
	 re *= rhs.re;
	 im *= rhs.im;
	 return *this;
	 /*Complex mult; 
	 mult.re = re*rhs.re - im*rhs.im; 
	 mult.im = re*rhs.im + im*rhs.re; 
	 *this = mult; 
	 return *this; */
 }

 Complex& Complex::operator*=(const double rhs)		//верно
 {
	 re *= rhs;
	 im *= rhs;
	 return *this;
 }

Complex operator+(const Complex& lhs, const Complex& rhs)	//верно
{
	Complex sum(lhs);
	sum += rhs;
	return sum;
}

Complex operator-(const Complex& lhs, const Complex& rhs)	//верно
{
	return Complex(lhs.re - rhs.re, lhs.im - rhs.im);
}

std::ostream& Complex::writeTo(std::ostream& ostrm) const	 //штука (верно)
{
	ostrm << leftBrace << re << separator << im << rightBrace;
	return ostrm;
}

std::istream& Complex::readFrom(std::istream& istrm)         //штука (верно)
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