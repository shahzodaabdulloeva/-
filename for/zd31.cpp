#include <iostream>
using namespace std;
int main()
{
    int n; cin>>n; double a=2;
    for(int i=1; i<=n; i++)
    {
       a=2+1/a;
       cout<<a<<" ";
    }
}