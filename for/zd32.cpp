#include <iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    double a=1;
    for(int i=1; i<=n; i++)
    {
        a=(a+1)/i;
        cout<<a<<" ";
    }
}