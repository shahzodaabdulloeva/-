#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double A, B, C;
    cout<<"Введите значение точка A ";
    cin>>A;
    cout<<"Введите значение точка B ";
    cin>>B;
    cout<<"Введите значение точка C ";
    cin>>C;
    cout<<"расстояние АС= "<<abs(A-C)<<endl;
    cout<<"расстояние BC= "<<abs(B-C)<<endl;
    cout<<abs(A-C)+abs(B-C);
    

}