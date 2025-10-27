#include <iostream>
using namespace std;
int main()
{
     int a, b, c, d;
    cin>>a>>b>>c>>d;
    if(a==b and b==c)
    {
        cout<<4;
    }
    else if(a==b and b==d)
    {
        cout<<3;
    }
    else if(b==c and c==d)
    {
        cout<<1;
    }
     else if(a==c and c==d)
    {
        cout<<2;
    }
}