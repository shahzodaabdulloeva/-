#include <iostream>
using namespace std;
int main()
{
    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    cout<<boolalpha<<((x1%2==0 and y1%2!=0)or (x1%2!=0 and y1%2==0));
}