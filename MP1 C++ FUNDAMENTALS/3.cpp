#include<iostream>
using namespace std;
main()
{
	int x,y,z;
	cout << "A: ";
	cin >> x;
	cout << "B: ";
	cin >> y;
	z=x;
	x=y;
	y=z;
	cout << "a: " << x << endl;
	cout << "b: " << y << endl;
	system("pause");
}

