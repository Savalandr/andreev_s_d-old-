#ifndef RATIONAL_H
#define RATIONAL_H
#include <iosfwd>
#include <iostream>
#include <sstream>

struct Rational
{
	int num = 0.0;	//���������
	int den = 1.0;	//�����������

	Rational() = default;	//������������� �����������

	Rational(const int numerator, const int denominator);	//�����������

	Rational& operator+=(const Rational& rhs);	//���������� ��������� ����������� �����

	Rational& operator+=(const int rhs);		//���������� ��������� ����������� �����

	Rational& operator-=(const Rational& rhs);	//���������� ��������� ��������� �����

	Rational& operator-=(const int rhs);		//���������� ��������� ��������� �����

	Rational& operator*=(const Rational& rhs);	//���������� ��������� ��������� ����� �� �����

	Rational& operator*=(const int rhs);		//���������� ��������� ��������� ����� �� �����

	Rational& operator/=(const Rational& rhs);	//���������� ��������� ������� ����� �� �����

	Rational& operator/=(const int rhs);		//���������� ��������� ������� ����� �� �����

	bool operator==(const Rational& rhs);		//���������� �������� �� ��������

	bool operator!=(const Rational& rhs);		//���������� �������� �� �����������

	std::ostream& writeTo(std::ostream& ostrm) const;	//���-�� ��� ��� ������
	std::istream& readFrom(std::istream& istrm);		//���-�� ��� ��� ������

	static const char leftBrace{ '(' };			//���-�� ��� �� ����
	static const char separator{ '/' };
	static const char rightBrace{ ')' };
};

inline std::ostream&operator<<(std::ostream& ostrm, const Rational& rhs);	//���-�� ��� ��� ������

inline std::istream&operator>>(std::istream& istrm, Rational& rhs);			//���-�� ��� ��� ������

bool testParse(const std::string& str);										//���-�� ��� ��� ������

#endif