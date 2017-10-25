#include <iostream> 
#include <sstream> 
#include "Rational.h"
using namespace std;

int main()
{
	Rational a(1,3);
	Rational b(1,4);
	a += b;

	cout <<a.num <<"/"<< a.den << endl;

	int ThatsAll;
	cin >> ThatsAll;
	
	return 0;
	
	
}