#include<iostream>
using namespace std;
main()
{
	int a1,a2,a3,sum;
	cout << "Enter 1st angle: ";
	cin >> a1;
	cout << "Enter 2nd angle: ";
	cin >> a2;
	cout << "Enter 3rd angle: ";
	cin >> a3;
	sum=a1+a2+a3;
	if(sum!=180)
	cout << "Angle must be a total of 180 degrees!!!" << endl;
	else if(a1==90 || a2==90 || a3==90)
	cout << "The triangle is classified as a RIGHT TRIANGLE" << endl;
	else if(a1==a2 && a1==a3 && a2==a3)
	cout << "The triangle is classified as a Equilateral/Equiangular triangle" << endl;
	else if(a1==a2 || a1==a3 || a2==a3)
	cout << "The triangle is classified as a isosceles triangle" << endl;
	else
	cout << "The triangle is classified as a scalene triangle" << endl;
	system("pause");
}

