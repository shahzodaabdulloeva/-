#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b;
    cout<<"������� �������� ������� ����� �:";
    cin>>a;
    cout<<"������� �������� ������� ����� b:";
    cin>>b;
    cout<<"������ ����� ���� ����� ����� :"<< abs(a)+abs(b)<<endl;
    cout<<"������ �������� ���� ����� ����� :"<<abs(a)-abs(b)<<endl;
    cout<<"������ ������������ ���� ����� ����� :"<<abs(a)*abs(b)<<endl;
    cout<<"������ ������� ���� ����� ����� :"<< abs(a)/abs(b);

}