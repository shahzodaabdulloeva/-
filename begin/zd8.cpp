#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b, p;
    cout<<"������� �������� ����� �:";
    cin>>a;
    cout<<"������� �������� ����� b:";
    cin>>b;
    p=(a+b)/2;
    cout<<"������� �������������� ���� ����� ����� :" << p;
}