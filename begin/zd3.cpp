#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b, S, P;
    cout<<"������� ����� �������������� ";
    cin>>a;
    cout<<"������� ������ �������������� ";
    cin>>b;
    S=a*b;
    P=2*(a+b);
    cout<<"������ �������������� �����: "<< S<<endl;
    cout<<"�������� �������������� �����: "<< P<<endl;

}