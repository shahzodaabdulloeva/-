#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b;
    cout<<"¬ведите значени€ первого числа a:";
    cin>>a;
    cout<<"¬ведите значени€ второго числа b:";
    cin>>b;
    cout<<" вадрат суммы двух чисел равен :"<< pow(a, 2)+pow(b, 2)<<endl;
    cout<<" вадрат разность двух чисел равен :"<<pow(a, 2)-pow(b, 2)<<endl;
    cout<<" вадрат произведение двух чисел равен :"<<pow(a, 2)*pow(b, 2)<<endl;
    cout<<" вадрат частное двух чисел равен :"<< pow(a, 2)/pow(b, 2);
}