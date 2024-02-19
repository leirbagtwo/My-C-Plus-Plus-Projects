#include<iostream>
#include<stack>
using namespace std;
intmain(){
	stack <int> A;
	int x, n, ctr;
	cout<<"Enter the size of the stack: ";
	cin>>x;
	for (ctr=1; ctr<=x; ctr++)
	{
		cout<<"Enter any element: ";
		cin>>n;
		A.push(n);
	}
	cout<<"Stack size: "<<A.size() <<endl;
	cout<<"Contents of stack: "<<endl;
	while(!A.empty()){
		cout<<A.top()<<"\t";
		A.pop();
	}
cout<<endl;
cout<<system("pause");
}

