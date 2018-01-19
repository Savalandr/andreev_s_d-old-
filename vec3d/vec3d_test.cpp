#include <iostream> 
#include <sstream> 
#include "Vec3d.h"
using namespace std;

int main()
{
	Vec3d N;
	N.x = 1;
	N.y = 2;
	N.z = 3;

	Vec3d N1;
	N1.x = 1;
	N1.y = 2;
	N1.z = 3;

	Vec3d N2;
	N2.x = 1;
	N2.y = 2;
	N2.z = 3;

	Vec3d N3;
	N3.x = 1;
	N3.y = 2;
	N3.z = 3;

	Vec3d N4;
	N4.x = 1;
	N4.y = 2;
	N4.z = 3;

	Vec3d N5;

	Vec3d M;
	M.x = 1;
	M.y = 2;
	M.z = 3;

	N1 += N;

	cout << N1.x << " " << N1.y << " " << N1.z << endl;

	N2 -= N;

	cout << N2.x << " " << N2.y << " " << N2.z << endl;

	N3 *= 5;

	cout << N3.x << " " << N3.y << " " << N3.z << endl;

	N4 = N + M;

	cout << N4.x << " " << N4.y << " " << N4.z << endl;

	cout << "TEXT_test" << endl;

	//дописать (придумать) проверку для проверок на равенство/неравенство

	int ThatsAll;
	cin >> ThatsAll;

	return 0;
}