#include<iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double d, L, p;
    p=3.14;
    cout<<"¬ведите диаметр окружности d:";
    cin>>d;
    L=d*p;
    cout<<"ƒлина окружност равен :"<< L<<endl;
}