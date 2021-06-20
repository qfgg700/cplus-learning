#include <iostream>
using namespace std;

int main()
{
	float f1 = 3.14;
	double d1 = 3.14;

	cout << f1 << endl;
	cout << d1 << endl;

	cout << sizeof(f1) << endl;
	cout << sizeof(d1) << endl;

	float f2 = 3e2;
	cout << f2 << endl;
	float f3 = 3e-2;
	cout << f3 << endl;

	system("pause");
	return 0;
}