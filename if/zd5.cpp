#include <iostream>
using namespace std;
int main()
{
    int a, b, c, k=0, k1=0;
    cin>>a>>b>>c;
    if(a>0)
    {
        k++;
    }
    if(b>0)
    {
        k++;
    }
    if(c>0)
    {
        k++;
    }
    cout<<k<<endl;;
    if(a<0)
    {
        k1++;
    }
    if(b<0)
    {
        k1++;
    }
    if(c<0)
    {
        k1++;
    }
    cout<<k1;
}