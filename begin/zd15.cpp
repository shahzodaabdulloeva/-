#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double S, d, L, p=3.14;
    cout<<"������� ������� ����� :";
    cin>>S;
    d=sqrt((4*S)/p);
    cout<<"������� ���������� ����� :"<< d<<endl;
    L=p*d;
    cout<<"����� ���������� ����� :"<< L;
}