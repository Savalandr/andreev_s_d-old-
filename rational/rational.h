#ifndef RATIONAL_H
#define RATIONAL_H
#include <iosfwd>
#include <iostream>
#include <sstream>

struct Rational
{
	int num = 0.0;	//числитель
	int den = 1.0;	//знаменатель

	Rational() = default;	//умолчательный конструктор

	Rational(const int numerator, const int denominator);	//конструктор

	Rational& operator+=(const Rational& rhs);	//перегрузка оператора прибавления дроби

	Rational& operator+=(const int rhs);		//перегрузка оператора прибавления числа

	Rational& operator-=(const Rational& rhs);	//перегрузка оператора вычитания дроби

	Rational& operator-=(const int rhs);		//перегрузка оператора вычитания числа

	Rational& operator*=(const Rational& rhs);	//перегрузка оператора умножения дроби на дробь

	Rational& operator*=(const int rhs);		//перегрузка оператора умножения дроби на число

	Rational& operator/=(const Rational& rhs);	//перегрузка оператора деления дроби на дробь

	Rational& operator/=(const int rhs);		//перегрузка оператора деления дроби на число

	bool operator==(const Rational& rhs);		//перегрузка проверки на равенсто

	bool operator!=(const Rational& rhs);		//перегрузка проверки на неравенство

	std::ostream& writeTo(std::ostream& ostrm) const;	//что-то там про потоки
	std::istream& readFrom(std::istream& istrm);		//что-то там про потоки

	static const char leftBrace{ '(' };			//что-то там из кода
	static const char separator{ '/' };
	static const char rightBrace{ ')' };
};

inline std::ostream&operator<<(std::ostream& ostrm, const Rational& rhs);	//что-то там про потоки

inline std::istream&operator>>(std::istream& istrm, Rational& rhs);			//что-то там про потоки

bool testParse(const std::string& str);										//что-то там про потоки

#endif