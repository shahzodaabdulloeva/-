#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double k=1;
    for(double i=1.1; i<=n; i+=0.1)
    {
        k*=i;
    }
    cout<<k;
}