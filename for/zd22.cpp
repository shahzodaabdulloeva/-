#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n; cin>>n;
    double x; cin>>x;
    double fac=1, t=0, sum=0;
    for(int i=1; i<=n; i++)
    {
        fac*=i;
        t=pow(x, i); 
        sum+=t/fac;
    }
    cout<<1+sum;
}