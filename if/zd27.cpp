#include <iostream>
using namespace std;
int main()
{
    float x;
    cin>>x;

    if(x<0)
    {
        cout<<0;
    }
    else if(int(x)%2==0)
    {
        cout<<1;
    }
    else if(int(x)%2!=0)
    {
        cout<<-1;
    }
}