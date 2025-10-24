#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c, P;
    cout<<"Ведите катет прямоугольного триугольника а:";
    cin>>a;
    cout<<"Введите катет прямоугольного триугольника b:";
    cin>>b;
    c=sqrt(pow(a, 2)+pow(b, 2));
    P=a+b+c;
    cout<<"Гипотенуза прямоугольного триугольник равен :"<< c <<endl;
    cout<<"Периметр прямоугольного триугольник равен :"<< P <<endl;
    
}