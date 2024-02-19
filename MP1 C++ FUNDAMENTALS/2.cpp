#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int km;
    float C;
    cout << " Enter the Meter that you travel: ";
    cin >> km ;
    C=km*1000*5.00/500;
    cout<< " Your Bill is "<<C;
    cout<<" "<<endl;
    system("pause");
}
