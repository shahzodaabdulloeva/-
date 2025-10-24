#include <iostream>
using namespace std;
int main()
{
    double x, y, x1, x2, y1, y2;
    cin>>x>>y>>x1>>y1>>x2>>y2;
    cout<<boolalpha<<(x1<x and x<x2 and y1<y and y<y2);
}