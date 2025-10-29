#include<iostream>
#include <cmath>
using namespace std;
int main()
{
   int k; cin>>k;
   double a; cin>>a;
   switch(k)
   {
    case 1: cout<<"a="<<a<<" "<<"R1="<<a*sqrt(3)/6<<" "<<"R2="<<2*a*sqrt(3)/6<<" "<<"s="<<pow(a,2)*sqrt(3)/4; break;
    case 2: cout<<"a="<<6*a/sqrt(3)<<" "<<"R1="<<a<<" "<<"R2="<<2*a<<" "<<"s="<<3*sqrt(3)*pow(a, 2); break;
    case 3: cout<<"a="<<6*(a/2)/sqrt(3)<<" "<<"R1="<<a/2<<" "<<"R2="<<a<<" "<<"s="<<pow((6*(a/2)/sqrt(3)),2)*sqrt(3)/4; break;
    case 4: cout<<"a="<<sqrt(4*a/sqrt(3))<<" "<<"R1="<<(sqrt(4*a/sqrt(3)))*sqrt(3)/6<<" "<<"R2="<<2*(sqrt(4*a/sqrt(3)))*sqrt(3)/6<<" "<<"s="<<a; break;

   }   
}