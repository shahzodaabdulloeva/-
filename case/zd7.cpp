#include <iostream>
#include"iomanip"
using namespace std;
int main()
{
    int a;
    cin>>a;
    double b;
    cin>>b;
    switch(a)
    {
        case 1: cout<<fixed<<setprecision(1)<<b; break;
        case 2: cout << fixed << setprecision(6) <<double(b)/1000000; break;
        case 3: cout<<fixed<<setprecision(1)<<b/1000; break;
        case 4: cout<<fixed<<setprecision(1)<<b*1000;break;
        case 5: cout<<fixed<<setprecision(1)<<b*100;break;
    }
}