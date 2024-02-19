#include<iostream>  
using namespace std; 
float gall(float, float);  
float hrs (float, float);  
float paint (float, float, float);  
float lab (float, float); 
float cost (float, float, float); 
int main() 
{ 
float a, b, c, g, h, cst, ch, ttl; 
cout<< "Enter the Number of Rooms: "; 
cin>> a; 
cout<< "Enter Price of the Paint per Gallon: "; 
cin>> b; 
cout<< "Enter the Square Feet of Wall Space in Each Room: "; 
cin>> c; 
g=gall(a,c); 
h=hrs(a,c); 
cst=paint(a,b,c); 
ch=lab(a,c); 
ttl=cost(a,b,c); 
cout<< "\nThe Number of Gallons of Paint needed is " << g << endl; 
cout<< "\nThe Hours of Labor Required is " << h << endl; 
cout<< "\nThe Cost of the Paint is " << cst << endl; 
cout<< "\nThe Labor Charges is " << ch << endl; 
cout<< "\nThe Total Cost of the Paint Job is " << ttl << endl; 
system ("pause"); 
} 
float gall (float a, float c) 
{ 
float w; w=(c/115)*a; return (w); 
} 
float hrs (float a, float c) 
{ float x; x=((c/115)*a)*8; return (x); } 
float paint (float a, float b, float c) 
{ 
float y; y=((c/115)*a)*b; return (y); } 
float lab (float a, float c) 
{ 
float z; 
z=(((c/115)*a)*8)*120.00; 
return (z); } 
float cost (float a, float b, float c) 
{ float l; 
l=((((c/115)*a)*8)*120.00)+(((c/115)*a)*b); return (l); 
}
