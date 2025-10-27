#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    cin>>a>>b;
    if(a>b)
    {
        c=a;
        a=b;
        b=c;
        cout<<a<<" "<<b;
    }
    else if (a<b)
    {
        cout<<a<<" "<<b;
    }
}