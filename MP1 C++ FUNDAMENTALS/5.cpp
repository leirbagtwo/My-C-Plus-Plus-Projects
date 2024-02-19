#include<iostream>
using namespace std;
main()
{
	int num,ones,tens;
	cout << "Enter number 1-100: ";
	cin >> num;
	ones=num%10;
	tens=num/10;
	if(num<1 || num>100)
	cout << "invalid number" << endl;
	else if(num==100)
	cout << "One Hundred" << endl;
	else if(num==10)
	cout << "Ten" << endl;
	else if(num==11)
	cout << "Eleven" << endl;
	else if(num==12)
	cout << "Twelve" << endl;
	else if(num==13)
	cout << "Thirteen" << endl;
	else if(num==14)
	cout << "Fourteen" << endl;
	else if(num==15)
	cout << "Fifteen" << endl;
	else if(num==16)
	cout << "Sixteen" << endl;
	else if(num==17)
	cout << "Seventeen" << endl;
	else if(num==18)
	cout << "Eighteen" << endl; 
	else if(num==19)
	cout << "Nineteen" << endl;
	else
	{
		switch(tens)
		{
			case 2: cout << "Twenty "; break;
			case 3: cout << "Thirty "; break;
			case 4: cout << "Forty "; break;
			case 5: cout << "Fifty "; break;
			case 6: cout << "Sixty "; break;
			case 7: cout << "Seventy "; break;
			case 8: cout << "Eighty "; break;
			case 9: cout << "Ninety "; break;
		}
		switch(ones)
		{
			case 0: cout << " " << endl; break; 
			case 1: cout << "one " << endl; break;
			case 2: cout << "Two " << endl; break;
			case 3: cout << "Three " << endl; break;
			case 4: cout << "Four " << endl; break;
			case 5: cout << "Five " << endl; break; 
			case 6: cout << "Six " << endl; break; 
			case 7: cout << "Seven " << endl; break;
			case 8: cout << "Eight " << endl; break;
			case 9: cout << "Nine " << endl; break;
		}
	}
	system("pause");
} 

