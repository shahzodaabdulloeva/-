#include <iostream>
using namespace std;
int main()
{
    double  a; cin>>a;
    int n; cin >> n;
    double b=1;
    for(int i=1; i<=n ; i++)
    {
        b*=a;cout<<b<<" ";
    }
    
}