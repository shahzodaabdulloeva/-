#include<iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
   
    double a, V, S;
    cout<<"������� ����� ����: ";
    cin>>a;
    V=a*a*a;
    S=6*a*a;
    cout<<"����� ���� ����� :"<< V<<endl;
    cout<<"������ ���� ����� :"<< S<<endl;

}