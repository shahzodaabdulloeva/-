#include <iostream>
using namespace std;
int main ()
{
    double x;
    cin>>x;
    if(x<=0)
    {
        cout<<-x;
    }
    else if(0<x and x<2)
    {
        cout<<x*x;
    }
    else if(x>=2)
    {
        cout<<4;
    }
}