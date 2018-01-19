#include <iostream> 
#include <sstream> 
#include "interval2d.h"
using namespace std;

int main()
{
	Interval2d a(3, 4);
	Interval2d b(2, 3);
	Interval2d a1(3, 4);
	Interval2d b1(2, 3);

	a1 += 5;
	b1 -= 2;

	Interval2d s;
	Interval2d z;

	s = a + b;
	z = a - b;

	cout << a1.x << "_" << a1.y << endl;
	cout << b1.x << "_" << b1.y << endl;
	cout << s.x << "_" << s.y << endl;
	cout << z.x << "_" << z.y << endl;

	int ThatsAll;
	cin >> ThatsAll;

	return 0;
}