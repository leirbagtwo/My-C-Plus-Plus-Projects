#include<iostream>
using namespace std;
int prime(int x, int y);
main()
{
int a, b=2,ctr;
cout << "Enter a number: ";
cin >> a;
prime(a,b); 
system("pause");
}
int prime(int x,int y)
{
int a,b;
for(y=2; y<x; y++)
	{
if(x%y==0 && x>1) 
{
cout << "NOT" << endl;
break;
}
else
{
cout << "PRIME" << endl;
break;}}}

