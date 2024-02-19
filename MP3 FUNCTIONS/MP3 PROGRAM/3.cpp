#include<iostream>
using namespace std;
float Square(float s);
float Rectangle(float l, float w);
float Circle(float r);
main()
{
	float a,b,c,d,PS,PR,PC;
	cout << "Enter the side of square: ";
	cin >> a;
	cout << "Enter the length of rectangle: ";
	cin >> b;
	cout << "Enter the width of rectangle: ";
	cin >> c;
	cout << "Enter the radius of circle: ";
	cin >> d;
	PS=Square(a);
	PR=Rectangle(b,c);
	PC=Circle(d);
	cout << "The perimeter of square is " << PS<< endl;
	cout << "The perimeter of rectangle is " << PR << endl;
	cout << "The perimeter of circle is " << PC << endl;
	system("pause");
}

float Square(float s)
{
	float a,PS;
	PS=4*s;
	return PS;
}

float Rectangle(float l, float w)
{
	float a,b,PR;
	PR=2*l+2*w;
	return PR;
}

float Circle(float r)
{
	float a,PC;
	PC=2*3.141*r;
	return PC;
}
