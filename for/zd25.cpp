//Дано вещественное  числоX(|X| < 1)  и  целое  числоN(> 0).  Найтизначение выраженияX−X2/2 +X3/3−. . .+ (−1)N−1·XN/N.Полученное число является приближенным значением функции ln в точ-ке 1 +X.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x; cin>>x;
    int n; cin>>n;
    double sum=0, t;
    for(int i=1; i<=n; i++)
    {
        t=abs(x);
        sum+=(-1)*(pow(-1, i)*pow(t, i))/i;
    }
    cout<<sum;
}