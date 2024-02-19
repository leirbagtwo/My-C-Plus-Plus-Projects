#include<iostream>
using namespace std;
main()
{
	int ctr=1,n,sum=0;
	float ave;
	while(ctr<=20)
	{
		cout << "Enter an integer: ";
		cin >> n;
		sum=sum+n;
		ctr++;
	}
	ave=sum/20;
	cout << "The sum is " << sum << endl;
	cout << "the average is " << ave << endl;
	system("pause");
}

