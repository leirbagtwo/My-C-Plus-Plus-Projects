#include<iostream>
#include<iomanip>
using namespace std;
float showMenu();
float showKilometers (float a);
float showInches (float a);
float showFeet (float a);
int main()
{
float x;
int choice;
cout<< "Enter a distance in meters: ";
cin>> x; 
if (x < 0)
{
cout<< "Invalid!" <<endl;
system("pause");
}
do
{
showMenu();
cout<< "\nEnter Choice: ";
cin>> choice;
if (choice==1)
{
showKilometers(x);
}
else if (choice==2)
{
showInches(x);
}
else if (choice==3)
{
showFeet(x);
}
else if (choice==4)
{
cout<< "Bye!" <<endl;
}
else
{
cout<< "Error!" <<endl;
}
}while(choice!=4);
system("pause");
}
float showMenu()
{
cout<< "\n1. Convert to kilometers" <<endl;
cout<< "2. Convert to inches" <<endl;
cout<< "3. Convert to feet" <<endl;
cout<< "4. Quit the program" <<endl;
}
float showKilometers(float a)
{
cout<< a << " meters is now converted to " << a*0.001 << " kilometers";
}
float showInches(float a)
{
cout<< a << " meters is now converted to " << a*39.37 << " inches";
}
float showFeet(float a)
{
cout<< a << " meters is now converted to " << a*3.281 << " feet";
}
