#include<iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double d, L, p;
    p=3.14;
    cout<<"������� ������� ���������� d:";
    cin>>d;
    L=d*p;
    cout<<"����� ��������� ����� :"<< L<<endl;
}