#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double L, r, S, p=3.14;
    cout<<"������� ����� ���������� :";
    cin>>L;
    r=L/(2*p);
    cout<<"������ ����� ����� :"<< r<<endl;
    S=p*pow(r, 2);
    cout<<"������� ����� ����� :"<< S;


}