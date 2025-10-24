#include <iostream>
using namespace std;
int main()
{
    double a, a2, a3, a5, a10, a15;
    cin>>a;
    a2=a*a;
    a3=a2*a;
    a5=a3*a*a;
    a10=a5*a3*a*a;
    a15=a10*a*a*a*a*a;
    cout<<a15;
}