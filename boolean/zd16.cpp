#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    cout<<boolalpha<<(a<100 and a>10 and a%2==0);
}