#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    cout<<boolalpha<<((a>0 and b<=0 and c<=0) or (b>0 and a<=0 and c<=0) or (c>0 and a<=0 and b<=0));
}