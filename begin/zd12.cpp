#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c, P;
    cout<<"������ ����� �������������� ������������ �:";
    cin>>a;
    cout<<"������� ����� �������������� ������������ b:";
    cin>>b;
    c=sqrt(pow(a, 2)+pow(b, 2));
    P=a+b+c;
    cout<<"���������� �������������� ����������� ����� :"<< c <<endl;
    cout<<"�������� �������������� ����������� ����� :"<< P <<endl;
    
}