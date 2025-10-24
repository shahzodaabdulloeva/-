#include <iostream>
using namespace std;
int main()
{
    double a, b, c, d;
  cin>>a>>b>>c;
    d=b;
    b=c;
    c=a;
     a=d;
     cout<<a<<b<<c;
}