#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    cin>>a>>b>>c;
    if(a>b and c>b)
    {
        cout<<b;
    }
    else if(a<b and a<c)
    {
        cout<<a;
    }
    else if(a>c and b>c)
    {
        cout<<c;
    }
}