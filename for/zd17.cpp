#include <iostream>
using namespace std;
int main()
{
    double  a; cin>>a;
    int n; cin >> n;
    double b=1, c=0;
    for(int i=1; i<=n ; i++)
    {
        b*=a;
        c+=b;
     
    }
       cout<<c+1<<" ";
}