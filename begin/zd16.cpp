#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double x1, x2;
    cout<<"Введите значение первого число : ";
    cin>>x1;
    cout<<"Введите значение второго число :";
    cin>>x2;
    cout<<"Растояни между двух чисел равен :"<< abs(x2-x1);
}