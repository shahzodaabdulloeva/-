#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    cout<<(a/c)*(b/c)<<endl;
    cout<<(a*b)-((a/c)*(b/c))*(c*c);
}