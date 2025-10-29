#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    double a;
    cin>>a;
    int k;
    cin>>k;
    switch(k)
    {
        case 1: 
                cout<<"R= "<<a<<" "<<"D= "<<2*a<<" "<<"l= "<<2*3.14*a<<" "<<"s= "<<3.14*a*a; break;
        case 2: 
                cout<<"R= "<<a/2<<" "<<"D= "<<a<<" "<<"l= "<<3.14*a<<" "<<"s= "<<3.14*(a/2)*(a/2); break;
        case 3:
                cout<<"R= "<<a/(2*3.14)<<" "<<"D= "<<a/3.14<<" "<<"l= "<<a<<" "<<"s= "<<3.14*(a/(2*3.14)*a/(2*3.14)); break;
        case 4:
                cout<<"R= "<<sqrt(a/3.14)<<" "<<"D= "<<2*sqrt(a/3.14)<<" "<<"l= "<<2*3.14*sqrt(a/3.14)<<" "<<"s= "<<a; break;

    }
}