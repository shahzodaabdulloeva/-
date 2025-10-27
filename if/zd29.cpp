#include <iostream>
using namespace std;
int main()
{
    setlocale (LC_ALL, "russian");
    int a;
    cin>>a;
    if(a>0 and a%2==0)
    {
        cout<<"отрицательное четное число";
    }
    else if(a>0 and a%2!=0)
    {
        cout<<"отрицательное нечетное число";
    }
    else if(a==0)
    {
        cout<<"нулевое число";
    }
    else if(a<0 and a%2==0)
    {
        cout<<"неотрицательное четное число";
    }
    else if(a<0 and a%2!=0)
    {
        cout<<"неотрицательное нечетное число";
    }
}