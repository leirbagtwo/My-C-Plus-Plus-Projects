#include<iostream>
using namespace std;
int main() {
	int a[4][4];
	 int x,y,search=0,ctr=0;
	//INPUT FOR ARRAY
	for(int x = 0; x < 4; x++) {
		for (int y = 0; y < 4; y++) {
			cout << "Enter a number: ";
			cin >> a[x][y];
		}
	}
	//OUTPUT
	for(int x = 0; x < 4; x++) {
		for (int y = 0; y < 4; y++){
			cout << a[x][y] << " ";
		}
		cout << endl;
	}
	
     cout<<"Enter your search number= ";
     cin>>search;
     for (x=0;x<=4;x++)
       {
     for(y=0;y<=4;y++)
     {if (a[x][y]==search)
         ctr++;}}
     cout<<"OCCURS: "<<search;
     cout<<" TIMES: "<<ctr<<endl;
	system("pause");
}
