#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "russian");
    int c, n;
    cin>>c>>n;
    switch(c)
    {
        case 'ñ':
          switch(n)
          {
             case -1: cout<<"â"; break;
             case 1: cout<<"ç"; break;
             case 0: cout<<"c"; break;
          }
          break;
        case 'ç':
          switch(n)
          {
             case -1: cout<<"þ"; break;
             case 1: cout<<"c"; break;
             case 0: cout<<"ç"; break;
          }
          break;
        case 'þ':
          switch(n)
          {
             case -1: cout<<"â"; break;
             case 1: cout<<"ç"; break;
             case 0: cout<<"þ"; break;
          }
          break;
        case 'â':
          switch(n)
          {
             case -1: cout<<"ñ"; break;
             case 1: cout<<"þ"; break;
             case 0: cout<<"â"; break;
          }
          break;
    }
}