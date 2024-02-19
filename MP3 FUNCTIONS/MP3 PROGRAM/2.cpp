#include<iostream>
using namespace std;
float Average(float x,float y);
float SumSQ(float x, float y);
float SumQS(float x, float y);
main()
{
	int a,b;
	float A,SSQ,SQS;
	cout << "Enter the 1st number: ";
	cin >> a;
	cout << "Enter the 2nd number: ";
	cin >> b; 
	A=Average(a,b);
	SSQ=SumSQ(a,b);
	SQS=SumQS(a,b);
	cout << "\nthe sum of squares is " << SSQ << endl;
	cout << "the average is " << A << endl;
	cout << "the square of sum is " << SQS << endl;
	system("pause");
}

float Average(float x, float y)
{
	float a,b,A;
	A=(x+y)/2;
	return A;	
}

float SumSQ(float x, float y)
{
	float a,b,SSQ;
	SSQ=x*x+y*y;
	return SSQ;	
}
float SumQS(float x, float y)
{
	float a,b,sq,SQS;
    SQS=(x+y)*(x+y);
	return SQS;	
}
