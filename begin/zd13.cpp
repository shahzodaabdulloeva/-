#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double r1, r2, S1, S2, S3, p;
    p=3.14;
    cout<<"������� �������� ������ ������� ����� r1: ";
    cin>>r1;
    cout<<"������� �������� ������ ������� ����� r2: ";
    cin>>r2;
    S1=p*pow(r1, 2);
    cout<<"������� ������� ����� �����:"<< S1<<endl;
    S2=p*pow(r2, 2);
    cout<<"������� ������� ����� �����:"<< S2<<endl;
    S3=S1-S2;
    cout<<"������� ������� ����� �����:"<< S3<<endl;
}