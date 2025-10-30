#include <iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    double a, b; cin>>a>>b;
    double h=0;
    for(int i=0; i<=n; i++)
    {
       
       h=(b-a)/n;
       
       cout<<a+i*h;    
    }
    cout<<h<<endl;
}