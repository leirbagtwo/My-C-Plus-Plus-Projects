#include<iostream>
using namespace std;
int main()
{
	int d,s; //d for drink and s for sandwich
	float bill;
	cout<<"Enter the number of drinks: ";
	cin>> d;
	cout<<"Enter the number of sandwich: ";
	cin>> s;
	bill=d*10.50+s*60.50;
	cout<<"Your bill is: "<<bill;
    cout<<" "<<endl;
    system("pause");
}
