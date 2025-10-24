#include<iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
   
    double a, V, S;
    cout<<"Введите длина куба: ";
    cin>>a;
    V=a*a*a;
    S=6*a*a;
    cout<<"Объем куба равен :"<< V<<endl;
    cout<<"Площад куба равен :"<< S<<endl;

}