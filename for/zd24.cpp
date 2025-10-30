//Дано вещественное числоXи целое числоN(> 0). Найти значениевыражения1−X2/(2!) +X4/(4!)−. . .+ (−1)N·X2·N/((2·N)!)(N! = 1·2·. . .·N). Полученное число является приближенным значениемфункции cos в точкеX
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x; cin>>x;
    int n; cin>>n;
    double sum;
    for(int i=0; i<=n; i++)
    {
        int step;
        step=2*i;
        int fac=1;
        for(int j=1; j<=step; j++)
        {
            fac*=j;
        }
        double t;
        t=pow(-1, i)*pow(x, 2*i);
        sum+=t/fac;

    }
    cout<<sum;
    
}