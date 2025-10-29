#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "russian");
    int c, n1, n2;
    cin>>c>>n1>>n2;
    switch(c)
    {
        case 'с':
          switch(n1)
          {
             case -1: cout<<"в"; break;
             case 1: cout<<"з"; break;
             case 0: cout<<"ю"; break;
          }
          switch(n2)
          {
             case -1: cout<<"з"; break;
             case 1: cout<<"в"; break;
             case 0: cout<<"c"; break;
          }
          break;
        case 'з':
          switch(n1)
          {
             case -1: cout<<"с"; break;
             case 1: cout<<"ю"; break;
             case 0: cout<<"в"; break;
          }
          switch(n2)
          {
             case -1: cout<<"ю"; break;
             case 1: cout<<"c"; break;
             case 0: cout<<"з"; break;
          }
          break;
        case 'ю':
          switch(n1)
          {
             case -1: cout<<"з"; break;
             case 1: cout<<"в"; break;
             case 0: cout<<"с"; break;
          }
          switch(n2)
          {
             case -1: cout<<"з"; break;
             case 1: cout<<"в"; break;
             case 0: cout<<"ю"; break;
          }
          break;
        case 'в':
          switch(n1)
          {
             case -1: cout<<"ю"; break;
             case 1: cout<<"с"; break;
             case 0: cout<<"з"; break;
          }
          switch(n2)
          {
             case -1: cout<<"с"; break;
             case 1: cout<<"ю"; break;
             case 0: cout<<"в"; break;
          }
          break;
        }
}