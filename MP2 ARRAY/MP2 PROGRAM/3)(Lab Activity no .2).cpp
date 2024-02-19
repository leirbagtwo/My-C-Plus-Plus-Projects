#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int ctr;
	for(ctr=0;ctr<=9;ctr++)
	{
		cout<<"Enter any Number = ";
		cin>>a[ctr];
	}
	cout<<"LIST OF NEGATIVE = "<<endl;
	for(ctr=0;ctr<=9;ctr++)
        if(a[ctr] < 0 )
        cout<<a[ctr]<<endl;
system("pause");
}
    



    
