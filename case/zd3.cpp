#include <iostream>
using namespace std;
int main()
{
    setlocale (LC_ALL, "russian");
    int a;
    cin>>a;
    switch(a)
    {
        case 1:
        case 2: 
        case 12:
                  cout<<"����"; break;
        case 3:
        case 4:
        case 5:
                  cout<<"�����"; break;
        case 6: 
        case 7:
        case 8:
                cout<<"����"; break;
        case 9:
        case 10:
        case 11:
                cout<<"�����"; break;
        default: cout<<"����� ����� (1-12)";
    }
    
}