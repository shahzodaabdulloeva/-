#include <iostream>
using namespace std;
int main()
{
      setlocale(LC_ALL, "Russian");
    int a;
    cin>>a;
    switch(a)
    {
        case 1:
        case 10:
        cout<<"�����������"; break;
        case 2: cout<<"�������"; break;
        case 3: cout<<"�����"; break;
        case 4: cout<<"�������"; break;
        case 5: cout<<"�������"; break;
        case 6: cout<<"�������";break;
        case 7: cout<<"�����������";break;
        
        default : cout<<"����� ���������� ����� � ��������� (1-7) !!!!!";
    }
}
   
