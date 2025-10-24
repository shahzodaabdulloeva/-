#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin>>x>>y;
    cout<<boolalpha<<((x%2==0 and y%2!=0)or (x%2!=0 and y%2==0));
}