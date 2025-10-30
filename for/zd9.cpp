#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int a, b, k;
    cin>>a>>b;
    for(int i=a; i<=b; i++)
    {
        k+=pow(i, 2);
    }
    cout<<k;  
}