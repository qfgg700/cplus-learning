#include<iostream>
#include<string>
using namespace std;

int main()
{
	//int
	int a = 0;
	cout << "input a=";
	cin >> a;
	cout << "a=" << a << endl;

	//float
	float b = 0;
	cout << "input b=";
	cin >> b;
	cout << "b=" << b << endl;

	//char
	char c = 0;
	cout << "input c ";
	cin >> c;
	cout << c << endl;

	//string
	string d;
	cout << "input d ";
	cin >> d;
	cout << d << endl;

	//bool非零都是真
	bool flag = false;
	cin >> flag;
	cout << flag << endl;

	system("pause");
	return 0;
}