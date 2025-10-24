#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    cin>>a>>b>>c;
    cout<<boolalpha<<(a==b and a==c and b==c);
}