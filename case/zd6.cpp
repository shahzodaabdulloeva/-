#include "iostream"
using namespace std;
int main()
{
   int a;
   cin>>a;
   double b;
   cin>>b;
   switch(a)
   {
    case 1: cout<<b/10; break;
    case 2: cout<<b*1000;break;
    case 3: cout<<b;break;
    case 4: cout<<b/1000;break;
    case 5: cout<<b/100;break;
   }
}