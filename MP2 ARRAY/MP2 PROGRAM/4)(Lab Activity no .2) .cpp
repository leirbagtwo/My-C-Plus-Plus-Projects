#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int ctr,odd = 0, even = 0;
	for(ctr=1;ctr<=10;ctr++)
	{
		cout<<"Enter any Number = ";
		cin>>a[ctr];
	}
	for(ctr=1;ctr<=10;ctr++)
	if(a[ctr] % 2 == 1)
        odd = odd + 1;
	for(ctr=1;ctr<=10;ctr++)
	if(a[ctr] % 2 == 0)
        even = even + 1;    
 	cout<<"LIST OF ODD = "<<odd<<endl;   
    cout<<"LIST OF EVEN = "<<even<<endl;       
    system("pause");
}
    



    
