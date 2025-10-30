//Дано вещественное числоXи целое числоN(> 0). Найти значениевыраженияX−X3/(3!) +X5/(5!)−. . .+ (−1)N·X2·N+1/((2·N+1)!)(N! = 1·2·. . .·N). Полученное число является приближенным значениемфункции sin в точкеX

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x; cin>>x;
    int n; cin>>n;
    double t=1, fac=1, sum=0;
    for(int i=0; i<=n; i++)
    {
        int step;
        step=2*i+1;
        for(int j=0; j<=step; j++)
        {
            fac*=j;
        }
        t=pow(x, step)*pow(-1, i);
        sum+=t/fac;
    }
    cout<<sum;
}