#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "russian");
    int c, n;
    cin>>c>>n;
    switch(c)
    {
        case '�':
          switch(n)
          {
             case -1: cout<<"�"; break;
             case 1: cout<<"�"; break;
             case 0: cout<<"c"; break;
          }
          break;
        case '�':
          switch(n)
          {
             case -1: cout<<"�"; break;
             case 1: cout<<"c"; break;
             case 0: cout<<"�"; break;
          }
          break;
        case '�':
          switch(n)
          {
             case -1: cout<<"�"; break;
             case 1: cout<<"�"; break;
             case 0: cout<<"�"; break;
          }
          break;
        case '�':
          switch(n)
          {
             case -1: cout<<"�"; break;
             case 1: cout<<"�"; break;
             case 0: cout<<"�"; break;
          }
          break;
    }
}