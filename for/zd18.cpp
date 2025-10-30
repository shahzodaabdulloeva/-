#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a; cin>>a;
    int n; cin>> n; double b=1, c=1;
    for(int i=1; i<=n; i++)
    {
       b=(pow(a, i)*pow(-1, i));
       c+=b;
    }
    cout<<c;
}