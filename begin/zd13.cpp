#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double r1, r2, S1, S2, S3, p;
    p=3.14;
    cout<<"Введите значения радиус первого круга r1: ";
    cin>>r1;
    cout<<"Введите значения радиус второго круга r2: ";
    cin>>r2;
    S1=p*pow(r1, 2);
    cout<<"Площадь первого круга равен:"<< S1<<endl;
    S2=p*pow(r2, 2);
    cout<<"Площадь второго круга равен:"<< S2<<endl;
    S3=S1-S2;
    cout<<"Площадь третого круга равен:"<< S3<<endl;
}