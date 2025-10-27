#include<iostream>
#include <math.h>
#include<cmath>
using namespace std;
int main()
{
    double x, y;
    cin>>x;
    if(x>0)
    {
        y=2*sin(x);
        cout<<y;
    }
    else if (x<=0)
    {
        y=6-x;
        cout<<y;
    }
}