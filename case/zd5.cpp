#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cin>>n;
    double a, b;
    cin>>a>>b;
    switch(n)
    {
        case 1: cout<<a+b; break;
        case 2: cout<<a-b;break;
        case 3: cout<<a*b; break;
        case 4: cout<<a/b; break;
    }
}