#include<iostream>
using namespace std;
int main()
{
 int A[5][5];
 int x,y,search=0,ctr=0;
 for (x=0;x<=4;x++)
     {
     for(y=0;y<=4;y++)
        {
          cout<<"Enter any integer: ";
          cin>>A[x][y];
         }
     }
     cout<<"Enter your search number= ";
     cin>>search;
     for (x=0;x<=4;x++)
       {
     for(y=0;y<=4;y++)
     {if (A[x][y]==search)
         ctr++;}}
     cout<<"OCCURS: "<<search;
     cout<<" TIMES: "<<ctr<<endl;
system("pause");
}
 

