#include<iostream>
using namespace std;
float retail(float wc, float mp);
main()
{
	int x,y; 
    float rp;
	cout << "Enter wholesale cost: ";
	cin >> x; 
	cout << "Enter mark up percentage: ";
	cin >> y;
	rp=retail(x,y);
	cout << "The retail price is: " << rp << endl;
	system("pause");
}

float retail(float wc,float mp)
{
	float x,y,rp;
	rp=wc+(wc*mp/100); 
	return rp;
}
