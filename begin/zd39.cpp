#include <iostream>
#include <math.h>
using namespace std;
int main()
{
   double x1, x2, a, b , c;
   cin>>a>>b>>c;
   x1=(-b+sqrt(pow(b, 2)-4*a*c))/2*a;
   x2=(-b-sqrt(pow(b, 2)-4*a*c))/(2*a);
   cout<<x1<<" "<<x2;

}