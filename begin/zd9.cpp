#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, q;
    cout<<"�������� �������� ����� a:";
    cin>>a;
    cout<<"������� �������� ����� b:";
    cin>>b;
    q=sqrt(a*b);
    cout<<"������� �������������� ����� :"<< q;

}