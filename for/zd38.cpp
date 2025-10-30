#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n; cin>>n;
    double sum=0;
    for(int i=1; i<=n; i++)
    {
        int step;
       step=n-i+1;
        sum+=pow(i, step);
    }
    cout<<sum;
}