#include <iostream>
using namespace std;
int main()
{
    double n, k;
    cin>>n;
    for(double i=1.2; i<=2; i+=0.2)
    {
        k=n*i;
        cout<<k<<" ";
    }
}