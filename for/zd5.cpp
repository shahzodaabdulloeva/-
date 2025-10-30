#include <iostream>
using namespace std;
int main()
{
   double n, k;
   cin>>n;
   for(double i=0.1; i<=1; i+=0.1)
   {
    k=n*i;
    cout<<k<<" ";
   } 
}