#ifndef COMPLEX_H
#define COMPLEX_H
#include <iosfwd>
#include <iostream>
#include <sstream>

struct Complex {
	 Complex() {}											//умолчательный конструктор

	 explicit Complex(const double real);					//что то там про ограниченния получаемых типов

	 Complex(const double real, const double imaginary);	//конструктор

	 bool operator==(const Complex& rhs);					//перегрузка проверки на равенство

	 bool operator!=(const Complex& rhs);					//перегрузка проверки на неравенство

	 Complex& operator+=(const Complex& rhs);				//перегрузка оператора прибавления коплексного числа

	 Complex& operator+=(const double rhs);					//перегрузка оператора прибавления числа

	 Complex& operator-=(const Complex& rhs);				//перегрузка оператора вычитания коплексного числа

	 Complex& operator-=(const double rhs);					//перегрузка оператора вычитания числа

	 Complex& operator*=(const Complex& rhs);				//перегрузка оператора умножения на комплексное число

	 Complex& operator*=(const double rhs);					//перегрузка оператора умножения на число

	 std::ostream& writeTo(std::ostream& ostrm) const;		//что-то там про потоки
	 std::istream& readFrom(std::istream& istrm);			//что-то там про потоки
	
	 double re{ 0.0 };										//действительная часть	
	 double im{ 0.0 };										//мнимая часть
	
	 static const char leftBrace{ '{' };					//что-то там из кода
	 static const char separator{ ',' };
	 static const char rightBrace{ '}' };
	
};

 Complex operator+(const Complex& lhs, const Complex& rhs);	//перегрузка оператора сложения
 Complex operator-(const Complex& lhs, const Complex& rhs);	//перегрузка оператора разности
 
 inline std::ostream&operator<<(std::ostream& ostrm, const Complex& rhs);	//что-то там про потоки

 inline std::istream&operator>>(std::istream& istrm, Complex& rhs);			//что-то там про потоки

 bool testParse(const std::string& str);									//что-то там про потоки

#endif
 