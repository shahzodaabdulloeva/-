#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b;
    cout<<"������� �������� ������� ����� a:";
    cin>>a;
    cout<<"������� �������� ������� ����� b:";
    cin>>b;
    cout<<"������� ����� ���� ����� ����� :"<< pow(a, 2)+pow(b, 2)<<endl;
    cout<<"������� �������� ���� ����� ����� :"<<pow(a, 2)-pow(b, 2)<<endl;
    cout<<"������� ������������ ���� ����� ����� :"<<pow(a, 2)*pow(b, 2)<<endl;
    cout<<"������� ������� ���� ����� ����� :"<< pow(a, 2)/pow(b, 2);
}