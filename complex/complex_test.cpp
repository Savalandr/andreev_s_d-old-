#include <iostream> 
#include <sstream> 
#include "complex.h"

int main()
{
	using namespace std;

	Complex a1{ 2,3 };
	Complex b1{ 3,4 };
	a1 += b1;

	cout << "'+='"<< "complex" << endl;
	cout << a1.re << "+" << a1.im <<"i"<< endl;
	cout << "----------" << endl;
	
	Complex a2{ 2,3 };
	double b2{3};
	a2 += b2;

	cout << "'+='" << "double" << endl;
	cout << a2.re << "+" << a2.im << "i" << endl;
	cout << "----------" << endl;

	Complex a3{ 2,3 };
	Complex b3{ 3,4 };
	a3 -= b3;

	cout << "'-='" << "complex" << endl;
	cout << a3.re << "+" << a3.im << "i" << endl;
	cout << "----------" << endl;
	
	Complex a4{ 2,3 };
	double b4{ 3 };
	a4 -= b4;

	cout << "'-='" << "double" << endl;
	cout << a4.re << "+" << a4.im << "i" << endl;
	cout << "----------" << endl;
	
	Complex a5{ 2,3 };
	Complex b5{ 3,4 };
	a5 *= b5;

	cout << "'*='" << "complex" << endl;
	cout << a5.re << "+" << a5.im << "i" << endl;
	cout << "----------" << endl;
	
	Complex a6{ 2,3 };
	double b6{ 3 };
	a6 *= b6;

	cout << "'*='" << "double" << endl;
	cout << a6.re << "+" << a6.im << "i" << endl;
	cout << "----------" << endl;
	
	
	cout << "test_vivoda"<<endl;

	int ThatsAll;
	cin >> ThatsAll;
	
	
	Complex z;				//какой-то тест
	z += Complex(8.0);
	testParse("{8.9,9}");
	testParse("{8.9, 9}");
	testParse("{8.9,9");
	return 0;

	cout << "test";
	return 0;
	
}