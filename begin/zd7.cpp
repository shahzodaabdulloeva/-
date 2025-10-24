#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double r, L, S, p;
    p=3.14;
    cout<<"Введите  радиуса окружност: ";
    cin>>r;
    L=2*p*r;
    S=p*r*r;
    cout<<"Длину окружност равен: "<< L<<endl;
    cout<<"Площад окружност равен: "<< S<<endl;

}