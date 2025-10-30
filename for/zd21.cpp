#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    double m=1, l=0;
    for(int i=1; i<=n; i++)
    {
        m*=i;
        l+=1/m;
    }
    cout<<1+l;
}