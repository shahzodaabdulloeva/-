#include <iostream>
using namespace std;
int main()
{
   setlocale(LC_ALL, "russian");
   int a; 
   cin>>a;
   switch(a)
   {
     case 2: cout<<28; break;
     case 1:
     case 3:
     case 5:
     case 7: 
     case 8:
     case 10:
              cout<<31; break;
     case 4:
     case 6:
     case 9:
     case 11:
             cout<<30; break;
        default: cout<<"введите число в диапазоне 1-12";
   } 
}