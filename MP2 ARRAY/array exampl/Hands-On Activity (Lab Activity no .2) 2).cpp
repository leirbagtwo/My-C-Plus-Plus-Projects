#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int ctr1,ctr2,temp;
	{
	for(ctr1=0;ctr1<=14;ctr1++)
	{
		cout<<"Enter any Number= ";
		cin>>a[ctr1];
	}
	for(ctr1=0;ctr1<=14;ctr1++)
	for(ctr2=ctr1+1;ctr2<=14;ctr2++)
	{
     if(a[ctr2]>a[ctr1])
     {
     temp=a[ctr1];
     a[ctr1]=a[ctr2];
     a[ctr2]=temp;
     }
     }
	cout<<"Highest to Lowest order: "<<endl;
	for(ctr1=0;ctr1<=14;ctr1++)
        cout<<a[ctr1]<<endl;
system("pause");
}
}

    
