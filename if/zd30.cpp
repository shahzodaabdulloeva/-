#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cin>>a;
    if(a%2==0)  cout<<"четное ";
    else cout<<"нечетное ";
    if(a>=1 and a<=9) cout<<"однозначное число";
    else if(a<=10 and a>=99) cout<<"двухзначное число";
    else cout<<"трехзначное число";
}