#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b, S, P;
    cout<<"Введите длина прямоугольника ";
    cin>>a;
    cout<<"Введите высота прямоугольника ";
    cin>>b;
    S=a*b;
    P=2*(a+b);
    cout<<"Площад прямоугольнтка равен: "<< S<<endl;
    cout<<"Периметр прямоугольника равен: "<< P<<endl;

}