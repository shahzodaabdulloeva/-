#include <iostream>
using namespace std;
int main()
{
    setlocale (LC_ALL, "russian");
    int a;
    cin>>a;
    if(a>0 and a%2==0)
    {
        cout<<"������������� ������ �����";
    }
    else if(a>0 and a%2!=0)
    {
        cout<<"������������� �������� �����";
    }
    else if(a==0)
    {
        cout<<"������� �����";
    }
    else if(a<0 and a%2==0)
    {
        cout<<"��������������� ������ �����";
    }
    else if(a<0 and a%2!=0)
    {
        cout<<"��������������� �������� �����";
    }
}