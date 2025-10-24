#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b, p;
    cout<<"¬ведите значение число а:";
    cin>>a;
    cout<<"¬ведите значение число b:";
    cin>>b;
    p=(a+b)/2;
    cout<<"среднее арифметические двух чисел равен :" << p;
}