#include <iostream>
using namespace std;
int main()
{
    double x1, x2, y1, y2, P, S;
    cin>>x1>>x2>>y1>>y2;
    P=2*(abs(x2-x1)+abs(y2-y1));
    S=abs(x2-x1)*abs(y2-y1);
    cout<<P<<" "<<S;

}