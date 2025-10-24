#include <iostream>
using namespace std;
int main ()
{
    int a, b;
    cin>>a>>b;
    cout<<boolalpha<<((a%2==0 and b%2==0) or (a%2!=0 and b%2!=0));
}