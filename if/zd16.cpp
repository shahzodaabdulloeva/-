#include <iostream> 
using namespace std;
int main()
{
    double a, b, c;
    cin>>a>>b>>c;
    if(a<b and b<c)
    {
        cout<<2*a<<" "<<2*b<<" "<<2*c;
    }
    else
    cout<<-a<<" "<<-b<<" "<<-c; 
}