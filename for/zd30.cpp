#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int n; cin>>n;
  double a, b; cin>>a>>b;
  double h=0;
  for(int i=0; i<=n; i++)
  {
    h=(b-a)/n;
    double f;
    f=1-sin(a+i*h);
    cout<<f<<" ";
  }  
   cout<<"h="<<h;
}