#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    double m=1;
    for(int i=1; i<=n; i++)
    {
        m*=i;
    }
    cout<<m;
}