#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL , "Russian");
    int a;
    cin>>a;
    switch(a)
    {
        case 1: cout<<"плохо"; break;
        case 2: cout<<"неудовлетворительно"; break;
        case 3: cout<<"удовлетворительно"; break;
        case 4: cout<<"хорошо"; break;
        case 5: cout<<"отлично"; break;
        default:
         cout<<"ошибка";
    }
}