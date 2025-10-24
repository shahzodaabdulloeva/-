#include <iostream>
using namespace std;
int main()
{
   double a, b, c;
   cin>>a>>b>>c;
   cout<<boolalpha<<(a*a==b*b+c*c or b*b==a*a+c*c or c*c==a*a+b*b);
}