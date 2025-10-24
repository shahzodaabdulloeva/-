#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double S, d, L, p=3.14;
    cout<<"¬ведите площадь круга :";
    cin>>S;
    d=sqrt((4*S)/p);
    cout<<"диаметр окружность равен :"<< d<<endl;
    L=p*d;
    cout<<"ƒлина окружность равен :"<< L;
}