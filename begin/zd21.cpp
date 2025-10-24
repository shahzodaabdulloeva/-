#include <iostream>
#include <math.h>
using namespace std;
int main()
{
   double x1, x2, x3, y1, y2, y3, P, S, a, b, c, p;
   cin>>x1>>y1>>x2>>y2>>x3>>y3;
   a=sqrt(pow((x2-x1), 2)+pow((y2-y1), 2));
   b=sqrt(pow((x3-x2), 2)+pow((y3-y2), 2));
   c=sqrt(pow((x3-x1), 2)+pow((y3-y1), 2));
   P=(a+b+c)/2;
   p=P*2;
   S=sqrt(P*(P-a)*(P-b)*(P-c));
   cout<<S<<" "<<p;

}