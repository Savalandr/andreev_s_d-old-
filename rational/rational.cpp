#include <iostream> 
#include <sstream> 
#include "rational.h"


Rational::Rational(const int numerator, const int denominator)	//реализация конструктора
{
	num = numerator;
	den = denominator;
}

Rational& Rational::operator+=(const Rational& rhs)	//реализация оператора прибавления дроби (+ упрощение дроби)
{
	num = (num*rhs.den) + (rhs.num*den);
	den *= rhs.den;

	{
		if (num > den)
		{
			for (int i = 2; i <= den; i++)
			{
				if ((num % i == 0) && (den % i == 0))
				{
					num /= i;
					den /= i;
					i = 1;
				}
			}
		}
		else
		{
			for (int i = 2; i <= num; i++)
			{
				if ((num % i == 0) && (den % i == 0))
				{
					num /= i;
					den /= i;
					i = 1;
				}
			}
		}
	}

	return *this;
}

Rational& Rational::operator+=(const int rhs)	//реализация оператора прибавления числа (+ упрощение дроби)
{
	num += (den*rhs);

	{
		if (num > den)
		{
			for (int i = 2; i <= den; i++)
			{
				if ((num % i == 0) && (den % i == 0))
				{
					num /= i;
					den /= i;
					i = 1;
				}
			}
		}
		else
		{
			for (int i = 2; i <= num; i++)
			{
				if ((num % i == 0) && (den % i == 0))
				{
					num /= i;
					den /= i;
					i = 1;
				}
			}
		}
	}

	return *this;
}

Rational& Rational::operator-=(const Rational& rhs)	//реализация оператора вычитания дроби (+ упрощение дроби)
{
	num = (num*rhs.den) - (rhs.num*den);
	den *= rhs.den;

	{
		if (num > den)
		{
			for (int i = 2; i <= den; i++)
			{
				if ((num % i == 0) && (den % i == 0))
				{
					num /= i;
					den /= i;
					i = 1;
				}
			}
		}
		else
		{
			for (int i = 2; i <= num; i++)
			{
				if ((num % i == 0) && (den % i == 0))
				{
					num /= i;
					den /= i;
					i = 1;
				}
			}
		}
	}

	return *this;
}

Rational& Rational::operator-=(const int rhs)	//реализация оператора вычитания числа (+ упрощение дроби)
{
	num -= (den*rhs);

	{
		if (num > den)
		{
			for (int i = 2; i <= den; i++)
			{
				if ((num % i == 0) && (den % i == 0))
				{
					num /= i;
					den /= i;
					i = 1;
				}
			}
		}
		else
		{
			for (int i = 2; i <= num; i++)
			{
				if ((num % i == 0) && (den % i == 0))
				{
					num /= i;
					den /= i;
					i = 1;
				}
			}
		}
	}

	return *this;
}

Rational& Rational::operator*=(const Rational& rhs)	//реализация оператора умножения дроби на дробь (+ упрощение дроби)
{
	num *= rhs.num;
	den *= rhs.den;

	{
		if (num > den)
		{
			for (int i = 2; i <= den; i++)
			{
				if ((num % i == 0) && (den % i == 0))
				{
					num /= i;
					den /= i;
					i = 1;
				}
			}
		}
		else
		{
			for (int i = 2; i <= num; i++)
			{
				if ((num % i == 0) && (den % i == 0))
				{
					num /= i;
					den /= i;
					i = 1;
				}
			}
		}
	}

	return *this;
}

Rational& Rational::operator*=(const int rhs)	//реализация оператора умножения дроби на число (+ упрощение дроби)
{
	num *= rhs;

	{
		if (num > den)
		{
			for (int i = 2; i <= den; i++)
			{
				if ((num % i == 0) && (den % i == 0))
				{
					num /= i;
					den /= i;
					i = 1;
				}
			}
		}
		else
		{
			for (int i = 2; i <= num; i++)
			{
				if ((num % i == 0) && (den % i == 0))
				{
					num /= i;
					den /= i;
					i = 1;
				}
			}
		}
	}

	return *this;
}

Rational& Rational::operator/=(const Rational& rhs)	//реализация оператора деления дроби на дробь (+ упрощение дроби)
{
	num *= rhs.den;
	den *= rhs.num;

	{
		if (num > den)
		{
			for (int i = 2; i <= den; i++)
			{
				if ((num % i == 0) && (den % i == 0))
				{
					num /= i;
					den /= i;
					i = 1;
				}
			}
		}
		else
		{
			for (int i = 2; i <= num; i++)
			{
				if ((num % i == 0) && (den % i == 0))
				{
					num /= i;
					den /= i;
					i = 1;
				}
			}
		}
	}

	return *this;
}

Rational& Rational::operator/=(const int rhs)	//реализация оператора деления дроби на число (+ упрощение дроби)
{
	den *= rhs;

	{
		if (num > den)
		{
			for (int i = 2; i <= den; i++)
			{
				if ((num % i == 0) && (den % i == 0))
				{
					num /= i;
					den /= i;
					i = 1;
				}
			}
		}
		else
		{
			for (int i = 2; i <= num; i++)
			{
				if ((num % i == 0) && (den % i == 0))
				{
					num /= i;
					den /= i;
					i = 1;
				}
			}
		}
	}

	return *this;
}

bool Rational ::operator==(const Rational& rhs)		//реализация проверки на равенство (с упрощением исходной дроби)
{
	{
		if (num > den)
		{
			for (int i = 2; i <= den; i++)
			{
				if ((num % i == 0) && (den % i == 0))
				{
					num /= i;
					den /= i;
					i = 1;
				}
			}
		}
		else
		{
			for (int i = 2; i <= num; i++)
			{
				if ((num % i == 0) && (den % i == 0))
				{
					num /= i;
					den /= i;
					i = 1;
				}
			}
		}
	}


	int a = rhs.num;
	int b = rhs.den;

	{
		if (a > b)
		{
			for (int i = 2; i <= b; i++)
			{
				if ((a % i == 0) && (b % i == 0))
				{
					a /= i;
					b /= i;
					i = 1;
				}
			}
		}
		else
		{
			for (int i = 2; i <= a; i++)
			{
				if ((a % i == 0) && (b % i == 0))
				{
					a /= i;
					b /= i;
					i = 1;
				}
			}
		}
	}


	bool z;

	if ((num == a) && (den == b))
	{
		z = true;
	}
	else
	{
		z = false;
	}

	return z;
}

bool Rational ::operator!=(const Rational& rhs)		//реализация проверки на неравенство (с упрощением исходной дроби)
{
	return !operator==(rhs);
}

std::ostream& Rational::writeTo(std::ostream& ostrm) const		//что-то там про потоки
{
	if (den == 1)
	{
		ostrm << num;
	}
	else
	{
		ostrm << num << separator << den;
	}
	return ostrm;
}

std::istream& Rational::readFrom(std::istream& istrm)			//что-то там про потоки
{
	char leftBrace(0);
	int chislitel(0);
	char slesh(0);
	int znamenatel(0);
	char rightBrace(0);
	istrm >> leftBrace >> chislitel >> slesh >> znamenatel >> rightBrace;
	if (istrm.good())
	{
		if ((Rational::leftBrace == leftBrace) && (Rational::separator == slesh) && (Rational::rightBrace == rightBrace))
		{
			num = chislitel;
			den = znamenatel;
		}
		else
		{
			istrm.setstate(std::ios_base::failbit);
		}
	}
	return istrm;
}


inline std::ostream& operator<<(std::ostream& ostrm, const Rational& rhs)	//что-то там про потоки
{
	return rhs.writeTo(ostrm);
}

inline std::istream& operator>>(std::istream& istrm, Rational& rhs)			//что-то там про потоки
{
	return rhs.readFrom(istrm);
}

bool testParse(const std::string& str)										//что-то там про потоки
{
	using namespace std;
	istringstream istrm(str);
	Rational z;
	istrm >> z;
	if (istrm.good())
	{
		cout << "Read success: " << str << "->" << z << endl;
	}
	else
	{
		cout << "Read error : " << str << "->" << z << endl;
	}
	return istrm.good();
}