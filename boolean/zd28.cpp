#include <iostream>
using namespace std;
int main()
{
    double x, y;
    cin>>x>>y;
    cout<<boolalpha<<((x>0 and y>0) or (x<0 and y<0));
}