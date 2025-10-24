#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    //cout<<(a/100)+(a/100!=0);
    cout<<boolalpha<<((a%10>(a/10)%10 )and (a/100<a/10%10 ) );
}