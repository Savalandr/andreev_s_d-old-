#include <iostream> 
#include <sstream> 
#include "rational.h"
using namespace std;

int main()
{
	//---—”ÃÃ€--------------------------------------------------------------------------

	Rational a1(20, 4);
	Rational b1(4, 2);
	a1 += b1;

	cout << "'+='" << "drob" << endl;
	cout << a1.num << "/" << a1.den << endl;
	cout << "----------" << endl;

	Rational a11(20, 4);
	int b11(4);
	a11 += b11;

	cout << "'+='" << "chislo" << endl;
	cout << a11.num << "/" << a11.den << endl;
	cout << "----------" << endl;

	//---–¿«ÕŒ—“»-----------------------------------------------------------------------

	Rational a2(1, 3);
	Rational b2(1, 4);
	a2 -= b2;

	cout << "'-='" << "drob" << endl;
	cout << a2.num << "/" << a2.den << endl;
	cout << "----------" << endl;

	Rational a22(1, 3);
	int b22(4);
	a22 -= b22;

	cout << "'-='" << "chislo" << endl;
	cout << a22.num << "/" << a22.den << endl;
	cout << "----------" << endl;

	//---œ–Œ»«¬≈ƒ≈Õ»ﬂ-------------------------------------------------------------------

	Rational a3(1, 3);
	Rational b3(1, 4);
	a3 *= b3;

	cout << "'*='" << "drob" << endl;
	cout << a3.num << "/" << a3.den << endl;
	cout << "----------" << endl;

	Rational a33(1, 3);
	int b33(2);
	a33 *= b33;

	cout << "'*='" << "chislo" << endl;
	cout << a33.num << "/" << a33.den << endl;
	cout << "----------" << endl;

	//---◊¿—“Õ€≈------------------------------------------------------------------------

	Rational a4(1, 3);
	Rational b4(1, 4);
	a4 /= b4;

	cout << "'/='" << "drob" << endl;
	cout << a4.num << "/" << a4.den << endl;
	cout << "----------" << endl;

	Rational a44(1, 3);
	int b44(2);
	a44 /= b44;

	cout << "'/='" << "chislo" << endl;
	cout << a44.num << "/" << a44.den << endl;
	cout << "----------" << endl;

	//---œ–Œ¬≈– »-----------------------------------------------------------------------

	Rational a5(1, 3);
	Rational b5(1, 2);

	bool t1;
	t1 = a5 == b5;

	cout << "'=='" << endl;
	cout << t1 << endl;

	cout << "----------" << endl;

	bool t2;
	t2 = a5 != b5;

	cout << "'!='" << endl;
	cout << t2 << endl;


	int ThatsAll;
	cin >> ThatsAll;

	return 0;
}