#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b;
    cout<<"Введите значения первого числа а:";
    cin>>a;
    cout<<"Введите значения второго числа b:";
    cin>>b;
    cout<<"Модуль суммы двух чисел равен :"<< abs(a)+abs(b)<<endl;
    cout<<"Модуль разность двух чисел равен :"<<abs(a)-abs(b)<<endl;
    cout<<"Модуль произведение двух чисел равен :"<<abs(a)*abs(b)<<endl;
    cout<<"Модуль частное двух чисел равен :"<< abs(a)/abs(b);

}