#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double x1, x2;
    cout<<"������� �������� ������� ����� : ";
    cin>>x1;
    cout<<"������� �������� ������� ����� :";
    cin>>x2;
    cout<<"�������� ����� ���� ����� ����� :"<< abs(x2-x1);
}