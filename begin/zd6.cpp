#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b, c, V, S;
    cout<<"������� ����� ��������������� �:" ;
    cin>>a;
    cout<<"������� ������ ��������������� b:" ;
    cin>>b;
    cout<<"������� ������ ��������������� c:" ;
    cin>>c;
    V=a*b*c;
    S=2*(a*b+b*c+a*c);
    cout<<"����� ��������������� ����� :"<< V<<endl; 
    cout<<"������ ��������������� ����� :"<< S<<endl;

}