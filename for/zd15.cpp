#include <iostream>
using namespace std;
int main()
{
    int a, n;
    cin>>a>>n;
    int b=1;
    for(int i=1; i<=n ; i++)
    {
        b*=a;
    }
    cout<<b;
}