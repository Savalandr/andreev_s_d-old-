#include <iostream> 
#include <sstream> 
#include "complex.h"

int main()
{
	using namespace std;

	Complex z;
	z += Complex(8.0);
	testParse("{8.9,9}");
	testParse("{8.9, 9}");
	testParse("{8.9,9");
	return 0;

	cout << "test";
	return 0;
	
}

//
//
//
//