#include <iostream>
using namespace std; 
int main()
{
    int a, b, k=0;
    cin>>a>>b;
    for(int i=a; i<=b; i++)
    {
       k++; cout<<i<<" ";
    }
    cout<<k;
}