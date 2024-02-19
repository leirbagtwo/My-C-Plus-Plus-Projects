#include<iostream>
using namespace std;
int main()
{
	double m, d;
	cout << "Enter the Minutes: ";
	cin >> m;
	d=(m/60)*80;
	cout << "The distance is: " << d << " kilometers" << endl;
	system("pause");
}

