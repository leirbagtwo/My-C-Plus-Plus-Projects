#include<iostream>
using namespace std;
main()
{
	int n,rv=0;
	cout << "Enter a number to reverse: ";
	cin >> n;
	while(n!=0)
	{
		rv=rv*10;
		rv=rv+n%10;
		n=n/10;
	}
	cout << "reverse: " << rv << endl;
	system("pause");
}


