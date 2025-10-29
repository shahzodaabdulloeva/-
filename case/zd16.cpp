#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "russian");
    int a;
    cin>>a;
    switch(a/10)
    {
                    case 2:cout<<"˜˜˜˜˜˜˜˜ "; break;
                    case 3:cout<<"˜˜˜˜˜˜˜˜ "; break;
                    case 4:cout<<"˜˜˜˜˜ "; break;
                    case 5:cout<<"˜˜˜˜˜˜˜˜˜ "; break;
                    case 6:cout<<"˜˜˜˜˜˜˜˜˜˜ "; break;
    }
    switch(a%10)
    {
        case 0: cout<<"˜˜˜"; break;
        case 1: cout<<"˜˜˜˜ ˜˜˜"; break;
        case 2: cout<<"˜˜˜ ˜˜˜"; break;
        case 3: cout<<"˜˜˜ ˜˜˜"; break;
        case 4: cout<<"˜˜˜˜˜˜ ˜˜˜"; break;
        case 5: cout<<"˜˜˜˜ ˜˜˜"; break;
        case 6: cout<<"˜˜˜˜˜ ˜˜˜"; break;
        case 7: cout<<"˜˜˜˜ ˜˜˜"; break;
        case 8: cout<<"˜˜˜˜˜˜ ˜˜˜"; break;
        case 9: cout<<"˜˜˜˜˜˜ ˜˜˜"; break;
    }
}
         