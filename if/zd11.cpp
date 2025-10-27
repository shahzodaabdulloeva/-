#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    if(a!=b)
    {
        if(a>b)
        {
            b=a;
            cout<<a<<b;
        }
        else if(a<b)
        {
            a=b;
            cout<<a<<b;
        }

    }
    else if(a==b)
    {
        cout<<0;
    }
}