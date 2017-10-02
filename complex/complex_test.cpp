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
}

//«дравствуйте, ƒмитрий ¬алерьевич
//если вы это читаете, напишите мне в письме ответ на загадку:
// то на Єлке, на суку
//—чет ведет: ку-ку, ку-ку?