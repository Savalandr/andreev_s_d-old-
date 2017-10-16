#include <iostream> 
#include <sstream> 
#include "Vec3dT.h"
using namespace std;

int main()
{
 
	Vec3dT<double> a;
	Vec3dT<double> a1;
	Vec3dT<double> a2;
	Vec3dT<double> a3;
	Vec3dT<double> b(6, 4, 3);
	Vec3dT<double> c(2, 1, 0);

	cout << a.x << " " << a.y << " " << a.z << endl;

	cout << b.x << " " << b.y << " " << b.z << endl;

	cout << c.x << " " << c.y << " " << c.z << endl;

	a1 += b;
	cout << a1.x << " " << a1.y << " " << a1.z << endl;

	a2 -= c;
	cout << a2.x << " " << a2.y << " " << a2.z << endl;

	a3 = b * 2;
	cout << a3.x << " " << a3.y << " " << a3.z << endl;

	cout << "TEXT_test" << endl;

	//дописать (придумать) проверку для проверок на равенство/неравенство

	int ThatsAll;
	cin >> ThatsAll;

	return 0;
}