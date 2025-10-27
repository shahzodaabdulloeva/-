#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    cin>>a>>b>>c;
    if(b-a>c-a)
    {
        cout<<c<<" "<<c-a;
    }
    else if(b-a<c-a)
    {
        cout<<b<<" "<<b-a;
    }
}