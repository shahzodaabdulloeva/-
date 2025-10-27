#include <iostream> 
using namespace std;
int main()
{
    double a, b, c;
    cin>>a>>b>>c;
    if((a<b and b<c)or(a>b and b>c))
    {
        cout<<b;
    }
    else if((b<a and a<c) or (b>a and a>c))
    {
        cout<<a;
    }
    else if((a<c and c<b) or (a>c and c>b))
    {
        cout<<c;
    }
}