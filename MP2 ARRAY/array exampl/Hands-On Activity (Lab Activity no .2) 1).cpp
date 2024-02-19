#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int ctr;
	for(ctr=0;ctr<=19;ctr++)
	{
		cout<<"Enter any Number= ";
		cin>>a[ctr];
	}
	cout<<"LIST OF ODD NUMBER= "<<endl;
	for(ctr=1;ctr<=19;ctr++)
        if(a[ctr] % 2 != 0 )
        cout<<a[ctr]<<endl;
system("pause");
}
    

