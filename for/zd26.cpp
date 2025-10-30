#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x; cin>>x;
    int n ; cin>>n;
    double sum=0; 
    for(int i=0; i<=n; i++)
    {
        int step; step=2*i+1;
        double t; t=abs(x);
        sum+=(pow(-1, i)*pow(t, step))/step;
    }
    cout<<sum;
}