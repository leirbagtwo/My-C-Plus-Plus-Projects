#include<iostream>
#include<cctype>
using namespace std;
main()
{
    int ctr1,ctr2,num,repeat;
    char choice,ans;
    float x,y,z,small,sum,diff,quot,prod;
do
{ system("cls");
  cout<<"MAIN MENU"<<endl;
  cout<<"[1] BASIC INPUT / OUTPUT"<<endl;
  cout<<"[2] SELECTION CONTROL STRUCTURE"<<endl;
  cout<<"[3] REPETITION CONTROL STRUCTURE"<<endl;
  cout<<"[4] EXIT"<<endl;
  cout<<"Enter Choice:> ";
  cin>>choice;

  if (choice=='1')
  {
    do
    { system ("cls");
      cout<<"BASIC INPUT / OUTPUT"<<endl;
      cout<<"Enter the first Number: ";
      cin>>x;
      cout<<"Enter the second Number: ";
      cin>>y;
      sum=x+y;
      diff=x-y;
      prod=x*y;
      quot=x/y;
      cout<<"SUM = "<<sum<<endl;
      cout<<"DIFFERENCE = "<<diff<<endl;
      cout<<"PRODUCT = "<<prod<<endl;
      cout<<"QUOTIENT = "<<quot<<endl;
      cout<<"Do you want to do it again [Y/N]: ";
      cin>>ans;
      ans=toupper(ans);
      system("cls");
      } while(ans=='Y');
      repeat=1;
    }
    
  else if (choice=='2')
  {
    do
    { system ("cls");
      cout<<"SELECTION CONTROL STRUCTURE"<<endl;
      cout<<"Enter first Number: ";
      cin>>x;
      cout<<"Enter second Number: ";
      cin>>y;
      cout<<"Enter third Number: ";
      cin>>z;
      if((y>x)&&(z>x))
        small=x;
      else if((x>y)&&(z>y))
        small=y;
      else 
        small=z;
      cout<<"SMALLEST = "<<small<<endl;
      cout<<"Do you want to do it again [Y/N]: ";
      cin>>ans;
      ans=toupper(ans);
      system("cls");
      } while(ans=='Y');
      repeat=1;
    }
   
    else if (choice=='3')
  {
    do
    { system ("cls");
      cout<<"REPETITION CONTROL STRUCTURE"<<endl;
      cout<<"Enter a Number: ";
      cin>>num;
      for(ctr1=num;ctr1>=1;ctr1--)
      {
         for(ctr2=ctr1;ctr2>=1;ctr2--)
           cout<<" "<<ctr2;
         cout<<endl;
      }
      cout<<"Do you want to do it again [Y/N]: ";
      cin>>ans;
      ans=toupper(ans);
      system("cls");
      } while(ans=='Y');
      repeat=1;
    } 
    
     else if (choice=='4')
   {
      cout<<"Do you really want to exit [Y/N]: ";
      cin>>ans;
      ans=toupper(ans);
      system("cls");
      if (ans=='Y')
      { system ("cls");
        cout<<"Program is now Exiting!"<<endl;
        cout<<"Good Bye!"<<endl;
        system("pause");
        return 0;
      }
      else
        repeat=1;
    }
} while (repeat==1);
return 0;
}
