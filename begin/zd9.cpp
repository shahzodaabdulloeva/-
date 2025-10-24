#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, q;
    cout<<"Введитте значения число a:";
    cin>>a;
    cout<<"Введите значения число b:";
    cin>>b;
    q=sqrt(a*b);
    cout<<"Среднее геометрическое равен :"<< q;

}