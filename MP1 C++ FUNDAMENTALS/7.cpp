#include<iostream>
using namespace std;
main()
{
	int age, er;
	cout << "Enter your age: ";
	cin >> age;
	if(age<18)
	cout << "YOU ARE UNDERAGE" << endl;
	else if(age==18)
	cout << "STUDENT LICENSE POSSIBLE" << endl;
	else
	cout << "PROFESSIONAL LICENSE POSSIBLE" << endl;
	if(age>=18)
	{
		cout << "Enter exam result 1[positve] 0[negative]: ";
		cin >> er;
		switch(er)
		{
			case 1:
				cout << "HOLD LICENSE" << endl; break;
			case 0:
				cout << "RELEASE LICENSE" << endl; break;
			default:
				cout << "ERROR!" << endl; break;
		}
	}
system("pause");
         }

