#include <iostream>
using namespace std;
int main()
{
   int a;
   cin>>a;
   cout<<boolalpha<<(a/1000==a%10 and (a/100)%10==(a/10)%10);
}