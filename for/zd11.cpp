#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, k;
    cin>>n;
    for(int i=n; i<=2*n; i++)
    {
        k+=pow(i, 2);
    }
    cout<<k;
}