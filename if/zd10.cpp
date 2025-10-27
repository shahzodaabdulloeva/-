#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b;
    if(a!=b)
    {
        c=a;
        a=c+b;
        b=c+b;
        cout<<a<<" "<<b;
    }
    else if(a==b)
    {
        cout<<0;
    }
}