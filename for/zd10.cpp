#include <iostream>
using namespace std;
int main()
{
    int n;
    double k=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        k+=(1/i);
    }
    cout<<k;
}