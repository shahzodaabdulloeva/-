#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        sum+=pow(i, k);
    }
    cout<<sum;
}