#include <iostream>
using namespace std;
int main()
{
    double a1, a2, b1, b2, c1, c2, x, y;
    cin>>a1>>b1>>c1>>a2>>b2>>c2;
    x=(c1*b2-c2*b1)/(a1*b2-a2*b1);
    y=(c2*a1-c1*a1)/(a1*b2-a2*b1);
    cout<<x<<" "<<y;

}